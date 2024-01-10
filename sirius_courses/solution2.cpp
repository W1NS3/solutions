#include <iostream>

using namespace std;

int main() {
  long long A, j = 2;
  cin >> A;
  while (j*j <= A) {
    if (A%j == 0) {
      cout << j;
      break;
    }
    j++;
  }
  if (j*j > A) {
    cout << A;
  }
  return 0;


}
