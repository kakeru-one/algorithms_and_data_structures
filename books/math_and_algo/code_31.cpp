#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  // 要素数 500009 の長さを持つ配列を定義する
  vector<long long> A(N + 1);
  vector<long long> dp1(N + 1);
  vector<long long> dp2(N + 1);
	for (int i = 1; i <= N; i++) cin >> A[i];

  // 配列の初期化
  // NOTE:
  // dp1はi日目に勉強した時の最大値。
  // dp2はi日目に勉強しなかった時の最大値。
	dp1[0] = 0;
	dp2[0] = 0;

	for (int i = 1; i <= N; i++) {
    // [CASE]: i日目に勉強する or しない
    // 勉強する場合は、dp2[i-1]にA[i]を足す
    dp1[i] = dp2[i-1] + A[i];

    // 勉強しない場合は、dp1[i - 1]とdp2[i-1]の最大値
    dp2[i] = max(dp1[i - 1], dp2[i - 1]);
  }

  // dp1[N], dp2[N]の最大値が答え
  cout << max(dp1[N], dp2[N]) << endl;
	return 0;
}
