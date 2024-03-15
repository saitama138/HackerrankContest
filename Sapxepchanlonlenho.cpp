/*
 Cho mảng A[] gồm n số nguyên dương. Nhiệm vụ của bạn là hãy sắp xếp lại các phần tử của mảng sao cho A[i] ≥A[i-1] nếu i chẵn, A[i] ≤A[i-1] nếu i lẻ. Ví dụ với mảng A[] = {1, 2, 2, 1} ta được mảng được sắp A[] = { 1, 2, 1, 2}. Bài này các bạn có thể sub không AC nhưng vẫn đúng nhé.

Input Format

Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; Các số được viết cách nhau một vài khoảng trống.

Constraints

1≤ N ≤10^5; 1≤ A[i] ≤10^5.

Output Format

In ra kết quả trên một dòng

Sample Input 0

4
1 2 2 1
Sample Output 0

1 2 1 2
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sapXepDacBiet(int a[], int n) {
    sort(a, a + n);

    for (int i = 1; i < n - 1; i += 2) {
        swap(a[i], a[i + 1]);
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sapXepDacBiet(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

