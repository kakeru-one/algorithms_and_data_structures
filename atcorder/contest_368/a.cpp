#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  for (int i = 0; i < K; i++) {
    int lastElement = A.back();
    A.pop_back();
    A.insert(A.begin(), lastElement);
  }
  for (int i = 0; i < N; ++i) {
    cout << A[i] << " ";
  }
}
