/*
 Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau trong mảng.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng

Constraints

1≤n≤1000; 1≤ai≤10^9

Output Format

In ra số lượng cặp số nguyên tố cùng nhau trong mảng.

Sample Input 0

5
2 4 8 3 6 
Sample Output 0

3
Explanation 0

Các cặp số nguyên tố cùng nhau là : (2, 3), (3, 4), (3, 8)
 */

#include <iostream>
using namespace std;

int Dem(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  cout << Dem(a, N);
  return 0;
}

int gcd(int a, int b) {
  while(b) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int Dem(int a[], int N) {
  int dem = 0;
  for(int i = 0; i < N - 1; i++) {
    for(int j = i + 1; j < N; j++) {
      if(gcd(a[i], a[j]) == 1) {
        dem++;
      }
    }
  }
  return dem;
}

