#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> A(N);
  vector<int> B(W);

  // 配列Aと配列Bを挿入する
  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < W; ++i) cin >> B[i];

  // 結合結果を格納する配列C
  vector<int> C;

  // 配列Aの要素をCにコピー
  C.insert(C.end(), A.begin(), A.end());

  // 配列Bの要素をCにコピー
  C.insert(C.end(), B.begin(), B.end());

  // 結果を出力
  std::cout << "結合した配列C: ";
  sort(C.begin(), C.end());
  for (int num : C) {
    cout << num << " ";
  }
  cout << endl;
  
  return 0;
}