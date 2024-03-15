/*
 Đại học Bang Berland đang tổ chức một buổi khiêu vũ trong lễ kỷ niệm 100500 năm thành lập! n các chàng trai và m cô gái đã bận rộn luyện tập các động tác nhảy múa. Chúng tôi biết rằng một số cặp nam và nữ sẽ được mời tham dự vũ hội. Tuy nhiên, kỹ năng khiêu vũ của các đối tác trong mỗi cặp khác nhau nhiều nhất là một đơn vị. Đối với mỗi cậu bé, chúng tôi biết kỹ năng nhảy của cậu ấy. Tương tự, đối với mỗi cô gái, chúng tôi biết kỹ năng khiêu vũ của cô ấy. Viết mã xác định số cặp lớn nhất có thể được hình thành từ n trai và m gái.

Input Format

Dòng đầu tiên chứa số nguyên n và m (1 ≤ n, m ≤ 10^5) - số bé trai và số bé gái. Dòng thứ hai chứa dãy Dòng thứ ba chứa dãy b1, b2, ..., bm (1 ≤ bj ≤ 10^5), trong đó bj là kỹ năng nhảy của cô gái thứ j.

Constraints

1 ≤ n, m ≤ 10^5; 0 ≤ ai ≤ 10^5; 0 ≤ bj ≤ 10^5

Output Format

In một số duy nhất - số cặp tối đa được yêu cầu.

Sample Input 0

4 5
1 4 6 2
5 1 5 7 9
Sample Output 0

3
 */

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int BerSuBall(int a[], int N, int b[], int M);
int main() {
  int N, M;
  cin >> N >> M;

  int a[N], b[M];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < M; i++) {
    cin >> b[i];
  }

  sort(a, a + N);
  sort(b, b + M);

  cout << BerSuBall(a, N, b, M);
  return 0;
}

int BerSuBall(int a[], int N, int b[], int M) {
  int i = 0, j = 0, cnt = 0;

  while(i < N && j < M) {
    if(abs(a[i] - b[j]) <= 1) {
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

