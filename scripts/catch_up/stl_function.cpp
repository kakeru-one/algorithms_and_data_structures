#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int min_integer;
  int max_integer;

  if (min(A, B) == A) {
    min_integer = A;
    max_integer = B;
  } else {
    min_integer = B;
    max_integer = A;
  }

  if (C > max_integer) {
    max_integer = C;
  }

  if (C < min_integer) {
    min_integer = C;
  }

  cout << max_integer - min_integer << endl;
}
