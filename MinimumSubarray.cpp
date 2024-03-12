/*
 Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm mảng con liên tiếp ngắn nhất có tổng các phần tử bằng K. Ví dụ với mảng A[] = {1, 1, 3, 1, 2, 4, 1, 1, 2} và K = 6 thì mảng con ngắn nhất có tổng bằng 6 là 2.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -0<=A[i]<=10^6;

Output Format

In ra độ dài của mảng con ngắn nhất đó hoặc in ra -1 nếu không tồn tại mảng con có tổng bằng K

Sample Input 0

6 4
1 1 1 3 2 4
Sample Output 0

1
 */
/*
#include <iostream>
#include <climits>
using namespace std;

void MiniumSubarray(int a[], int N, int K);
int main() {
  int N, K;
  cin >> N >> K;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  MiniumSubarray(a, N, K);
  return 0;
}

void MiniumSubarray(int a[], int N, int K) {
  long long sum = 0;
  int min_length = INT_MAX, start = 0;
  for(int i = 0; i < N; i++) {
    sum+= a[i];
    while(sum >= K && start <= i) {
      if(sum == K) {
        min_length = min(min_length, i - start + 1);
      }
      sum-= a[start];
      start++;
    }
  }

  if(min_length == INT_MAX) {
    cout << -1;
  }
  else {
    cout << min_length << endl;
  }
}
*/

/*
 #include <iostream>
#include <climits>
using namespace std;

void MinimumSubarray(long long a[], int N, int K);

int main() {
    int N, K;
    cin >> N >> K;

    long long a[N];

    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }

    MinimumSubarray(a, N, K);
    return 0;
}

void MinimumSubarray(long long a[], int N, int K) {
    long long sum = 0;
    int dem = 0;
    int Min_val = INT_MAX;
    int left = 0;
    bool check = false;

    for(int i = 0; i < N; i++) {
        sum += a[i];
        dem++;

        while (sum >= K) {
            if (sum == K) {
                check = true;
                Min_val = min(Min_val, dem);
            }
            sum -= a[left];
            left++;
            dem--;
        }
    }

    if (check == false) {
        cout << -1;
    } else {
        cout << Min_val << endl;
    }
}

*/
