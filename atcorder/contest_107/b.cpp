#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char> > A(H, vector<char>(W, '#'));
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      cin >> A.at(i).at(j);
    }
  }

  // 有効な行と列を保持するためのフラグ
  vector<bool> valid_row(H, false);
  vector<bool> valid_col(W, false);

  // 各行と各列に黒いマス(#)があるかを確認
  for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
          if (A[i][j] == '#') {
              valid_row[i] = true;
              valid_col[j] = true;
          }
      }
  }

  // 有効な行と列だけを出力
  // 配列の要素を敢えて消さない（消そうとすると複雑になるため）
  // 要素を消す場合の解法はこちらを参照すること。（https://blog.hamayanhamayan.com/entry/2018/08/26/001618）
  for (int i = 0; i < H; i++) {
      if (valid_row[i]) {
          for (int j = 0; j < W; j++) {
              if (valid_col[j]) {
                  cout << A[i][j];
              }
          }
          cout << endl;
      }
  }

  return 0;
}
