#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long A, long long B) {
	while (A >= 1 && B >= 1) {
		if (A < B) B = B % A; // A < B の場合、大きい方 B を書き換える
		else A = A % B; // A >= B の場合、大きい方 A を書き換える
	}
	if (A >= 1) return A;
	return B;
}

long long LCM(long long A, long long B) {
  // A * Bにすると掛け算の結果がオーバーフローするので先に割る
  return (A / GCD(A, B)) * B; // 計算結果を返す
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  // 初期値となる最小公倍数を求める。
  long long common_multiple = LCM(A.at(0), A.at(1));
  for (int i = 2; i < N; i++)
  {
    common_multiple = LCM(common_multiple, A.at(i));
  }
  cout << common_multiple << endl;
  return 0;
}
