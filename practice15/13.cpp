#include<iostream>
#include<string>
#include<algorithm>
//https://www.nowcoder.com/practice/4f356b0618d14737a6f3782771bb4079?tpId=90&tqId=30798&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<vector>
using namespace std;
int main()
{
	int n, i, m, j, length1, length2;
	string str;
	cin >> n;
	vector<string> pt(n);
	vector<string>::iterator p;
	for (i = 0; i < n; i++)
	{
		cin >> pt[i];
		sort(pt[i].begin(), pt[i].end());
		m = pt[i].size();
		for (j = 0; j < m; j++)
		{
			if (pt[i][j] == '0')
			{
				pt[i].erase(pt[i].begin(), pt[i].begin() + 1);
				j--;
			}
			else
			{
				break;
			}
		}
	}
	str = pt[0];
	for (i = 0; i < n; i++)
	{
		length1 = str.size(), length2 = pt[i].size();
		if (length1 == length2)
		{
			if (str < pt[i])
			{
				str = pt[i];
			}
			continue;
		}
		if (length1 < length2)
		{
			str = pt[i];
			continue;
		}
		if (length1 > length2)
		{
			continue;
		}
	}
	cout << str << endl;
	system("pause");
	return 0;
}