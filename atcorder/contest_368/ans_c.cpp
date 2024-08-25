#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> H(N);
    for (int i = 0; i < N; ++i) cin >> H[i];
    long long T = 0;

    for (int i = 0; i < N; ++i) {
        // H[i]の体力を5で割り、セット数を計算
        long long sets = H[i] / 5;
        T += sets * 3; // セットに対して3回の操作が必要
        H[i] -= sets * 5; // 5 * sets を引いて残りの体力を計算

        // 残りの体力がある場合、それを処理する
        while (H[i] > 0) {
            T++;
            if (T % 3 == 0) {
                H[i] -= 3;
            } else {
                H[i] -= 1;
            }
        }
    }

    cout << T << endl;
}
