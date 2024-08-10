#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;  // まず N を読み込む
  vector<string> S(N);  // その後に S のサイズを設定

  int max_length = 0;
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
    max_length = max(max_length, (int)S.at(i).size());  // S.at(i).size() に修正
  }

  // for (int j = 0; j < max_length; j++) {
  //   // 各配列の文字列のj番目からとってくる。存在しなければ*を入れる。また、各配列は末尾から展開していく。
  //   for (int i = 0; i < N; i++) {
  //     cout << S.at(i).at(j);
  //   }
  //   cout << endl;
  // }
  vector<string> T(max_length, string(N, '*'));  // Tを初期化

  for (int i = 0; i < N; i++) {
    int len = S[i].size();
    for (int j = 0; j < len; j++) {
      T[j][N - i - 1] = S[i][j];  // 逆順に展開してTに格納
    }
  }

  for (int j = 0; j < max_length; j++) {
    cout << T[j] << endl;  // 各T[j]を出力
  }

  return 0;
}
