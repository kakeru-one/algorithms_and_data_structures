#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];

  int division_count = 0;
  int division_flag = true;
  while (division_flag) {
    for (int i = 0; i < N; ++i) {
      if (a[i] % 2 == 0) {
        a[i] /= 2;
      } else {
        division_flag = false;
        break;
      }
    }
    if (!division_flag) {
      break;
    }
    division_count++;
  }
  
  cout << division_count << endl;
}