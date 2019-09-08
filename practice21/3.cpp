//https://www.nowcoder.com/practice/e496d8e885a949d18476b2dea1e594a9?tpId=90&tqId=30794&tPage=1&rp=1&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
using namespace std;

int main()
{
	int n, i, j, temp, x;
	while (cin >> n)
	{
		x = 0;
		int *pt = new int[n];
		int *p = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
			p[i] = pt[i];
		}
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (pt[i] > pt[j])
				{
					temp = pt[i], pt[i] = pt[j], pt[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			if (p[i] != pt[i])
			{
				x++;
			}
		}
		cout << x << endl;
	}
	system("pause");
	return 0;
}