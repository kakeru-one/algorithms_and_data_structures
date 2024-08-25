#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> H(N);
  for (int i = 0; i < N; ++i) cin >> H[i];
  long long T = 0;

  for (int i = 0; i < N; i++) {
    // H[i]が0以下になるまで繰り返す。
    while (H[i] >= 1)
    {
      T++;
      // Tが3の倍数なら H[i]-3, それ以外ならH[i]-1する
      if ((T % 3) == 0) {
        H[i] = H[i] - 3;
      } else {
        H[i] = H[i] - 1;
      }
    }
  }
  cout << T;
}
