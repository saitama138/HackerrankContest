/*
Cho dãy số A[] gồm có N phần tử và số nguyên X, hãy in ra vị trí xuất hiện đầu tiên và vị trí xuất hiện cuối cùng của X trong mảng, trong trường hợp X không xuất hiện trong mảng thi in ra -1.

Input Format

Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i], X ≤ 10^9;

Output Format

In ra kết quả của bài toán.

Sample Input 0

10 5
1 2 3 4 5 6 7 5 2 8
Sample Output 0

5 8
Sample Input 1

10 9
1 2 3 5 6 7 8 2 1 21
Sample Output 1

-1 -1
 */

#include <iostream>
using namespace std;

void Vitridautienvacuoicung(int a[], int N, int x);
int main() {
  int N, x;
  cin >> N >> x;
  int a[N];

  for(int i = 1; i <= N; i++) {
    cin >> a[i];
  }

  Vitridautienvacuoicung(a, N, x);
  return 0;
}

void Vitridautienvacuoicung(int a[], int N, int x) {
  bool check = false;
  for(int i = 0; i < N; i++) {
    if(x == a[i]) {
      cout << i << " ";
      check = true;
      break;
    }
  }

  for(int i = N - 1; i >= 0; i--) {
    if(a[i] == x) {
      cout << i << " ";
      check = true;
      break;
    }
  }

  if(!check) {
    cout << -1 << " " << -1;
  }
}

