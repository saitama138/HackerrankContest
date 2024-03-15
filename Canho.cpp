/*
 Có n người nộp đơn và m căn hộ miễn phí. Nhiệm vụ của bạn là phân phối các căn hộ sao cho càng nhiều người đăng ký sẽ nhận được căn hộ càng tốt. Mỗi người nộp đơn có một kích thước căn hộ mong muốn, và họ sẽ chấp nhận bất kỳ căn hộ nào có diện tích đủ gần với kích thước mong muốn.

Input Format

Dòng nhập đầu tiên có ba số nguyên n, m và k: số người đăng ký, số căn hộ và chênh lệch tối đa cho phép. Dòng tiếp theo chứa n số nguyên a1, a2,…, an: diện tích căn hộ mong muốn của mỗi người đăng ký. Nếu kích thước mong muốn của người nộp đơn là x, người đó sẽ chấp nhận bất kỳ căn hộ nào có kích thước từ x-k đến x + k. Dòng cuối cùng ghi m số nguyên b1, b2,…, bm: diện tích từng căn hộ.

Constraints

1≤ n, m ≤10^5 0≤ k ≤10^9 1≤ai, bi ≤10^9

Output Format

In một số nguyên: số người nộp đơn sẽ nhận được một căn hộ.

Sample Input 0

4 3 5
60 45 80 60
30 60 75
Sample Output 0

2
 */

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int Canho(int a[], int N, int b[], int M, int K);
int main() {
  int N, M, K;
  cin >> N >> M >> K;

  int a[N], b[M];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < M; i++) {
    cin >> b[i];
  }

  sort(a, a + N);
  sort(b, b + M);

  cout << Canho(a, N, b, M, K);
  return 0;
}

int Canho(int a[], int N, int b[], int M, int K) {
  int i = 0, j = 0, cnt = 0;

  while(i < N && j < M) {
    if(abs(a[i] - b[j]) <= K) {
      i++;
      j++;
      cnt++;
    }
    else if(a[i] < b[j]) {
      i++;
    }
    else {
      j++;
    }
  }
  return cnt;
}

