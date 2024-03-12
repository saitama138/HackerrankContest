/*
 Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ vị trí l tới chỉ số r.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ 2. Q dòng tiếp theo mỗi dòng là 2 ví trị l, r.

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

Output Format

In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

Sample Input 0

5
1 2 3 4 5 
1
1 3
Sample Output 0

6
 */
#include <iostream>
using namespace std;

long long F[1000001];
void mangcongdon(int a[], int N);
void TruyVan(int l, int r);
int main() {
  int N;
  cin >> N;

  int a[N];;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int q;
  cin >> q;
  mangcongdon(a, N);
  while(q--) {
    int l = 0, r = 0;
    cin >> l >> r;
    l--;
    r--;
    TruyVan(l, r);
    cout << endl;
  }
  return 0;
}

void mangcongdon(int a[], int N) {
  for(int i = 0; i < N; i++) {
    if(i == 0) {
      F[0] = a[0];
    }
    else {
      F[i] = F[i - 1] + a[i];
    }
  }
}

void TruyVan(int l, int r) {
  cout << F[r] - F[l - 1];
}

