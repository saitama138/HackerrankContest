/*
 Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

Input Format

Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A. Dòng tiếp theo ghi n số nguyên dương của dãy B.

Constraints

1≤n≤10^5; 1≤ai,bi≤10^9

Output Format

In ra kết quả theo yêu cầu của bài toán

Sample Input 0

4
4 2 7 1
5 6 2 8
Sample Output 0

1 8 2 6 4 5 7 2
 */

#include <iostream>
#include <algorithm>
using namespace std;

void Tron2day(int a[], int b[], int N);
int main() {
  int N;
  cin >> N;

  int a[N];
  int b[N];

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
  sort(a, a + N);
  for(int i = 0; i < N; i++) {
    cin >> b[i];
  }
  sort(b, b + N, greater<int>());
  Tron2day(a, b, N);
  return 0;
}

void Tron2day(int a[], int b[], int N) {
  for(int i = 0; i < N; i++) {
    cout << a[i] << " " << b[i] << " ";
  }
}

