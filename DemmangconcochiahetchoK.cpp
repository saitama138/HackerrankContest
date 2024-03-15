/*
 Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là đếm số mảng con ( dãy con các phần tử liên tiếp) mà tổng các giá trị chia hết cho n.

Input Format

Dòng nhập đầu tiên có số nguyên n: kích thước của mảng. Dòng tiếp theo có n số nguyên a1, a2,…, an: nội dung của mảng.

Constraints

1≤n≤2⋅10^5; -10^9≤ai≤10^9

Output Format

In một số nguyên: số lượng mảng con thỏa mãn

Sample Input 0

100
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
Sample Output 0

1
Sample Input 1

100
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
Sample Output 1

5050
Sample Input 2

100
2 1 -3 2 -7 7 -2 6 9 -4 10 -6 3 9 -8 7 -2 -9 4 -3 -2 6 6 3 7 2 -1 10 6 -4 4 9 -1 -5 -6 -9 1 2 2 -10 -2 3 3 4 3 -6 -5 -1 9 6 -4 6 2 -1 6 1 6 1 3 7 -6 10 1 1 6 -9 0 5 -1 8 6 0 5 5 -3 1 1 -5 -9 -8 -9 -7 7 -6 10 7 8 1 -2 2 8 9 -1 5 -7 3 -3 -9 -3 4
Sample Output 2

47
 */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& ai : a) {
        cin >> ai;
    }

    unordered_map<long long, long long> freq; 
    long long sum = 0; 
    long long count = 0;

    freq[0] = 1; 

    for (int i = 0; i < n; ++i) {
        sum += a[i];

        long long mod = (sum % n + n) % n;
        
        if (freq.find(mod) != freq.end()) {
            count += freq[mod]; 
        }
        
        freq[mod]++;
    }

    cout << count << endl;
    return 0;
}

