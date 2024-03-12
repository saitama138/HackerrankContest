/*
 Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là không hạn chế. Một người cần đổi số tiền có giá trị bằng N. Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?

Input Format

Gồm 1 số nguyên N

Constraints

1 ≤ N ≤ 10^14

Output Format

Số lượng tờ tiền ít nhất có tổng bằng N.

Sample Input 0

121
Sample Output 0

3
 */
#include <iostream>

using namespace std;

long long Doitien(int a[], long long N);
int main() {
  long long N;
  cin >> N;
  int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
  cout << Doitien(a, N);
  return 0;
}

long long Doitien(int a[], long long N) {
  long long ans = 0;
  for(int i = 0; i < 10; i++) {
    ans+= N / a[i];
    N%= a[i];
  }
  return ans;
}

