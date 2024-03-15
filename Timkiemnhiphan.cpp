/*
 Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?

Cách 1 : Sắp xếp mảng tăng dần rồi dùng binary_search để tìm kiếm nhanh

Cách 2 : Đưa các phần tử trong mảng vào set để tìm kiếm nhanh

Mỗi truy vấn chỉ mất O(logN)

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

Constraints

1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

Output Format

Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

Sample Input 0

5
5 4 3 2 1
2
2
8
Sample Output 0

YES
NO
 */

#include <iostream>
#include <set>

using namespace std;

bool Timkiemnhiphan(const set<int>& se, int X);
int main() {
  int N;
  cin >> N;

  int a[N];
  set<int> se;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    se.insert(a[i]);
  }

  int q;
  cin >> q;

  while(q--) {
    int X;
    cin >> X;

    if(Timkiemnhiphan(se, X)) {
      cout << "YES";
    }
    else {
      cout << "NO";
    }
    cout << endl;
  }
  return 0;
}

bool Timkiemnhiphan(const set<int>& se, int X) {
  if(se.find(X) != se.end()) 
    return true;
  return false;
}

