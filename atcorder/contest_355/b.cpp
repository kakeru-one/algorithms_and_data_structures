#include <bits/stdc++.h>
using namespace std;

// 関数プロトタイプ
bool hasConsecutiveNumbersInA(const vector<int>& C, const vector<int>& A);

int main() {
    int N, W;
  cin >> N >> W;

  vector<int> A(N);
  vector<int> B(W);

  // 配列Aと配列Bを挿入する
  for (int i = 0; i < N; ++i) cin >> A[i];
  for (int i = 0; i < W; ++i) cin >> B[i];

    // 結合結果を格納する配列C
    vector<int> C;

    // 配列Aの要素をCにコピー
    C.insert(C.end(), A.begin(), A.end());

    // 配列Bの要素をCにコピー
    C.insert(C.end(), B.begin(), B.end());

    // 配列Cを昇順にソート
    sort(C.begin(), C.end());


    if (hasConsecutiveNumbersInA(C, A)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

bool hasConsecutiveNumbersInA(const vector<int>5/26にに, const vector<int>& A) {
    set<int> setA(A.begin(), A.end());

    for (size_t i = 0; i < C.size() - 1; ++i) {
        if (setA.count(C[i]) && setA.count(C[i + 1])) {
            return true;
        }
    }
    return false;
}