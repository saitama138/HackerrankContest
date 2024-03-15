/*
 Bạn hãy in ra các bước của thuật toán đổi trỗ trực tiếp theo thứ tự ngược.

Input Format

Dòng 1 là N : các phần tử trong mảng

Dòng 2 là N số trong mảng

Constraints

1<=N<=1000
Output Format

In ra các bước theo mẫu

Sample Input 0

5
1 24 80 30 41 
Sample Output 0

Step 4 : 1 24 30 41 80 
Step 3 : 1 24 30 80 41 
Step 2 : 1 24 80 30 41 
Step 1 : 1 24 80 30 41 
 */
#include <iostream>
#include <vector>
using namespace std;

void SelectionSortReverse(int a[], int N, vector<vector<int>>& v);

int main() {
    int N;
    cin >> N;

    int a[N];

    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<vector<int>> v; 
    SelectionSortReverse(a, N, v);

    for(int i = v.size() - 1; i >= 0; i--) {
        cout << "Step " << i + 1 << " : ";
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void SelectionSortReverse(int a[], int N, vector<vector<int>>& v) {
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(a[j] < a[i]) {
              int temp = a[i];
              a[i] = a[j];
              a[j] = temp;
            }
        }
        vector<int> currentStep(a, a + N);
        v.push_back(currentStep);
    }
}


