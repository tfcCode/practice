


/*
  N个方盒摆成一排，每个方盒都有自己的颜色。连续摆放的颜色相同的方盒为一个“大块”，例如：
  1 2 2 2 2 3 3 3 3 1  表示有四个“大块”。
  玩家每次点击一个“大块”，若“大块”中有k个方盒，玩家获得k*k个积分，求玩家能获得的最大积分。
*/
#include<iostream>
#include<algorithm>
using namespace std;

struct Block {
	int color;
	int len;
};

struct Block segment[200];
int score[200][200][200];   //存放结果，避免重复计算

int click_box(int start, int end, int extra_len) {
	int i, result, temp;
	if (score[start][end][extra_len] > 0) {
		return score[start][end][extra_len];
	}
	result = segment[end].len + extra_len;
	result = result*result;  //end和 extra_len一起消去后的得分
	if (start == end) {
		score[start][end][extra_len] = result;
		return score[start][end][extra_len];
	}
	result = result + click_box(start, end - 1, 0);

	for (i = end - 1; i >= start; i--) {
		if (segment[i].color != segment[end].color) {
			continue;
		}
		temp = click_box(start, i, segment[end].len + extra_len) + click_box(i + 1, end - 1, 0);
		if (temp > result) {
			result = temp;
		}
	}
	score[start][end][extra_len] = result;
	return score[start][end][extra_len];
}

int main() {
	int t, n, i, j, end, color;
	cin >> t;   //测试数据组数

	for (i = 0; i < t; i++) {
		cin >> n;    //盒子总数
		end = 0;     //大块总数
		cin >> segment[end].color;
		segment[end].len = 1;
		for (j = 1; j < n; j++) {
			cin >> color;
			if (segment[end].color == color) {
				segment[end].len++;
			}
			else {
				end++;
				segment[end].len = 1;
				segment[end].color = color;
			}
		}
		memset(score, 0, sizeof(score));
		cout << "Case：" << i + 1 << " " << click_box(0, end, 0) << endl;
	}

	system("pause");
	return 0;
}