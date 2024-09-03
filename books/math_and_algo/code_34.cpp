#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  // x座標・y座標
  vector<int> x(N), y(N);
  for (int i = 0; i < N; i++)
  {
    cin >> x.at(i) >> y.at(i);
  }

  // とりあえず大きな値で初期化する
  double answer = 1000000000;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j) {
        continue;
      } else {
        int X = x[i] - x[j];
        int Y = y[i] - y[j];
        answer = min(answer, sqrt(pow(X, 2) + pow(Y, 2)));
      }
    }
  }

  printf("%.12lf\n", answer);
	return 0;
}
