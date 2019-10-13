/*
  数字三角形：
               7
			 3   8
		   8   1   0
	     2   7   4   4
       4   5   2   6   5
	   在上面的数字三角形中寻找一条从顶部到底边的路径，使得路径上所经过的数字之和最大。
	   路径上的每一步都只能往左下或 右下走。只需要求出这个最大和即可，不必给出具体路径。 
	   三角形的行数大于1小于等于100，数字为 0 - 99
输入格式：
5      //表示三角形的行数    接下来输入三角形
7
3   8
8   1   0
2   7   4   4
4   5   2   6   5

要求输出最大和
*/

#include<iostream>
#include<algorithm>
using namespace std;

int D[50][50];

int main() {
	int n;
	while (cin >> n) {
		int *maxSum = new int[n + 1];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				cin >> D[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			maxSum[i] = D[n][i];
		}
		for (int i = n - 1; i >= 1; i--) {
			for (int j = 1; j <= i; j++) {
				maxSum[j] = max(maxSum[j], maxSum[j + 1]) + D[i][j];
			}
		}
		cout << maxSum[1] << endl;
		delete[]maxSum;
	}
}