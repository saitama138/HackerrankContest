/*
 Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm khoảng cách lớn nhất giữa 2 chỉ số i, j sao cho trị tuyệt đối của hiệu A[i] - A[j] bằng K.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra khoảng cách lớn nhất giữa i và j hoặc in ra -1 nếu không tồn tại cặp số như vậy.

Sample Input 0

14 2
0 1 3 0 4 0 0 3 3 -4 1 0 -4 3 
Sample Output 0

12
Sample Input 1

14 10
-2 3 1 -4 0 0 0 1 0 -4 3 3 -1 3 
Sample Output 1

-1
 */

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void MaxiumDistance(map<int, int>& mp, int a[], int N, int K);
int main() {
  int N, K;
  cin >> N >> K;

  int a[N];
  map<int, int> mp;

  for(int i = 0; i < N; i++) {
    cin >> a[i];
    mp[a[i]] = i;
  }
  
  MaxiumDistance(mp, a, N, K);
  return 0;
}

void MaxiumDistance(map<int, int>& mp, int a[], int N, int K) {
  int max_val = -1;
  for(int i = 0; i < N; i++) {
    if(mp.find(a[i] + K) != mp.end()) {
      max_val = max(max_val, abs(i - mp[a[i] + K]));
    } 

    if(mp.find(a[i] - K) != mp.end()) {
      max_val = max(max_val, abs(i - mp[a[i] - K]));
    }
  }

  if(max_val == -1) {
    cout << -1;
  }
  else {
    cout << max_val;
  }
}   

