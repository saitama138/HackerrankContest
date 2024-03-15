/*
 Cho mảng A[] gồm n số nguyên dương. Gọi L, R là min và max các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

Input Format

Dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.

Constraints

1=n<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng số còn thiếu

Sample Input 0

5
4 5 3 8 6
Sample Output 0

1
 */

#include <iostream>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int Diensoconthieu(set<int>& se, int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];
  set<int> se;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    se.insert(a[i]);
  }

  cout << Diensoconthieu(se, a, N);
  return 0;
}

int Diensoconthieu(set<int>& se, int a[], int N) {
  int l = INT_MAX;
  for(int i = 0; i < N; i++) {
    if(a[i] <= l) {
      l = a[i];
    }
  }

  int r = INT_MIN;
  for(int i = 0; i < N; i++) {
    if(a[i] >= r) {
      r = a[i];
    }
  }
  
  int count = 0;
  for(int i = l; i < r; i++) {
    if(se.find(i) == se.end()) {
      count++;
    }
  }
  return count;
}

