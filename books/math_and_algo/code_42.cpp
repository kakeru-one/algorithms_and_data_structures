#include <iostream>
#include <vector>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];

int main() {
	// 入力 → 配列の初期化
	cin >> N >> M;
  for (int i = 1; i <= M; i++)
  {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  int graph_count = 0;
  for (int i = 1; i <= N; i++)
  {
    // 自分自身より頂点番号が小さい隣接頂点の数
    int count = 0;
    for (size_t j = 0; j < G[i].size(); j++)
    {
      if (G[i][j] < i) count++;
    }
    if (count == 1) graph_count++;
  }

  cout << graph_count << endl;
}
