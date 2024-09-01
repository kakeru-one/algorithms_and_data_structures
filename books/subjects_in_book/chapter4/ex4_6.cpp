#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a, vector<vector<int> > &memo) {
    // ベースケース
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    if (memo[i][w] != -1) return memo[i][w];

    // a[i - 1] を選ばない場合
    if (func(i - 1, w, a, memo)) {
      memo[i][w] = 1;
      return true;
    }

    // a[i - 1] をぶ場合
    if (func(i - 1, w - a[i - 1], a, memo)) {
      memo[i][w] = 1;
      return true;
    }

    memo[i][w] = 0;
    return false;
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    vector<vector<int> > memo(N + 1, vector<int>(W + 1, -1));
    for (int i = 0; i < N; ++i) cin >> a[i];

    // 再帰的に解く
    if (func(N, W, a, memo)) cout << "Yes" << endl;
    else cout << "No" << endl;
}