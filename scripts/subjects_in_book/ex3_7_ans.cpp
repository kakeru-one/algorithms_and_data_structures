#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    // N-1 箇所の隙間に「+」を入れるかどうかをすべて試す
    long long res = 0;
    for (int bit = 0; bit < (1<<(N-1)); ++bit) {
        // tmp：「+」と「+」との間の値を表す変数
        long long tmp = 0;
        for (int i = 0; i < N-1; ++i) {
            tmp *= 10;
            tmp += S[i] - '0';

            // 「+」を挿入するとき、答えに tmp を加算して、tmp を 0 に初期化
            if (bit & (1<<i)) {
                res += tmp;
                tmp = 0;
            }
        }

        // 最後の「+」から残りの部分を答えに加算
        tmp *= 10;
        tmp += S.back() - '0';
        res += tmp;
    }
    cout << res << endl;
}