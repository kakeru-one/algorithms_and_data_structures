#include <iostream>
using namespace std;

int main() {  
  int N, A, B;
  cin >> N >> A >> B;
  int answer = 0;
  for (int i = 1; i <=N; i++)
  {
    // 10 進法での各桁の和
    int total = 0;
    int current_number = i;
    // 割り切ったら0になるので、それまでループする。
    while (current_number > 0)
    {
      // 1の位から足し算していく。
      total += current_number % 10;
      current_number /= 10;
    }
    if (total >= A && total <= B) {
      answer += i;
    }
  }
  
  cout << answer << endl;
}

