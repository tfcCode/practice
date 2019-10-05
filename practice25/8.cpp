

//https://www.nowcoder.com/practice/4bc284dc9d0144628a722eb5d1191ef3?tpId=98&tqId=32903&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n) {
		int *dp = new int[n + 1]();
		int dp_min;
		for (int i = 1; i <= n; i++) {
			dp_min = INT_MAX;
			for (int j = 1; j*j*j <= i; j++) {
				dp_min = min(dp_min, dp[i - j*j*j]);
			}
			dp[i] = dp_min + 1;
		}
		cout << dp[n] << endl;
		delete[]dp;
	}
	system("pause");
	return 0;
}