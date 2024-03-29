/*
 Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints

1≤n≤10^6; 1≤ai≤10^9

Output Format

In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO.

Sample Input 0

6
1 2 3 8 9 22
Sample Output 0

YES
Sample Input 1

5
1 2 8 8 10
Sample Output 1

NO
 */

#include <iostream>
using namespace std;

bool check(int a[], int N);
int main() {
  int N;
  cin >> N;
  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  if(check(a, N)) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO";
  }
  return 0;
}

bool check(int a[], int N) {
  for(int i = 1; i < N; i++) {
    if(a[i] <= a[i - 1]) {
      return false;
    }
  }
  return true;
}

