#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int result = 1;
  for (int index = 0; index < S.size(); index++) {
    if (S.at(index) == '1') {
      continue;
    } else if (S.at(index) == '+') {
      result++;
    } else if (S.at(index) == '-') {
      result--;
    }
  }
  cout << result << endl;
}
