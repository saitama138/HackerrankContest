/*
 Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ là 0 1 hoặc 2. Hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^7; 0 ≤ A[i] ≤ 2

Output Format

In ra mảng được sắp xếp tăng dần.

Sample Input 0

5
1 1 0 2 1
Sample Output 0

0 1 1 1 2
 */

#include <iostream>
using namespace std;
void Sapxeptron(int cnt[]);
int main() {
  int N;
  cin >> N;
  int a[N];
  int cnt[3] = {0};
  for(int i = 0; i < N; i++) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  Sapxeptron(cnt);
  return 0;
}

void Sapxeptron(int cnt[]) {
  for(int i = 0; i < cnt[0]; i++) {
    cout << "0" << " ";
  }

  for(int i = 0; i < cnt[1]; i++) {
    cout << "1" << " ";
  }

  for(int i = 0; i < cnt[2]; i++) {
    cout << "2" << " ";
  }
}

