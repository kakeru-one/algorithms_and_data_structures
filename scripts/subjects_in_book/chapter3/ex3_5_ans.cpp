#include <iostream>
#include <vector>
using namespace std;

// N が 2 で何回割れるか
int how_many_times(int N) {
    int exp = 0;
    while (N % 2 == 0) N /= 2, ++exp;
    return exp;
}

// 無限大を表す値
const int INF = 1234567890;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    // 2 で何回割れるかの最小値を求める
    int result = INF;
    for (auto a : A) {
        result = min(result, how_many_times(a));
    }
    cout << result << endl;
}