/*
 Cho 2 mảng số nguyên, thực hiện tìm hợp và giao của 2 mảng. Các phần tử trong mỗi mảng khác nhau đôi một.

Input Format

Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

Constraints

1<=n,m<=10^5; -10^6<=a[i]<=10^6;

Output Format

Dòng đầu tiên in ra giao của 2 mảng. Dòng thứ 2 in ra hợp của 2 mảng

Sample Input 0

3 5
1 2 3 
1 2 9 5 3
Sample Output 0

1 2 3
1 2 3 5 9
 */
#include <iostream>
#include <set>

using namespace std;

void HopvaGiao(set<int>& se, int a[], int b[] ,int N, int M);

int main() {
  int N, M;
  cin >> N >> M;

  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int b[M];
  set<int> se;
  for(int i = 0; i < M; i++) {
    cin >> b[i];
    se.insert(b[i]);
  }
  
  HopvaGiao(se, a, b, N, M);
  return 0;
}

void HopvaGiao(set<int>& se, int a[], int b[], int N, int M) {
  for(int i = 0; i < N; i++) {
    if(se.find(a[i]) != se.end()) {
      cout << a[i] << " ";
    }
  }

  cout << endl;

  for(int i = 0; i < N; i++) {
    if(se.find(a[i]) == se.end()) {
      se.insert(a[i]);
    } 
  }

  for(auto it : se) {
    cout << it << " ";
  }
}

