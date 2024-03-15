/*
 Vào một buổi sáng anh Bo sắp một đàn bò gồm n con bò để vắt sữa. Anh dự kiến là vào sáng hôm đó, con bò thứ i có khả năng sẽ vắt được ai lít sữa. Tuy nhiên đàn bò của anh có đặc tính là cứ mỗi lần vắt sữa một con, những con còn lại trông thấy sợ quá nên sẽ bị giảm sản lượng mỗi con 01 lít sữa. Nếu vắt sữa con bò thứ nhất, n-1 con còn lại bị giảm sản lượng. Sau đó vắt sữa con bò thứ hai thì n-2 con còn lại bị giảm sản lượng.... Bạn hãy giúp anh Bo tính xem thứ tự vắt sữa bò như thế nào để số lượng sữa vắt được là nhiều nhất nhé.

Input Format

Dòng thứ nhất là số nguyên là số lượng con bò.
Dòng thứ hai gồm n số nguyên a1, a2,..., an là sản lượng sữa của các con bò.
Constraints

1<=n<=10^5; 1<=a[i]<=10^6

Output Format

Số nguyên xác định số lít sữa nhiều nhất mà anh Bo có thể vắt được.

Sample Input 0

4
4 4 4 4
Sample Output 0

10
 */
#include <iostream>
#include <algorithm>

using namespace std;

long long VatsuabO(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
  cin >> a[i];
  }

  sort(a, a + N, greater<int>());
  cout << VatsuabO(a, N);
  return 0;
}

long long VatsuabO(int a[], int N) {
  long long sum = 0;
  for(int i = 0; i < N; i++) {
    int milk = a[i] - i;
    if(milk > 0) {
        sum+= milk;
    }
  }

  return sum;
}

