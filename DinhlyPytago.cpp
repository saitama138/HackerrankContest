/*
 Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

Input Format

Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9

Output Format

In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

Sample Input 0

3
3 4 5
Sample Output 0

YES
 */
#include <iostream>
#include <algorithm>

using namespace std;

bool Pytago(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N, greater<int>());
  if(Pytago(a, N)) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO";
  }
  return 0;
}

bool Pytago(int a[], int N) {
  for(int i = 0; i < N - 2; i++) {
    long long target = 1ll * a[i] * a[i];
    int l = i + 1, r = N - 1;
    while(l < r) {
      long long currentSum = 1ll * a[l] * a[l] + 1ll * a[r] * a[r];
      if(currentSum == target) {
        return true;
      }
      else if(currentSum < target) {
        l++;
      }
      else {
        r--;
      }
    }
  }
  return false;
}

