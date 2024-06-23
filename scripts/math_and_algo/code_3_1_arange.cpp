#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long N;
	cin >> N;
  vector<long long> more_than_half;
	for (long long i = 2; i * i <= N; i++) {
		if (N % i != 0) continue;
		cout << i << ' '; // i を約数に追加
		if (i != N / i) {
      more_than_half.insert(more_than_half.begin(), N / i); // i ≠ N/i のとき、N/i も約数に追加
		}
	}
  for (long long i = 0; i < more_than_half.size(); i++)
  {
    cout << more_than_half.at(i) << ' ';
  }
  
	return 0;
}
