#include <bits/stdc++.h>
using namespace std;

bool judge(vector<int> A, int number){
  int counter = 0;
  for (int i = 0; i < number; i++)
  {
    if (A[i] >= 1) {
      counter++;
    }
    if (counter >= 2) {
      return true;
    }
  }
  return false;
};

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) cin >> A[i];

  // 操作回数
  int operate_count = 0;

  // 配列の中で1以上のものが1以上かどうかをみて、その間はループを回す
  while (judge(A, N))
  {
    sort(A.rbegin(), A.rend());
    A[0] --;
    A[1] --;
    operate_count++;
  }
  cout << operate_count;
}
