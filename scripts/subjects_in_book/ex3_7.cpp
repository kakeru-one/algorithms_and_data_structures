#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力受け取り
    string S;
    cin >> S;
    int N = S.size();

    long long tmp = 0;
    long long answer = 0;

    // +の配置を考えた時の場合の数は、2^(N-1)となる。(+の部分集合を考える)
    // 1 << N - 1の結果が、2^(N-1)となる。よって、bitは全ての+の配置のケースを表す。
    for (int bit = 0; bit < (1 << (N - 1)); ++bit)
    {
      // 文字列 S の各文字間の隙間に「+」を挿入するかどうかを決定する。
      for (int i = 0; i < N - 1; ++i) {
        // tmpに10倍かけることで、桁を一桁ずらす。
        // e.g) 12+5の時、1*10+2で12を表す。
        tmp *= 10;

        // 次の数を1桁目として加算する。
        tmp += S[i] - '0';

        // bitを2進数で考えた時に、各桁が1かどうかを「bit & (1 << i)」で確認する。
        if (bit & (1 << i)) { 
          answer += tmp;
          // 「+」が存在した時は、次の数は一桁から始めたいので、tmpを初期化する必要がある。
          tmp = 0;
        }
      }
      // N-1の時の場合を考慮して、ループ終わりに加算する
      tmp *= 10;
      tmp += S[N - 1] - '0';
      answer += tmp;
      tmp = 0;
    }
    
    cout << answer << endl;
}