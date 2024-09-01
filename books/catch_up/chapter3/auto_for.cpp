#include <bits/stdc++.h>
using namespace std;

string concat(string a, string b) {
  return a + b;
}

int main() {
  string a = "Hello,";
  string b = "World";
  auto ab = concat(a, b);  // string型
  cout << ab << endl;

  vector<int> c = {1, 2, 3};
  auto d = c;  // vector<int>型

  for (auto elem : d) {
    // elemはint型
    cout << elem << endl;
  }
}
