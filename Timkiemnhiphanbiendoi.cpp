/*
 Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.

Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.

Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.

Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.

Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

Input Format

Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^6; 0<=A[i],X<=10^6;

Output Format

In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

Sample Input 0

10 1160
19 1600 2172 2921 3409 4185 4639 6098 6744 9192 
Sample Output 0

-1
-1
1
1
0
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(const vector<int>& v, int x);
int main() {
  int N, x;
  cin >> N >> x;

  vector<int> v(N);

  for(int i = 0; i < N; i++) {
    cin >> v[i];
  }

  solve(v, x);
  return 0;
}

void solve(const vector<int>& v, int x) {
  auto it = lower_bound(v.begin(), v.end(), x);
  if(it == v.end() || *it != x) {
    cout << -1 << endl;
  }
  else {
    cout << it - v.begin() << endl;
  }

  auto it1 = upper_bound(v.begin(), v.end(), x);
  if(it == v.end() || *it != x) {
    cout << -1 << endl;
  }
  else {
    cout << it1 - v.begin() - 1 << endl;
  }

  if(it == v.end()) {
    cout << -1 << endl;
  }
  else {
    cout << it - v.begin() << endl;
  }

  if(it1 == v.end()) {
    cout << -1 << endl;
  }
  else {
    cout << it1 - v.begin() << endl;
  }

  if(it == v.end() || *it != x) {
    cout << 0 << endl;
  }
  else {
    cout << it1 - it << endl;
  }
}


