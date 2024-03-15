/*
 Cho một mảng n số nguyên, nhiệm vụ của bạn là tính số mảng con liên tiếp có nhiều nhất k giá trị khác nhau.

Input Format

Dòng nhập đầu tiên có hai số nguyên n và k. Dòng tiếp theo có n số nguyên x1, x2,…, xn: nội dung của mảng.

Constraints

1≤k≤n≤2⋅10^5;
1≤xi≤10^9

Output Format

In một số nguyên: số mảng con.

Sample Input 0

100 3
3 2 3 4 3 3 4 2 3 1 4 4 1 3 4 4 3 1 3 1 4 2 2 3 4 3 2 1 1 1 4 1 1 2 2 1 3 2 4 3 1 3 4 2 1 3 2 2 2 1 4 4 1 4 3 3 3 1 2 1 2 3 1 2 4 3 1 2 4 3 1 4 3 2 1 4 3 4 1 2 3 3 2 2 2 4 4 4 3 2 2 3 4 2 4 2 4 3 1 1
Sample Output 0

641
Sample Input 1

5 2
1 2 3 1 1
Sample Output 1

10
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (long long& val : a) {
        cin >> val;
    }

    unordered_map<long, int> freq; 
    long long count = 0; 
    int left = 0;
    long long res = 0;
    for (int right = 0; right < n; ++right) {
        freq[a[right]]++; 
        if(freq[a[right]] == 1) count++;
        
        while (count > k) {
            freq[a[left]]--; 
            if (freq[a[left]] == 0) { 
                count--;
            }
            left++; 
        }

        res += (right - left + 1);
    }

    cout << res << endl;
    return 0;
}

