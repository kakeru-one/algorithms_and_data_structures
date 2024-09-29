#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<int> A(T);
    for (int i = 0; i < T; ++i) {
        cin >> A[i];
    }

    // 各行、列、対角線のカウント
    vector<int> row_count(N, 0);
    vector<int> col_count(N, 0);
    int diag1_count = 0;
    int diag2_count = 0;

    // マスの位置を管理するマップ
    vector<vector<int> > grid(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            grid[i][j] = N * i + j + 1;
        }
    }

    // ビンゴを達成するターンを探索
    for (int turn = 0; turn < T; ++turn) {
        int num = A[turn];
        // 行番号を求める
        int row_num = (num - 1) / N;
        // 列番号を求める
        int col_num = (num - 1) % N;

        row_count[row_num]++;
        col_count[col_num]++;

        if (row_num == col_num) {
            diag1_count++;
        }
        if (row_num + col_num == N - 1) {
            diag2_count++;
        }

        // ビンゴの判定をする
        if (row_count[row_num] == N || col_count[col_num] == N || diag1_count == N || diag2_count == N) {
            cout << turn + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
