#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  int border = N / 2;

  if ((T > border) || (A > border)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
