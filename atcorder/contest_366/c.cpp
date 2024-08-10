#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> cnt(1000000); // cnt[i]=(現時点で (i + 1) が書かれたボールが袋の中に何個あるか//
    int ans = 0; // 現時点での袋の中のボールに書いてある数の種類数
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            x--;
            cnt[x]++;
            if (cnt[x] == 1) ans++; // このときx が書かれたボールが追加された1個のみである
        } else if (t == 2) {
            int x;
            cin >> x;
            x--;
            cnt[x]--;
            if (cnt[x] == 0) ans--; // このとき x が書かれたボールが袋の中にはもうない
        } else {
            cout << ans << "\n";
        }
    }
}
