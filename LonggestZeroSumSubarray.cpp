/*
 Cho mảng A[] gồm N phần tử, bạn hãy tìm ra dãy con liên tiếp dài nhất có tổng bằng 0, nếu có nhiều dãy con thỏa mãn hãy in ra dãy con đầu tiên, nếu không tồn tại dãy con có tổng bằng 0 thì in ra NOT FOUND.

Input Format

Dòng 1 là N

Dòng 2 gồm N phần tử trong mảng A[]

Constraints

1<=N<=10^6

0<=abs(A[i])<=10^6

Output Format

In ra đáp án của bài toán

Sample Input 0

15
-4 1 2 -1 2 -3 -8 2 1 -2 -8 7 -5 2 8 
Sample Output 0

-4 1 2 -1 2 
Sample Input 1

18
-9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 7 6 
Sample Output 1

-9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 
 */

#include <iostream>
#include <map>
#include <climits>
using namespace std;

void LZSS(int a[], int N, map<int, int>& mp);
int main() {
  int N;
  cin >> N;

  int a[N];
  map<int, int> mp;
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  
  LZSS(a, N, mp);
  return 0;
}

void LZSS(int a[], int N, map<int, int>& mp) {
  long long sum = 0;
  mp[0] = -1;
  int length = INT_MIN, start = 0, end = -1;
  
  for(int i = 0; i < N; i++) {
    sum+= a[i];
    if(mp.find(sum) != mp.end()) {
      if(i - mp[sum] > length) {
        length = i - mp[sum];
        end = i;
        start = mp[sum] + 1;
      }
    }
    else {
      mp[sum] = i;
    }
  }

  if(end == -1) {
    cout << "NOT FOUND";
  }
  else {
    for(int i = start; i <= end; i++) {
      cout << a[i] << " ";
    }
  }
}

