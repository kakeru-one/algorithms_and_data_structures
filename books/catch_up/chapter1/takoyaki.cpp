#include <bits/stdc++.h>
using namespace std;

// たこ焼きセット
// Ref: https://atcoder.jp/contests/apg4b/tasks/APG4b_co
int main() {
  int p, price, N;
  string text;
  cin >> p;

  if (p == 1) {
    cin >> price >> N;
    cout << price * N << endl;
  } else if (p == 2) {
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}
