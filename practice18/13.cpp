//https://www.nowcoder.com/practice/b1b9a88d8e3946e993232e2525f6a11c?tpId=98&tqId=33043&tPage=11&rp=11&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
bool div(string num1, int num2)
{
	int i, m, r, sum;
	m = num1.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = num1[i] - '0';
	}
	r = 0;
	for (i = 0; i < m; i++)
	{
		sum = r * 10 + pt[i];
		r = sum%num2;
	}
	if (r == 0)
	{
		delete[]pt;
		return true;
	}
	else
	{
		delete[]pt;
		return false;
	}
}
int main()
{
	int i, m, x, n, j;
	while (cin >> n)
	{
		string *pt1 = new string[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt1[i];
		}
		for (i = 0; i < n; i++)
		{
			m = pt1[i].size();
			int *pt2 = new int[m];
			for (j = 0; j < m; j++)
			{
				pt2[j] = pt1[i][j] - '0';
			}
			x = 0;
			for (j = 0; j < m; j++)
			{
				if (pt2[j] == 0)
				{
					x++;
					continue;
				}
				if (div(pt1[i], pt2[j]))
				{
					x++;
				}
			}
			if (x == 0)
			{
				cout << "S" << endl;
			}
			else if (x == m)
			{
				cout << "G" << endl;
			}
			else if (x > 0 && x < m)
			{
				cout << "H" << endl;
			}
			delete[]pt2;
		}
	}
	system("pause");
	return 0;
}