
//https://www.nowcoder.com/practice/a47c1795e32c43d38701af7862a4b359?tpId=98&tqId=32904&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int total, n;
	char c;
	cin >> total >> c >> n >> c;
	int *weight = new int[n];
	int *values = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> weight[i];
	}
	cin >> c;
	for (int i = 0; i < n; i++) {
		cin >> values[i];
	}

	int **pt = new int*[n + 1];
	for (int i = 0; i <= n; i++) {
		pt[i] = new int[total + 1]();
	}

	//计算容量在每时每刻的最大值
	int x;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= total; j++) {
			if (j < weight[i - 1]) {
				pt[i][j] = pt[i - 1][j];
			}
			else {
				      // pt[i - 1][j]：第i个物品不放入的最大值
				pt[i][j] = max(pt[i - 1][j], pt[i - 1][j - weight[i - 1]] + values[i - 1]);
			}        //pt[i - 1][j - weight[i - 1]] + values[i - 1]：第 i 个物品放入+前 i-1 个物品在容量为 j - weight[i - 1]时的最大值
			x = pt[i][j];
		}
	}
	cout << pt[n][total] << endl;
	system("pause");
	return 0;
}