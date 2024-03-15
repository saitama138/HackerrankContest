/*
 Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format

In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.

Sample Input 0

5
1 2 2 1 3
Sample Output 0

1 2
 */
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void solve(map<int, int>& mp);
int main() {
  int N;
  cin >> N;

  int a[N];
  map<int, int> mp;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }

  sort(a, a + N);

  solve(mp);
  return 0;
}

void solve(map<int, int>& mp) {
  int max_val = -1;
  int value = 0;
  for(auto it : mp) {
    if(it.second > max_val) {
      max_val = it.second;
    }
  }

  for(auto it : mp) {
    if(it.second == max_val) {
      value = it.first;
      break;
    }
  }

  cout << value << " " << max_val;
}

