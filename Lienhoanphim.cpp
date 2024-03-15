/*
 Trong một liên hoan phim, n bộ phim sẽ được chiếu. Bạn biết thời gian bắt đầu và kết thúc của mỗi bộ phim. Số lượng phim tối đa bạn có thể xem toàn bộ là bao nhiêu? Biết rằng nếu thời gian kết thúc của bộ phim trước bằng hoặc nhỏ hơn thời gian bắt đầu của bộ phim sau thì bạn có thể xem cả 2 phim này.

Input Format

Dòng nhập đầu tiên có số nguyên n: số lượng phim. Sau đó, có n dòng mô tả các bộ phim. Mỗi dòng có hai số nguyên a và b: thời gian bắt đầu và kết thúc của một bộ phim.

Constraints

1≤ n, m ≤2.10^5; 1≤ a, b ≤10^9

Output Format

In một số nguyên: số lượng phim tối đa.

Sample Input 0

3
3 5
4 9
5 8
Sample Output 0

2
Explanation 0

Giải thích test : Bạn có thể xem 2 bộ phim (3,5) và (5,8)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int, int>& a, pair<int, int>& b);

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> movies(N);

    for(int i = 0; i < N; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

    sort(movies.begin(), movies.end(), cmp);

    int count = 0;
    int currentTime = 0; 

    for(auto& movie : movies) {
        if(movie.first >= currentTime) { 
            count++; 
            currentTime = movie.second; 
        }
    }
    cout << count << endl; 
    return 0;
}

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}
