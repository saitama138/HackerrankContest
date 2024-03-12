/*
 Cho 2 mảng đã được sắp xếp tăng dần, thực hiện trộn 2 dãy trên thành một dãy được sắp xếp.

Input Format

Dòng đầu tiên là số lượng phần tử của 2 dãy n và m Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

Constraints

1≤n,m≤10^7; 1≤ai≤10^9

Output Format

In ra mảng sau khi trộn
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Tron2day(const vector<int>& v1, const vector<int>& v2);
int main() {
  int N, M;
  cin >> N >> M;

  vector<int> v1(N), v2(M);

  for(int i = 0; i < N; i++) {
    cin >> v1[i];
  }

  for(int i = 0; i < M; i++) {
    cin >> v2[i];
  }


  Tron2day(v1, v2);
  return 0;
}

void Tron2day(const vector<int>& v1, const vector<int>& v2) {
  int i = 0, j = 0;
  while(i < v1.size() && j < v2.size()) {
    if(v1[i] < v2[j]) {
      cout << v1[i] << " ";
      i++;
    }
    else {
      cout << v2[j] << " ";
      j++;
    }
  }

  while(i < v1.size()) {
    cout << v1[i] << " ";
    i++;
  }

  while(j < v2.size()) {
    cout << v2[j] << " ";
    j++;
  }
}

