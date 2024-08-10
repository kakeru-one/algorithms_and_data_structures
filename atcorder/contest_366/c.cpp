#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  cin.ignore(); // 最初の改行を無視するために一度だけ使用

  // クエリを格納する。
  // e.g [[1, 3], [1, 1]]
  vector<vector<int> > queries(Q);
  vector<int> ball_boxes;

  for (int i = 0; i < Q; i++) {
    string line;
    getline(cin, line); // 一行を読み込む

    stringstream ss(line);
    int num;
    while (ss >> num) {
      queries[i].push_back(num); // 空白区切りで数字を格納
    }
    if (queries[i][0] == 1) {
      // queries[i][1]をball_boxesの末尾に入れる
      ball_boxes.push_back(queries[i][1]);
    } else if (queries[i][0] == 2) {
      // queries[i][1]を一つball_boxesから削除する
      auto it = find(ball_boxes.begin(), ball_boxes.end(), queries[i][1]);
      if (it != ball_boxes.end()) {
          ball_boxes.erase(it);
      }
    } else if (queries[i][0] == 3) {
      // ball_boxesの要素の種類の数を全て標準出力する
      set<int> unique_balls(ball_boxes.begin(), ball_boxes.end());
      cout << unique_balls.size() << endl;
    }
  }

  return 0;
}
