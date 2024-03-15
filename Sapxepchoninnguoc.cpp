/*
 28tech không thích in theo thứ tự thuận, bạn hãy in ra các bước của thuật toán sắp xếp chọn theo thứ tự ngược.

Input Format

Dòng 1 là N : các phần tử trong mảng

Dòng 2 là N số trong mảng

Constraints

1<=N<=1000

0<=A[i]<=1000

Output Format

In ra các bước theo mẫu

Sample Input 0

6
66 38 53 34 29 69 
Sample Output 0

Step 5 : 29 34 38 53 66 69 
Step 4 : 29 34 38 53 66 69 
Step 3 : 29 34 38 53 66 69 
Step 2 : 29 34 53 38 66 69 
Step 1 : 29 38 53 34 66 69 
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
        int pos = i;
        for(int j = i + 1; j < N; j++) {
            if(a[j] < a[pos]) {
                pos = j;
            }
        }

        int temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;

        vector<int> currentStep(a, a + N);
        v.push_back(currentStep);
    }
}

