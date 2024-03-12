/*
 Cho mảng A[] gồm N phần tử, hãy tìm 2 chỉ số i, j khác nhau sao cho 0 <= i < j < N và trị tuyệt đối tổng của 2 phần tử A[i] và A[j] đạt giá trị lớn nhất.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

2<=N<=10^6;
-10^9<=A[i]<=10^9

Output Format

In ra đáp án của bài toán

Sample Input 0

5
-1 -2 -3 9 -5
Sample Output 0

8
 */
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int MaxiumPair(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N);

  cout << MaxiumPair(a, N);
  return 0;
}

int MaxiumPair(int a[], int N) {
  return max(abs(a[0] + a[1]), abs(a[N - 2] + a[N - 1]));
}

