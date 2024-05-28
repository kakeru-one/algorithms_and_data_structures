#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int counter = 0;
  for(int i = 0; i < 3; i++) {
    if (s.at(i) == '1') {
      counter++;
    } 
  }

  cout << counter << endl;
}