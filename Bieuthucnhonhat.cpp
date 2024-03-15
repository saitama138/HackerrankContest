/*
 Một dãy gồm n số nguyên không âm a1, a2,..., an được viết thành một hàng ngang, giữa hai số liên tiếp có một khoảng trắng, như vậy có tất cả (n-1) khoảng trắng. Người ta muốn đặt k dấu cộng và (n-1-k) dấu trừ vào (n-1) khoảng trắng đó để nhận được một biểu thức có giá trị lớn nhất. Ví dụ, với dãy gồm 5 số nguyên 28, 9, 5, 1, 69 và k = 2 thì cách đặt 28+9-5-1+69 là biểu thức có giá trị lớn nhất. Yêu cầu: Cho dãy gồm n số nguyên không âm a1, a2,..., an và số nguyên dương k, hãy tìm cách đặt k dấu cộng và (n-1-k) dấu trừ vào (n-1) khoảng trắng để nhận được một biểu thức có giá trị lớn nhất.

Input Format

Dòng đầu chứa hai số nguyên dương n, k; Dòng thứ hai chứa n số nguyên không âm a1, a2,..., an;

Constraints

1<= k < n ≤ 10^5; 0 <= a[i] ≤ 10^6

Output Format

In ra giá trị lớn nhất của biểu thức

Sample Input 0

6 3
9560 5571 9008 3649 1473 3782 
Sample Output 0

22799
 */

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long Bieuthucnhonhat(int a[], int N, int K);
int main() {
  int N, K;
  cin >> N >> K;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a + 1, a + N, greater<int>());

  cout << Bieuthucnhonhat(a, N, K);
  return 0;
}

long long Bieuthucnhonhat(int a[], int N, int K) {
  long long ans = a[0];

  for(int i = 1; i < N; i++) {
    if(i <= K) {
      ans+= a[i];
    }
    else {
      ans-= a[i];
    }
  }
  return ans;
}

