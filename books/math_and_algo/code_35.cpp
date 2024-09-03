#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  // 平方根を求める（二点間の距離）
  double distance = \
    sqrt(pow((x1 - x2), 2) + pow((y1 -y2), 2));
  int r_sum = r1 + r2;
  int r_diff = abs(r1 - r2);

  if (distance < r_diff) {
    cout << 1 << endl;
  } else if (distance == r_diff) {
    cout << 2 << endl;
  } else if (r_diff < distance && distance < r_sum) {
    cout << 3 << endl;
  } else if (distance == r_sum) {
    cout << 4 << endl;
  } else if (distance > r_sum) {
    cout << 5 << endl;
  }

  return 0;
}
