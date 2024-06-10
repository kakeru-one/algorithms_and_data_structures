#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> hands(N);
  for (int i = 0; i < N; ++i) cin >> hands[i];

  int counter = 0;
  for (int i = 0; i < N; ++i) {
    M -= hands[i];
    if (M < 0) {
      break;
    }
    counter++;
  }
  
  cout << counter << endl;
}