/*
 28tech không thích in theo thứ tự thuận, bạn hãy in ra các bước của thuật toán sắp xếp chèn theo thứ tự ngược.

Input Format

Dòng 1 là N : các phần tử trong mảng

Dòng 2 là N số trong mảng

Constraints

1<=N<=1000

0<=A[i]<=1000

Output Format

In ra các bước theo mẫu

Sample Input 0

8
89 23 90 21 8 69 6 38 
Sample Output 0

Step 7 : 6 8 21 23 38 69 89 90 
Step 6 : 6 8 21 23 69 89 90 38 
Step 5 : 8 21 23 69 89 90 6 38 
Step 4 : 8 21 23 89 90 69 6 38 
Step 3 : 21 23 89 90 8 69 6 38 
Step 2 : 23 89 90 21 8 69 6 38 
Step 1 : 23 89 90 21 8 69 6 38 
 */

#include <iostream>
#include <vector>
using namespace std;

void InsertionSortReverse(int a[], int N, vector<vector<int>>& v);

int main() {
    int N;
    cin >> N;

    int a[N];

    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<vector<int>> v; 
    InsertionSortReverse(a, N, v);

    for(int i = v.size() - 1; i >= 0; i--) {
        cout << "Step " << i + 1 << " : "; 
    for(int j = 0; j < v[i].size(); j++) {
        cout << v[i][j] << " ";
    }
    cout << endl;
}


    return 0;
}

void InsertionSortReverse(int a[], int N, vector<vector<int>>& v) {
    for(int i = 1; i < N; i++) {
      int pos = i - 1, value = a[i];

      while(pos >= 0 && value < a[pos]) {
        a[pos + 1] = a[pos];
        pos--;
      }
      a[pos + 1] = value;
      vector<int> Current(a, a + N);
      v.push_back(Current);
    }
}


