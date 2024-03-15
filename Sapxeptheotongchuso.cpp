/*
 Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số tăng dần, nếu 2 số có cùng tổng chữ số, thì số nào nhỏ hơn sẽ được in trước.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; 0<=A[i]<=10^9

Output Format

In ra các phần tử trong mảng sau khi sắp xếp

Sample Input 0

5
999976710 999982875 999974431 999984407 999972533 
Sample Output 0

999974431 999972533 999976710 999984407 999982875
 */
#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a, int b);
int tongchuso(int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N, cmp);
  for(auto x : a) {
    cout << x << " ";
  }
  return 0;
}

int tongchuso(int N) {
  int sum = 0, temp = 0;
  while(N) {
    temp = N % 10;
    sum+= temp;
    N/= 10;
  }
  return sum;
}
bool cmp(int a, int b) {
  if(tongchuso(a) != tongchuso(b)) {
    return tongchuso(a) < tongchuso(b);
  }
  else {
    return a < b;
  }
}



