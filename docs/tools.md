## 整数かどうか判定する
`d1 == floor(d1)`のような形で判定できる。
これは、`std::floor`が`引数  x  以下で最大の整数値を得る`床関数であるためである。

Reference: https://cpprefjp.github.io/reference/cmath/floor.html

### 使用例
以下は0以外の整数かどうかを判定する関数である。
```c++
bool isNonZeroInteger(double n) {
  return (n != 0) && n == floor(n);
}
```
