#include <bits/stdc++.h>
using namespace std;

int fibo(int N, vector<long long> &memo) {
  // ベースケース
  if (N == 0) return 0;
  else if (N == 1) return 0;
  else if (N == 2) return 1;

  if (memo[N] != -1) return memo[N];

  // 再帰呼び出し
  return memo[N] = fibo(N - 1, memo) + fibo(N - 2, memo) + fibo(N - 3, memo);
}

int main() {
  int N;
  cin >> N;
  vector<long long> memo(N + 1, -1);
  cout << fibo(N, memo) << endl;
}