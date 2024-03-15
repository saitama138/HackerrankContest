/*
 Bạn được cung cấp một danh sách gồm n số nguyên và nhiệm vụ của bạn là tính số giá trị khác biệt trong danh sách.

Input Format

Input Dòng nhập đầu tiên có số nguyên n: số giá trị. Dòng thứ hai có n số nguyên x1, x2,…, xn.

Constraints

1≤n≤2⋅10^5; 1≤xi≤10^9

Output Format

Output In một số nguyên: số lượng các giá trị riêng biệt.

Sample Input 0

5
1 2 3 3 2
Sample Output 0

3
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
  int N;
  cin >> N;

  int a[N];
  set<int> se;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    se.insert(a[i]);
  }
  cout << se.size();
  
  return 0;
}



