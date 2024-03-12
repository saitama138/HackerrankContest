#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(const vector<int>& v1, const vector<int>& v2);
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> v1(N);
  vector<int> v2(M);

  for(int i = 0; i < N; i++) {
    cin >> v1[i];
  }

  for(int i = 0; i < v2.size(); i++) {
    cin >> v2[i];
  }
  sort(v2.begin(), v2.end());
  solve(v1, v2);
  return 0;
}

void solve(const vector<int>& v1, const vector<int>& v2) {
  for(int i = 0; i < v1.size(); i++) {
    auto it = upper_bound(v2.begin(), v2.end(), v1[i]);
    cout << it - v2.begin() << " ";
  }
}
