

//https://www.nowcoder.com/practice/2561ad26e8804cf8801926f03708ef03?tpId=98&tqId=32983&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void change_numbers(string str1, string str2){
	int m, n, temp;
	int deletion;
	int insertion;
	int addtion;
	m = str1.size();
	n = str2.size();
	int **dp = new int*[m + 1];
	for (int i = 0; i <= m; i++){
		dp[i] = new int[n + 1];
	}
	dp[0][0] = 0;

	for (int i = 1; i <= m; i++){
		dp[i][0] = i;
	}
	for (int i = 1; i <= n; i++){
		dp[0][i] = i;
	}

	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			temp = str1[i - 1] == str2[j - 1] ? 0 : 1;
			deletion = dp[i][j - 1] + 1;
			insertion = dp[i - 1][j] + 1;
			addtion = dp[i - 1][j - 1] + temp;
			dp[i][j] = min(deletion, min(insertion, addtion));
		}
	}
	cout << dp[m][n] << endl;
}

void main(){
	string str1, str2;
	cin >> str1 >> str2;
	change_numbers(str1, str2);

	system("pause");
}