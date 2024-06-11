#include <bits/stdc++.h>
using namespace std;
 
// is_not_5というマクロを定義
#define is_not_5(n) if (n != 5)
 
int main() {
  // 次の行は if (10 != 5) { に置き換わる
  is_not_5(10) {
    cout << "NOT 5" << endl;
  }
}
