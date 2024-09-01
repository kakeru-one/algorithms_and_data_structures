#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> piano(N);
    vector<string> hands(N);

    for (int i = 0; i < N; i++)
    {
      cin >> piano[i] >> hands[i];
    }

    int point = 0;
    // 左手の現在位置
    int left_pointer = 0;
    // 右手の現在位置
    int right_pointer = 0;

    for (int i = 0; i < N; i++) {
      if(hands[i] == "L") {
        if (left_pointer != 0) {
          point += abs(left_pointer - piano[i]);
        }
        left_pointer = piano[i];
      } else if (hands[i] == "R") {
        if (right_pointer != 0) {
          point += abs(right_pointer - piano[i]);
        }
        right_pointer = piano[i];
      }
    }

    cout << point << endl;



    return 0;
}
