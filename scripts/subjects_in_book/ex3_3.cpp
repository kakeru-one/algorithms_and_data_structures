#include <bits/stdc++.h>
using namespace std;
const int INF = 20000000;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];
  
  int min_value = INF;
  int second_min_value = min_value;

  for (int i = 0; i < N; ++i) {
    if (a[i] < min_value) {
      second_min_value = min_value;
      min_value = a[i];
    } else if (a[i] < second_min_value) {
      second_min_value = a[i];
    }
  }
  
  cout << second_min_value << endl;
}