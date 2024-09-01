#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long A, long long B) {
	while (A >= 1 && B >= 1) {
		if (A < B) B = B % A; // A < B の場合、大きい方 B を書き換える
		else A = A % B; // A >= B の場合、大きい方 A を書き換える
	}
	if (A >= 1) return A;
	return B;
}

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  for (int i = 0; i < N; i++) cin >> A.at(i);

  long long divisor = 0;
  for (int i = 0; i < N - 1; i++)
  {
    if (i == 0) divisor = GCD(A.at(i), A.at(i + 1));
    divisor = GCD(divisor, A.at(i + 1));
  }
  cout << divisor << endl;
}
