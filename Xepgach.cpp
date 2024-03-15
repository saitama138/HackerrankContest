/*
 Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an. Một viên gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng nhiều hơn thì viên gạch đó bị vỡ. Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu?

Input Format

Dòng đầu tiên là số nguyên n - là số viên gạch.
Dòng tiếp theo gồm n số nguyên a1, a2,..., an mỗi số cách nhau một khoảng trắng.
Constraints

1<=n<=10^5; 0≤ai≤ 10^6

Output Format

Số nguyên xác định chiều cao cao nhất của chồng gạch mà Nam sắp được.

Sample Input 0

4
1 2 3 4
Sample Output 0

4
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& ai : a) cin >> ai;

    sort(a.begin(), a.end());

    int max_height = 0; 
    int current_stack = 0; 

    for (int i = 0; i < n; ++i) {
        if (a[i] >= current_stack) {
            current_stack++;  
            max_height = max(max_height, current_stack); 
        }
    }

    cout << max_height << endl; 

    return 0;
}
