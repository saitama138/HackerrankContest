/*
 Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10^9+7.image
max = Z n -1   Ai * i;
        i = 0
Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^5; 0 ≤ A[i] ≤ 10^7

Output Format

In ra kết quả của bài toán lấy dư với (10^9 + 7)

Sample Input 0

5
5 3 2 4 1
Sample Output 0

40
 */
#include <iostream>
#include <algorithm>
using namespace std;

long long tong(long long a[], int N);
int main() {
  int N;
  cin >> N;

  long long a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  sort(a, a + N);
  cout << tong(a, N);
  return 0;
}

long long tong(long long a[], int N) {
  long long sum = 0, tich = 1;
  for(int i = 0; i < N; i++) {
    sum = (sum % 1000000007 + (a[i] * i) % 1000000007) % 1000000007;
  }
  return sum % 1000000007;
}

