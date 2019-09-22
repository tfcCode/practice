

//https://www.nowcoder.com/practice/83b419c027fa490aa60669b0e7dc06a3?tpId=98&tqId=32834&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		vector<pair<int, int>> sum(n + 1, { 0,0 });
		for (int i = 1; i <= n; i++)
		{
			cin >> sum[i].first;
			sum[i] = { sum[i - 1].first + sum[i].first,i };
		}
		int m, pt;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> pt;
			cout << lower_bound(sum.begin(), sum.end(), make_pair(pt, 0))->second << endl;
		}
	}
	system("pause");
	return 0;
}