#include <iostream>
#include <math.h>
using namespace std;

bool checksnt(int N);
int Demchusnt(int N);
bool cmp(int a, int b);

int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  stable_sort(a, a + N, cmp);

  for(int i = 0; i < N; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

bool checksnt(int N) {
  if(N < 2) {
    return false;
  }

  for(int i = 2; i <= sqrt(N); i++) {
    if(N % i == 0) {
      return false;
    }
  }
  return true;
}

int Demchusnt(int N) {
  int dem = 0;

  while(N) {
    int temp = N % 10;

    if(checksnt(temp)) {
      dem++;
    }

    N/= 10;
  }
  return dem;
}

bool cmp(int a, int b) {
  return Demchusnt(a) > Demchusnt(b);
}
