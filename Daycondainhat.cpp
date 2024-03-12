/*
 Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn tìm ra độ dài của dãy con liên tiếp các phần tử sao cho các phần tử liền kề nhau trong dãy con đều khác nhau. Nếu có nhiều dãy con thỏa mãn, hay in ra dãy con có tổng lớn nhất.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

Output Format

In ra đáp án của bài toán trên 2 dòng. Dòng đầu tiên là độ dài của dãy con dài nhất. Dòng thứ 2 là các phần tử trong dãy con đó.

Sample Input 0

8
1 2 3 4 4 5 6 7
Sample Output 0

4
4 5 6 7
 */

/*
 #include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    set<int> currentSet;
    int start = 0, maxLength = 0, maxSum = 0, currentSum = 0, startIndex = 0;
    for (int end = 0; end < N; end++) {
        while (currentSet.find(A[end]) != currentSet.end()) {
            currentSet.erase(A[start]);
            currentSum -= A[start];
            start++;
        }
        currentSet.insert(A[end]);
        currentSum += A[end];

        if (end - start + 1 > maxLength || (end - start + 1 == maxLength && currentSum > maxSum)) {
            maxLength = end - start + 1;
            maxSum = currentSum;
            startIndex = start;
        }
    }

    cout << maxLength << endl;
    for (int i = startIndex; i < startIndex + maxLength; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

 */

/*
 #include <iostream>
#include <map>

using namespace std;

void Dayconlonnhat(int a[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  Dayconlonnhat(a, N);
}

void Dayconlonnhat(int a[], int N) {
  int dem = 1, ans = 1;
  long long tong = a[0], max_tong = a[0];
  int start = 0;

  for(int i = 1; i < N; i++) {
    if(a[i] != a[i - 1]) {
      dem++;
      tong+= a[i];
    }
    else {
      if(dem > ans) {
        ans = dem;
        max_tong = tong;
        start = i - dem;
      }
      else if(dem == ans) {
        if(tong > max_tong) {
          max_tong = tong;
          start = i - dem;
        }
      }
      dem = 1;
      tong = a[i];
    }
  }
  if(dem > ans) {
    ans = dem;
    max_tong = tong;
    start = N - dem;
  }
  else if(dem == ans) {
    if(tong > max_tong) {
      max_tong = tong;
      start = N - dem;
    }
  }
  
  cout << ans << endl;
  for(int i = 0; i < ans; i++) {
      cout << a[start + i] << " ";
  }
}


 */
