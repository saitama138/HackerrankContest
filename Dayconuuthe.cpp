/*
 Cho dãy A[] chỉ bao gồm các số nguyên dương nhưng không biết trước số phần tử của dãy. Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây: Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ. Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.

Input Format

1 dòng gồm số nguyên, các số cách nhau đúng một khoảng trắng, sau chữ số cuối cùng có thể có khoảng trắng.

Constraints

Số lượng phần tử trong dãy không quá 10^5 1 ≤ A[i] ≤ 10^9

Output Format

In ra YES nếu dãy là dãy ưu thế, ngược lại in NO.

Sample Input 0

2 2 3 5 8 10 20 88
Sample Output 0

YES
Explanation 0

Dãy số có 8 số, số lượng số chẵn trong dãy lớn hơn số lượng số lẻ trong dãy nên dãy là dãy ưu thế
 */

#include <iostream>
using namespace std;

bool Daysouuthe();
int main() {
  if(Daysouuthe()) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO";
  }
  return 0;
}

bool Daysouuthe() {
  int N = 0, x, l = 0, c = 0;

  while(cin >> x) {
    N++;
    if(x % 2 == 0) {
      c++;
    }
    else {
      l++;
    }
  }

  if(N % 2 == 0 && c > l || N % 2 == 1 && l > c) {
    return true;
  } 
  return false;
}

