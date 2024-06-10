#include <bits/stdc++.h>
using namespace std;

// 解けなかった
int main() {
  int N;
  cin >> N;
  int size = pow(3, N);
  vector<vector<char> > carpet_glids(size, vector<char>(size, '#'));

  for (int i = 0; i < size; i++) {
    // i番目の状態を読む
    for (int j = 0; j < size; j++) {
      cout << carpet_glids.at(i).at(j);
    }
    cout << endl;
  }
}
