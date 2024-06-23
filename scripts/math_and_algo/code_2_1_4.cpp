#include <iostream>
#include <string>
using namespace std;

int N;
string Answer = "";

int main() {
	cin >> N;
	while (N >= 1) {
		if (N % 3 == 0) Answer = "0" + Answer;
		if (N % 3 == 1) Answer = "1" + Answer;
		if (N % 3 == 2) Answer = "2" + Answer;
		N = N / 3;
	}
	cout << Answer << endl; // 出力部分
	return 0;
}
