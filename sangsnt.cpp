#include <iostream>
#include <math.h>
using namespace std;

void sang();
int prime[1000001];
int main() {
  int N;
  cin >> N;

  sang();

  for(int i = 0; i < N; i++) {
    if(prime[i] == 1) {
      cout << i << " ";
    }
  }

  return 0;
}

// prime[50] = 0;
// prime[50] = 1;

// Buoc 1: coi tat ca cac so tu 0 toi N la snt
// sang, loai bo dan cac so khong phai la so nguyen to
void sang() {
  for(int i = 0; i < 1000000; i++) {
    prime[i] = 1;
  }

  prime[0] = 0;
  prime[1] = 0;

  for(int i = 2; i <= sqrt(1000000); i++) {
    if(prime[i] == 1) {
      for(int j = i * i; j < 1000000; j+= i) {
        prime[j] = 0;
      }
    }
  }
}



