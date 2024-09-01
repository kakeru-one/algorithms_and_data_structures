#include <iostream>
using namespace std;

int main() {
	// 入力
	cin >> N;
  vector<long long> A(N);
	for (int i = 1; i <= N; i++) cin >> A[i];

  // NOTE: dp[i][j]
  // iは何日目時点までか？
  // jは何日目に最後に勉強したか？
  vector<vector<int>> dp(N, vector<int>(N));

  // N日目時点での実力の最大値
  // vector<long long> dp(N + 1);
  bool yesterday_study = false

	for (int i = 1; i <= N; i++) {
    // 勉強する or 勉強しない
    if (yesterday_study) {
      dp[i][i] = max(dp[i - 1], dp[i - 2] + A[i])
      yesterday_study = false;
    } else {
      dp[i][i] = dp[i - 1] + A[i];
      yesterday_study = true;
    }


    dp[N] =
  }
	return 0;
}
