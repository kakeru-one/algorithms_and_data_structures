#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    vector<int> A(N + 1); // A[1]から使用するため、サイズをN+1に
    for (int i = 1; i <= N; i++) cin >> A[i];

    // dp配列を動的に確保
    vector<vector<bool>> dp(N + 1, vector<bool>(S + 1, false));

    dp[0][0] = true; // 0枚のカードで合計0を作る方法は1つ存在する

    // 動的計画法
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (dp[i-1][j]) {
                dp[i][j] = true; // カードiを使わない場合
                if (j + A[i] <= S) {
                    dp[i][j + A[i]] = true; // カードiを使う場合
                }
            }
        }
    }

    // 結果の出力
    if (dp[N][S]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
