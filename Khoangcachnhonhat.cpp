/*
 #include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int KhoangcachMin(int a[], int N);
int main() {
  int N;
  cin >> N;
  
  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a, a + N);
  cout << KhoangcachMin(a, N);
  return 0;
}

int KhoangcachMin(int a[], int N) {
  int min_distance = INT_MAX;
  for(int i = 1; i < N; i++) {
    min_distance = min(min_distance, a[i] - a[i - 1]);
  }
  return min_distance;
}

 */
