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

  if(i == j) {
    return true;
  }
  return false;
}
