/*
 Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^3; 0<=A[i]<=10^9

Output Format

In ra các bước của thuật toán sắp xếp chọn

Sample Input 0

4
5 7 3 2
Sample Output 0

Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
 */

#include <iostream>
using namespace std;

void SeletionSort(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  SeletionSort(a, N);

  return 0;
}

void SeletionSort(int a[], int N) {
  for(int i = 0; i < N - 1; i++) {
    int Min_pos = i;
    for(int j = i + 1; j < N; j++) {
      if(a[j] < a[Min_pos]) {
        Min_pos = j;
      }
    }

    int temp = a[i];
    a[i] = a[Min_pos];
    a[Min_pos] = temp;
    cout << "Buoc " << i + 1 << ": ";
    for(int i = 0; i < N; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}

