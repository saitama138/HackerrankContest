/*
 Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

Input Format

Dòng đầu tiên là 2 số N và K. Dòng thứ 2 là N số trong mảng A

Constraints

1≤ K < N ≤ 10^5; 0 ≤ A[i] ≤ 10^7

Output Format

In ra hiệu lớn nhất có thể.

Sample Input 0

8 3
1 1 1 1 1 1 1 1
Sample Output 0

2
Sample Input 1

5 2
8 4 5 2 10
Sample Output 1

17
 */
#include <iostream>
#include <algorithm>

using namespace std;

void Chiamang(int a[], int N, int k);
int main() {
  int N, k;
  cin >> N >> k;
  int a[N];
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  sort(a, a + N);
  Chiamang(a, N, k);
  return 0;
}

void Chiamang(int a[], int N, int k) {
  k = min(k, N - k);
  long long sumOne = 0, sumTwo = 0;
  for(int i = 0; i < k; i++) {
    sumOne+= a[i];
  }

  for(int i = k ; i < N; i++) {
    sumTwo+= a[i];
  }
  cout << sumTwo - sumOne;
}

