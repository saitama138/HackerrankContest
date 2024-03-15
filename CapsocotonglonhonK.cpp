/*
 Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

Gợi ý : Sử dụng binary_search, đối với mỗi phần tử a[i] đếm số lượng phần tử trong mảng (đã sắp xếp) > k - a[i] bằng cách tìm vị trí đầu tiên của phần tử > k - a[i], từ vị trí này tới cuối dãy sẽ đều là các phần tử > k - a[i]

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng lớn hơn k

Sample Input 0

4 5
2 3 4 5
Sample Output 0

5
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int FirstPositionGreater(const vector<int>& v, int l, int r, int x) {
    int res = r + 1; 
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (v[mid] > x) {
            res = mid; 
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return res;
}

long long Demcapso(const vector<int>& v, int K) {
    long long cnt = 0;
    int N = v.size();
    for (int i = 0; i < N; i++) {
        int firstGreater = FirstPositionGreater(v, i + 1, N - 1, K - v[i]);
        cnt += N - firstGreater; 
    }
    return cnt;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << Demcapso(v, K);
    return 0;
}

