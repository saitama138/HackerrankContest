/*
 Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm số lượng phần tử lớn nhất trong mảng sao cho độ chênh lệch giữa 2 phần tử bất kì trong tập hợp bạn chọn ra không vượt quá K.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; 0<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán

Sample Input 0

5 3
1 2 3 3 2 
Sample Output 0

5
 */

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int CountmaximumSubset(int a[], int N, int K);
int main() {
  int N, K;
  cin >> N >> K;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N);

  cout << CountmaximumSubset(a, N, K);


  return 0;
}

int CountmaximumSubset(int a[], int N, int K) {
  int end = 0, start = 0, dem = 1;
  while(end < N) {
    if(a[end] - a[start] <= K) {
      dem = max(dem, end - start + 1);
      end++;
    }
    else {
      start++;
    }
  }
  return dem;
}

