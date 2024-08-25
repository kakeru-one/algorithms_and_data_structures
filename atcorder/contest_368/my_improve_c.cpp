#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> H(N);
  for (int i = 0; i < N; ++i) cin >> H[i];
  long long T = 0;

  for (int i = 0; i < N; i++) {
    long long T_mod = T % 3;
    // H[i]が5より小さい場合はして、早期リターンしたい。
    if (H[i] < 5) {
      while (H[i] > 0) {
        T++;
        if (T % 3 == 0) {
          H[i] -= 3;
        } else {
          H[i] -= 1;
        }
      }
      continue;
    }

    if (T_mod == 1) {
      T += 2;
      H[i] = H[i] - 4;
    } else if (T_mod == 2) {
      T += 1;
      H[i] = H[i] - 3;
    }

    if (H[i] % 5 == 0) {
      T += (H[i] / 5) * 3;
    } else if (H[i] % 5 == 1) {
      T += (H[i] / 5) * 3 + 1;
    } else if (H[i] % 5 == 2) {
      T += (H[i] / 5) * 3 + 2;
    } else {
      T += (H[i] / 5) * 3 + 3;
    }
  }

  cout << T << endl;
}
