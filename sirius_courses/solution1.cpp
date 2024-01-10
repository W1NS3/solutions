#include <iostream>

using namespace std;

int main() {
  int A, n0 = 0, n1 = 1, temp, i = 1;
  cin >> A;
  while (n1 < A) {
      temp = n0 + n1;
      n0 = n1;
      n1 = temp;
      i++;
  }
  if (n1 == A) {
      cout << i;
  }
  else {
      cout << -1;
  }



}
