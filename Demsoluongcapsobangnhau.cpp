/*
 Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

Output Format

In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

Sample Input 0

6
2 2 1 3 2 3
Sample Output 0

4
Explanation 0

Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)


 */

#include <iostream>
#include <map>

using namespace std;

long long Demsocap(const map<int, int>& mp);
int main() {
  int N;
  cin >> N;

  int a[N];
  map<int, int> mp;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }

  cout << Demsocap(mp);
  return 0;
}

long long Demsocap(const map<int, int>& mp) {
  long long count = 0;
  for(auto it : mp) {
    count+= 1ll * (it.second) * (it.second - 1) / 2;
  }
  return count;
}

