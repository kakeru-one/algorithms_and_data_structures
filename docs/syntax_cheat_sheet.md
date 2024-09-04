# 競プロでよく使うC++の文法で忘れやすいものを書いたチートシート
## 二次元配列の定義
char型の二次元配列を`#`で初期化する例
```c++
vector<vector<char>> A(H, vector<char>(W, '#'));
```

以下を参考文献とする。
- https://atcoder.jp/contests/APG4b/tasks/APG4b_t
