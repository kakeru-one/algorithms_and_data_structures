#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N, S;
  // 配列の初期化のやり方よくわかっていない。どうするのがベストプラクティス？
  // dp[N][S]
  bool dp[109][10009];

	// 入力
	cin >> N >> S;
  vector<int> A(N + 1);
	for (int i = 1; i <= N; i++) cin >> A[i];

	// 配列の初期化
	dp[0][0] = true;
	for (int i = 1; i <= S; i++) dp[0][i] = false;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= S; j++) {
      // ここが思いつかなかった
      // j < A[i] のとき、カード i は選べない
			if (j < A[i]) dp[i][j] = dp[i-1][j];
			// j >= A[i] のとき、選ぶ / 選ばない 両方の選択肢がある
			if (j >= A[i]) {
				if (dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
				else dp[i][j] = false;
			}
		}
	}

  // Anまでの数値の選択でSになるものがあるか？
  if (dp[N][S]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

	return 0;
}
