/*
 Cho mảng A[] gồm N phần tử, mảng B gồm M phần tử. Nhiệm vụ của bạn là xác định xem B có phải là một mảng con (không cần liên tiếp nhưng cần giữ đúng thứ tự các phần tử) của mảng A hay không. Ví dụ mảng A[] = {1, 1, 2, 8, 9, 3, 4}, B[] = {1, 2, 9, 4} là một mảng con của mảng A

Input Format

Dòng đầu tiên gồm N và M; Dòng thứ 2 gồm N số A[i]; Dòng thứ 3 gồm M số B[i];

Constraints

1<=N,M<=10^6; 1<=A[i],B[i]<=10^6;

Output Format

In ra YES nếu B là mảng con của A, ngược lại in NO.

Sample Input 0

16 2
3 6 10 10 10 2 8 4 2 1 9 4 2 1 6 3 
2 3 
Sample Output 0

YES
 */
#include <iostream>
using namespace std;

bool Mangcon(int a[], int N, int b[], int M);
int main() {
  int N, M;
  cin >> N >> M;

  int a[N], b[M];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < M; i++) {
    cin >> b[i];
  }

  if(Mangcon(a, N, b, M)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}

bool Mangcon(int a[], int N, int b[], int M) {
  int i = 0, j = 0;
  while(i < N && j < M) {
    if(a[i] == b[j]) {
      j++;
    }
    i++;
  }

  if(j == M) {
    return true;
  }
  return false;
}

