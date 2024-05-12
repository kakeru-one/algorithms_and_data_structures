#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力を受け取る
  // 0 <= X, Y, Z <= K
  // X + Y + Z = Nとなるような(X, Y, Z)を求める。
  int K, N;
  cin >> K >> N;
  
  // 線形探索
  int case_count = 0;
  for (int i = 0; i <= K; ++i) {
    for (int j = 0; j <= K; ++j) {
      if (N - i - j >= 0 && N - i - j <= K) {
        case_count++;
      }
    }
  }
  
  cout << case_count << endl;
}