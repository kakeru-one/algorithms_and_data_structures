#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力を受け取る
  int N, v;
  cin >> N >> v;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) cin >> a[i];
  
  // 線形探索
  int find_count = 0; // 初期値は -1 などありえない値に
  for (int i = 0; i < N; ++i) {
    if (a[i] == v) {
        find_count++; // 見つかったらインクリメントする。
    }
  }
  
  cout << find_count << endl;
}