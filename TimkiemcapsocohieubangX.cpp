/*
 Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

Input Format

Dòng thứ nhất là cặp số N, X; Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

Constraints

1≤ N ≤10^5; 1≤ X, A[i] ≤10^5.

Output Format

In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.

Sample Input 0

5 3
1 1 2 3 5
Sample Output 0

1
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool Timkiemcapso(const vector<int>& v, int K);
int main() {
  int N, K;
  cin >> N >> K;

  vector<int> v(N);

  for(int i = 0; i < N; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  if(Timkiemcapso(v, K)) {
    cout << 1;
  }
  else {
    cout << -1;
  }
  return 0;
}

bool Timkiemcapso(const vector<int>& v, int K) {
  int N = v.size();
  for(int i = 0; i < N; i++) {
    auto it = lower_bound(v.begin() + i + 1, v.end(), v[i] + K);
    if(it != v.end() && *it - v[i] == K)
      return true;
  }
  return false;
}


