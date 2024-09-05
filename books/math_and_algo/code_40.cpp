#include <iostream>
#include <vector>

using namespace std;

int main() {
  // 入力を受け取る
  int N;
  cin >> N;
  vector<long long> A(N - 1);
  for (int i = 0; i < N - 1; i++) cin >> A[i];

  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++) cin >> B[i];

  // 駅A1から駅Aiまでの距離（累積和）を計算する
  vector<long long> S(N);
  S[0] = 0;
  for (int i = 1; i < N; i++) {
    S[i] = S[i - 1] + A[i - 1];
  }

  // 答えを求める
  long long Answer = 0;
  for (int i = 0; i < M - 1; i++) {
    if (B[i] < B[i + 1]) {
      Answer += (S[B[i + 1] - 1] - S[B[i] - 1]); // インデックス調整
    } else {
      Answer += (S[B[i] - 1] - S[B[i + 1] - 1]); // インデックス調整
    }
  }

  // 出力
  cout << Answer << endl;
  return 0;
}
