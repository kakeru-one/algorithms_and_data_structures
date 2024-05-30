// 解き直しが必要。
#include <iostream>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int res = 0;
  for (int a = 0; a <= A; ++a) {
    for (int b = 0; b <= B; ++b) {
      for (int c = 0; c <= C; ++c) {
        int total = 500*a + 100*b + 50*c; // 合計金額
        if (total == X) ++res; // 合計金額が X に一致したら答えをインクリメント
      }
    }
  }
  cout << res << endl;
}

