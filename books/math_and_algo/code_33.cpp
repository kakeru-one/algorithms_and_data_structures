#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  long long ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  // ベクトル BA, BC, CA, CB の成分表示を求める
  long long BAx = (ax - bx), BAy = (ay - by);
	long long BCx = (cx - bx), BCy = (cy - by);
	long long CAx = (ax - cx), CAy = (ay - cy);
	long long CBx = (bx - cx), CBy = (by - cy);

  // どのパターンに当てはまるかを判定する
	int pattern = 2;
  // NOTE: 計算結果がlong long型になるので、0LLで型を合わせている
	if (BAx * BCx + BAy * BCy < 0LL) pattern = 1;
	if (CAx * CBx + CAy * CBy < 0LL) pattern = 3;

  // 点と直線の距離を求める
	double Answer = 0.0;
  // A-B間の距離(ABの大きさ)を求める
	if (pattern == 1) Answer = sqrt(BAx * BAx + BAy * BAy);
  // C-A間の距離(CAの大きさ)を求める
	if (pattern == 3) Answer = sqrt(CAx * CAx + CAy * CAy);
	if (pattern == 2) {
    // 外積の大きさ　 = vector_ABとvector_BCが作る平行四辺形の面積
		double S = abs(BAx * BCy - BAy * BCx);
		double BCLength = sqrt(BCx * BCx + BCy * BCy);
		Answer = S / BCLength;
	}

  // 答えの出力（小数点以下12桁までが表示される）
	printf("%.12lf\n", Answer);
	return 0;
}
