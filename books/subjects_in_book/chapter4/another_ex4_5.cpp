#include <iostream>
using namespace std;

// N: 入力
// cur: 現在の値
// used7, used5, used3: 7, 5, 3 の使用状況
// counter: 答え
void func(long long N, long long cur, bool used7, bool used5, bool used3, long long &counter){
    if (cur > N) return; // ベースケース
    if (used7 && used5 && used3) ++counter; // 答えを増やす

    // 7 を付け加える
    func(N, cur * 10 + 7, true, used5, used3, counter);

    // 5 を付け加える
    func(N, cur * 10 + 5, used7, true, used3, counter);

    // 3 を付け加える
    func(N, cur * 10 + 3, used7, used5, true, counter);
}

int main() {
    long long N;
    cin >> N;
    long long counter = 0;
    func(N, 0, false, false, false, counter);
    cout << counter << endl;
}