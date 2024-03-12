/*
 Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n Dòng thứ 2 là các phần tử ai trong mảng

Constraints

1≤n≤10^6; 1≤ai≤10^9

Output Format

In ra dãy đã được sắp xếp

Sample Input 0

10
1 2 3 9 7 4 8 6 10 5
Sample Output 0

9 7 5 3 1 2 4 6 8 10

 */

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N, cmp);

  for(auto it : a) {
    cout << it << " ";
  }
  return 0;
}

bool cmp(int a, int b) {
  if(a % 2 == 1 && b % 2 == 1) {
    return a > b;
  }
  if(a % 2 == 0 && b % 2 == 0) {
    return a < b;
  }
  
  if(a % 2 == 1 && b % 2 == 0) {
    return true ;
  }
  else {
      return false;
  }
}

