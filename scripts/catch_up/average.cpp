#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector <int> scores(N);

  for (int i = 0; i < N; i++) {
    cin >> scores.at(i);
  }

  int average_score = 0;
  for (int i = 0; i < N; i++) {
    average_score += scores.at(i);
  }

  average_score /= N;

  for (int i = 0; i < N; i++) {
    cout << abs(average_score - scores.at(i)) << endl;
  }
}
