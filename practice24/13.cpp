
//https://www.nowcoder.com/practice/0e6cb06ec63148ed952f887a787f0103?tpId=98&tqId=32869&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
	int x, limit;
	vector<int> pt;
	while (cin >> x)
	{
		if (cin.get() == '\n')
		{
			pt.push_back(x);
			break;
		}
		pt.push_back(x);
	}
	cin >> limit;
	sort(pt.begin(), pt.end());
	int i, j, n;
	i = 0, j = pt.size() - 1, n = 0;
	while (i < j)
	{
		if (pt[i] + pt[j] <= limit)
		{
			i++, j--;
		}
		else
		{
			j--;
		}
		n++;
	}
	n = n + (i == j ? 1 : 0);
	cout << n << endl;
	system("pause");
	return 0;
}