#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // A[i] - A[i -1]しかみないため
    // 差分配列を計算
    vector<long long> diff(N - 1);
    for (int i = 0; i < N - 1; i++) {
        diff[i] = A[i + 1] - A[i];
    }

    long long count = 0;
    int i = 0;

    while (i < N - 1) {
        int j = i;
        while (j < N - 2 && diff[j] == diff[j + 1]) {
            j++;
        }
        int len = j - i + 1;
        count += (long long)len * (len + 1) / 2;
        i = j + 1;
    }

    count += N;

    cout << count << endl;

    return 0;
}
