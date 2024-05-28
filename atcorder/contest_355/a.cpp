#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  vector<int> suspects = {1, 2, 3};

  if (A != B) {
    // AとBをリストから除外する
    suspects.erase(remove(suspects.begin(), suspects.end(), A), suspects.end());
    suspects.erase(remove(suspects.begin(), suspects.end(), B), suspects.end());
    
    // 残った要素を出力する
    cout << suspects[0] << endl;
  } else {
    cout << -1 << endl;
  }
  
  return 0;
}