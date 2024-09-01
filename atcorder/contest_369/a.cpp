#include <bits/stdc++.h>
using namespace std;

bool isNonZeroInteger(int n) {
    return (n != 0) && n == floor(n);
}

int main() {
  int A, B;
  cin >> A >> B;

  int counter = 0;

  int pattern_1 = 2 * A - B;
  int pattern_2 = (A + B) / 2;
  int pattern_3 = 2 * B - A;

  if (isNonZeroInteger(pattern_1)) {
    counter++;
  }


  if (isNonZeroInteger(pattern_2)) {
    if (((A + B) % 2 == 0) && (pattern_1 != pattern_2)) {
      counter++;
    }
  }
  if (isNonZeroInteger(pattern_3)) {
    if ((pattern_3 != pattern_1) && (pattern_3 != pattern_2)) {
      counter++;
    }
  }

  cout << counter << endl;
}
