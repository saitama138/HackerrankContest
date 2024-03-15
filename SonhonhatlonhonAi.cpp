/*
 Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất (phải thuộc mảng A[]) lớn hơn A[i] (i=0, 1, 2,.., n-1). Đưa ra ‘_’ nếu A[i] không có phần tử lớn hơn nó. Ví dụ với mảng A[] = {13, 6, 7, 12}, ta có kết quả là { _ , 7 . 12, 13}.

Input Format

Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.

Constraints

1≤ N ≤10^5; 1≤ A[i] ≤10^5.

Output Format

Đưa ra kết quả trên 1 dòng

Sample Input 0

9
6 3 9 8 10 2 1 15 7
Sample Output 0

7 6 10 9 15 3 2 _ 8
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Sonhonhatlonhonai(int a[], int N, const vector<int>& v);
int main() {
  int N;
  cin >> N;
  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  vector<int> v(a, a + N);
  sort(v.begin(), v.end());

  Sonhonhatlonhonai(a, N, v);
  return 0;
}

void Sonhonhatlonhonai(int a[], int N, const vector<int>& v) {
  for(int i = 0; i < N; i++) {
    auto it = upper_bound(v.begin(), v.end(), a[i]);
    if(it != v.end()) {
      cout << *it << " ";
    }
    else {
      cout << "_ ";
    }
  }
}

