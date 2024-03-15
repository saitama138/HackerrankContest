/*
 Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6;

1<=k<=10^6;

0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng nhỏ hơn k

Sample Input 0

4 5
2 2 2 2
Sample Output 0

6
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Firstposition(const vector<int>& v, int l, int r, int x) {
    int res = r + 1; 

    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] >= x) { 
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

long long Dochenhlech(const vector<int>& v, int K, int N) {
    long long cnt = 0;

    for (int i = 0; i < N - 1; i++) {
        int first = Firstposition(v, i + 1, N - 1, K - v[i]);
        cnt += (first - (i + 1)); 
    }

    return cnt;
}

int main() {
    int N, k;
    cin >> N >> k;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << Dochenhlech(v, k, N);

    return 0;
}

