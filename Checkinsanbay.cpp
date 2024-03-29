/*
 Tại sân bay, mọi người đang làm thủ tục để check in. Có tất cả N vị khách. Vị khách thứ i tới làm thủ tục tại thời điểm T[i] và cần D[i] thời gian để check in xong. Các bạn hãy xác định xem thời điểm nào tất cả các vị khách làm xong thủ tục để lên máy bay?

Input Format

Dòng đầu tiên là số nguyên dương N; N dòng tiếp theo, mỗi dòng gồm 2 số nguyên cho biết thời điểm đến của vị khách thứ i và thời gian vị khách này làm xong thủ tục check in. Các giá trị này không vượt quá 10^6.

Constraints

1<=N<=10^5; 1<=T[i], D[i]<=10^6

Output Format

In ra đáp án tìm được.

Sample Input 0

3
2 1
8 3
5 7
Sample Output 0

15
Explanation 0

Người thứ 1 đến lúc 2h và làm thủ tục hết 1h => 3h xong Người thứ 2 đến lúc 5h và làm thủ tục hết 7h => 12h xong Người thứ 3 đến lúc 8h nhưng người thứ 2 12h mới làm xong nên bắt đầu làm từ 12h => 15h xong
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long Checkin(vector<pair<int, int>>& v);
int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> v(N);
  for(int i = 0; i < N; i++) {
    cin >> v[i].first >> v[i].second;
  }

  sort(v.begin(), v.end());

  cout << Checkin(v);
  return 0;
}

long long Checkin(vector<pair<int, int>>& v) {
  long long sum = v[0].first + v[0].second;
  for(auto it = v.begin() + 1; it != v.end(); it++) {
    if(sum <= it->first) {
      sum = it->first + it->second;
    }
    else {
      sum+= it->second;
    }
  }
  return sum;
}

