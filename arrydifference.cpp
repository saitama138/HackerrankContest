#include <iostream>
using namespace std;

int arrrayDifference(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  cout << arrrayDifference(a, N);
  return 0;
}

int arrrayDifference(int a[], int N) {
  int sum = 0;
  for(int i = 0; i < N; i++) {
    bool check = true;
    for(int j = 0; j < i; j++) {
      if(a[j] == a[i]) {
        check = false;
        break;
      }
    }
    if(check) {
      sum+= a[i];
    }
  }
  return sum;
}
