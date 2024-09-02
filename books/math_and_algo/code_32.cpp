#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int N;
  // NOTE: Xは探索したい整数
  long long X;
  cin >> N >> X;

  vector <long long> A(N + 1);

  for (int i = 1; i <= N; i++) cin >> A[i];

  // NOTE: AはN+1個の要素を持ち、(1, N+1)までを小さい順にソートしたいため
  sort(A.begin() + 1, A.begin() + N + 1);

  // NOTE: 左端と右端の位置を扱うための変数を定義する
  int left_number = 1;
  int right_number = N;
  while (left_number <= right_number)
  {
    int middle_number = (left_number + right_number) / 2;
    if (A[middle_number] == X) { cout << "Yes" << endl; return 0; }
    // NOTE: A[middle_number]は　探索範囲から除外したいので、-1する
    if (A[middle_number] > X) right_number = middle_number - 1;
    // NOTE: A[middle_number]は　探索範囲から除外したいので、+1する
    if (A[middle_number] < X) left_number = middle_number + 1;
  }

  cout << "No" << endl;
  return 0;
}
