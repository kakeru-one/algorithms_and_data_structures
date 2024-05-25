#include <bits/stdc++.h>
using namespace std;

int fibo(int N) {
  // ベースケース
  if (N == 0) return 0;
  else if (N == 1) return 0;
  else if (N == 2) return 1;

  // 再帰呼び出し
  return fibo(N - 1) + fibo(N - 2) + fibo(N - 3);
}

int main() {
  int N;
  cin >> N;
  cout << fibo(N) << endl;
}