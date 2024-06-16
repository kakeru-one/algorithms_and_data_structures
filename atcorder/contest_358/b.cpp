#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一人当たり A 秒かかる
  // N人
  int N, A;
  cin >> N >> A;

  vector<int> T(N);
  for (int i = 0; i < N; ++i) cin >> T[i];

  int time_counter = 0;
  for (int i = 0; i < T.size(); ++i) {
    if (time_counter >= T.at(i)) {
      time_counter += A;
      cout << time_counter << endl;
    } else {
      time_counter = T.at(i) + A;
      cout << time_counter << endl;
    }
  }
}
