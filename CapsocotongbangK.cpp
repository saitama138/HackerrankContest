/*
 Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

Gợi ý : Sắp xếp mảng tăng dần sau đó với mỗi phần tử a[i] trong mảng tìm xem trong đoạn [i + 1, n - 1] có bao nhiêu phần tử có giá trị là k - a[i], bằng cách tìm vị trí đầu tiên và vị trí cuối cùng của phần tử có giá trị là k - a[i] => Số lượng

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng bằng k

Sample Input 0

4 4
2 2 2 2
Sample Output 0

6
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long Capso(const vector<int>& v, int K);
int main() {
  int N, K;
  cin >> N >> K;
  vector<int> v(N);

  for(int i = 0; i < N; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  cout << Capso(v, K);
  return 0;
}

long long Capso(const vector<int>& v, int K) {
  long long cnt = 0;
  int N = v.size(); 
  for(int i = 0; i < N; i++) {
    auto first = lower_bound(v.begin() + i + 1, v.end(), K - v[i]);
    auto last = upper_bound(v.begin() + i + 1, v.end(), K - v[i]);
     cnt+= last - first;
  }
  return cnt;
}

