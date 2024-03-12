/*
 *
 Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng .

Constraints

1≤n≤1000000; 0≤ai≤10^6

Output Format

In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.

Sample Input 0

5
1 2 2 3 1
Sample Output 0

2
 */
#include <iostream>
#include <set>
using namespace std;

void Solaplai(set<int>& se, int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];
  set<int> se;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  Solaplai(se, a, N);
  return 0;
}

void Solaplai(set<int>& se, int a[], int N) {
  bool check = false;
  for(int i = 0; i < N; i++) {
    if(se.find(a[i]) == se.end()) {
      se.insert(a[i]);
    }
    else {
      cout << a[i];
      check = true;
      break;
    }
  }
  if(!check) {
    cout << -1;
  }
}

