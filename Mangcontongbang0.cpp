/*
 Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là kiểm tra xem có tồn tại mảng con có tổng bằng 0 hay không, nếu tồn tại mảng con như vậy bạn in ra 1. Nếu không tồn tại dãy con có tổng bằng 0 thì in ra -1.

Input Format

Dòng thứ nhất gồm N; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán.

Sample Input 0

12
-2 0 3 -3 4 3 -2 1 1 0 3 4 
Sample Output 0

1
 */

#include <iostream>
#include <set>
using namespace std;

int Mangcon(int a[], int N, set<int>& se);
int main() {
  int N;
  cin >> N;

  int a[N];
  set<int> se;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  cout << Mangcon(a, N, se);
  return 0;
}

int Mangcon(int a[], int N, set<int>& se) {
  long long sum = 0;
  
  for(int i = 0; i < N; i++) {
    sum+= a[i];

    if(sum == 0 || se.find(sum) != se.end()) {
      return 1;
    }
    se.insert(sum);
  }
  return -1;
}

