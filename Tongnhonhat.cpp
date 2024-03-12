/*
 Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số 0 đứng đầu thì bạn có thể loại bỏ các số 0 vô nghĩa đó.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤N≤30; 0≤A[i]≤9

Output Format

In ra kết quả của bài toán trên 1 dòng.

Sample Input 0

6
6 8 4 5 2 3
Sample Output 0

604
 */
#include <iostream>
#include <algorithm>
using namespace std;

void tongnhonhat(long long a[], int N);
int main() {
  int N;
  cin >> N;

  long long a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  sort(a, a + N);
  tongnhonhat(a, N);
  return 0;
}

void tongnhonhat(long long a[], int N) {
  int i = 0;
  long long numberOne = 0, numberTwo = 0;
  while(i < N) {
    if(i % 2 == 0) {
      numberOne = numberOne * 10 + a[i];
    }
    else {
      numberTwo = numberTwo * 10 + a[i];
    }
    i++;
  }
  cout << numberOne + numberTwo << endl;
}

