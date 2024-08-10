#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);

  int max_length = 0;
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
    max_length = max(max_length, (int)S.at(i).size());
  }

  vector<string> T(max_length, string(N, '*'));  // Tを初期化

  for (int i = 0; i < N; i++) {
    int len = S[i].size();
    for (int j = 0; j < len; j++) {
      // N - i - 1だと末尾から遡れる
      T[j][N - i - 1] = S[i][len - j - 1];  // 文字を逆順に格納
    }
  }

  for (int i = 0; i < max_length; i++) {
    while (T[i].back() == '*') {
      T[i].pop_back();
    }
    cout << T[i] << endl;  // 各T[j]を出力
  }

  return 0;
}
