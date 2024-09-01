#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  // Aは試合に勝った人、Bは試合に負けた人
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> results(N, vector<char>(N, '-'));

  // resultsに試合結果を格納する
  for (int i = 0; i < M; i++) {
    // 添え字は0から始まるため、-1する。
    results.at(A.at(i) - 1).at(B.at(i) - 1) = 'o';
    results.at(B.at(i) - 1).at(A.at(i) - 1) = 'x';
  }

  // resultsに格納した試合結果の表を出力する。
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << results.at(i).at(j);

      // 列の番号が末尾の場合は改行し、それ以外の場合は改行せず空白を入れたいので、分岐させる。
      if (j == (N -1)) {
        cout << endl; // 末尾なら改行
      }
      else {
        cout << " ";  // それ以外なら空白
      }
    }
  }
}
