#include <bits/stdc++.h>
using namespace std;
const int INF = 20000000;

// 最大値と最小値を求めて、その差を求めれば良い。
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];
  
  int min_value = INF;
  int max_value = -20000000;

  for (int i = 0; i < N; ++i) {
    if (a[i] < min_value) {
      min_value = a[i];
    }
    if (a[i] > max_value) {
      max_value = a[i];
    }
  }
  
  cout << max_value - min_value << endl;
}