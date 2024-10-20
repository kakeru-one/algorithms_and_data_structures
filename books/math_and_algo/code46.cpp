#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int dist[100009];

int main() {
  int rows, cols;
  cin >> rows >> cols;

  // 2つの座標を読み取り
  int startX, startY;
  cin >> startX >> startY;

  int goalX, goalY;
  cin >> goalX >> goalY;

  // 二次元配列を格納するためのvector
  vector<vector<char> > grid(rows, vector<char>(cols));
  vector<vector<int> > dist(rows, vector<int>(cols, -1));

  // 標準入力からグリッドの文字列を受け取る
  for (int i = 0; i < rows; ++i) {
    string line;
    cin >> line;
    for (int j = 0; j < cols; ++j) {
      grid[i][j] = line[j];  // 各文字を二次元配列に格納
    }
  }

  // BFSの準備
  queue<pair<int, int> > Q; // キューに(x, y)の座標を格納 => 普通のグラフとは異なり、(x, y)が存在するため
  Q.push(make_pair(startX - 1 , startY - 1));
  dist[startX - 1][startY - 1] = 0; // 始点の距離は0

  // 幅優先探索の実行
  while (!Q.empty()) {
    pair<int, int> pos = Q.front(); // Queueの先頭を調べる
    Q.pop(); //　Queueの先頭を取り出す
    int x = pos.first;
    int y = pos.second;

    // posの(x,y)座標からの4近傍を見る
    // 4方向の移動をそれぞれ確認
    if (x + 1 < rows && grid[x + 1][y] == '.' && dist[x + 1][y] == -1) { // 一つ右の座標
      dist[x + 1][y] = dist[x][y] + 1;
      Q.push(make_pair(x + 1, y));
    }
    if (x - 1 >= 0 && grid[x - 1][y] == '.' && dist[x - 1][y] == -1) { // 一つ左の座標
      dist[x - 1][y] = dist[x][y] + 1;
      Q.push(make_pair(x - 1, y));
    }
    if (y + 1 < cols && grid[x][y + 1] == '.' && dist[x][y + 1] == -1) { // 一つ上の座標
      dist[x][y + 1] = dist[x][y] + 1;
      Q.push(make_pair(x, y + 1));
    }
    if (y - 1 >= 0 && grid[x][y - 1] == '.' && dist[x][y - 1] == -1) { // 一つ下の座標
      dist[x][y - 1] = dist[x][y] + 1;
      Q.push(make_pair(x, y - 1));
    }
  }

  // ゴールへの最短距離を出力
  cout << dist[goalX - 1][goalY - 1] << endl;

  return 0;
}
