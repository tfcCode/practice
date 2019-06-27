//https://www.nowcoder.com/practice/0425aa0df74646209d3f56f627298ab2?tpId=98&tqId=32845&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int m, n, i, j, x;
	while (cin >> n)
	{
		string *pt = new string[n];
		string *pt1 = new string[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		for (i = 0; i < n; i++)
		{
			pt1[i] = "000000";
			m = pt[i].size();
			x = m - 6;
			copy(pt[i].begin() + x, pt[i].end(), pt1[i].begin());
		}
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (pt1[i] > pt1[j])
				{
					str = pt1[i], pt1[i] = pt1[j], pt1[j] = str;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << pt1[i] << endl;
		}
	}
	system("pause");
	return 0;
}