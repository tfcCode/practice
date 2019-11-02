

//https://www.nowcoder.com/practice/24e6243b9f0446b081b1d6d32f2aa3aa?tpId=37&tqId=21326&tPage=6&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

void length(int n) {
	int *pt = new int[n];
	int *dp = new int[n];
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		cin >> pt[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (pt[i] > pt[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(result, dp[i]);
	}
	cout << result << endl;
	delete[]pt;
	delete[]dp;
}

int main(){
	int n;
	while (cin >> n) {
		length(n);
	}
	system("pause");
	return 0;
}
