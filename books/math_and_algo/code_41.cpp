#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T, N;
	// 入力
	cin >> T >> N;
  vector<int> L(N);
  vector<int> R(N);

  // ある時刻時点での人数 => ０で初期化する
  vector<int> B(T + 1, 0);
  for (int i = 0; i < N; i++)
  {
    cin >> L.at(i) >> R.at(i);
  }

  for (int i = 0; i < N; i++)
  {
    // L[i]からR[i]の間に従業員が働くので、時刻(L[i])に1増加、時刻(R[i])に1減少させる
    // NOTE: 時刻 R[i]　時点では退勤しているものとしたいので、時刻(R[i])に1減少させる。
    B[L[i]]++;
		B[R[i]]--;
  }

  // 累積和をAとする
  vector<int> A(T + 1, 0);
  for (int i = 0; i < T; i++)
  {
    A[i] = A[i - 1] + B[i];
  }

	// 答えの出力
	for (int i = 0; i < T; i++) {
		cout << A[i] << endl;
	}
	return 0;
}
