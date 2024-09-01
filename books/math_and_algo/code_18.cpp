#include <iostream>
#include <vector>
using namespace std;

// 500円になる組み合わせは、(100, 400) (200, 300)のみ
int main() {
  long long N;
  cin >> N;
  vector<int> A(N);
  long long count_100 = 0, count_200 = 0, count_300 = 0, count_400 = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    if (A.at(i) == 100) {
      count_100++;
    } else if (A.at(i) == 200) {
      count_200++;
    } else if (A.at(i) == 300) {
      count_300++;
    } else if (A.at(i) == 400) {
      count_400++;
    }
  }
  cout << (count_100 * count_400 + count_200 * count_300) << endl;
}
