/*
 Cho Q truy vấn, mỗi truy vấn yêu cầu bạn in ra số lượng số nguyên tố từ L tới R. (Đừng duyệt từ L tới R rồi đếm nhé)

Input Format

Dòng đầu tiên là Q; Q dòng tiếp theo mỗi dòng là 2 số L, R

Constraints

1<=Q<=10^4; 1<=L,R<=10^6;

Output Format

Với mỗi truy vấn in ra số lượng số nguyên tố trong đoạn [L, R]

Sample Input 0

9
3 17
1 11
2 18
1 15
4 15
4 18
4 17
2 12
4 20
Sample Output 0

6
5
7
6
4
5
5
5
6
 */

#include <iostream>
#include <math.h>

using namespace std;
bool prime[1000001];
void sang();
int primeCount[1000001];
int main() {
  sang();

  int q;
  cin >> q;
  int l, r;
  while(q--) {
    cin >> l >> r;

    cout << primeCount[r] - primeCount[l - 1];
    cout << endl;
  }
  return 0;
}

void sang() {
  for(int i = 0; i < 1000001; i++) {
    prime[i] = true;
  }

  prime[0] = prime[1] = false;

  for(int i = 2; i <= sqrt(1000001); i++) {
    if(prime[i]) {
      for(int j = i * i; j < 1000001; j+= i) {
        prime[j] = false;
      }
    }
  }
  primeCount[0] = 0;
  for(int i = 1; i < 1000001; i++) {
    primeCount[i] = primeCount[i - 1] + prime[i];
  }
}

