//https://www.nowcoder.com/practice/2d47abf176f7486db0d707088404db8a?tpId=90&tqId=30883&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, j, m, n, sum, count;
	while (cin >> m >> n)
	{
		count = 0;
		int **pt = new int *[n];
		for (i = 0; i < n; i++)
		{
			pt[i] = new int[m]();
		}
		sum = 0, i = -1, j = -1;
		while (1)
		{
			for (i++, j++; j < m; j++)
			{
				if (pt[i][j] == 0)
				{
					pt[i][j] = sum;
					count++;
				}
				else
				{
					break;
				}
			}
			sum = sum + 1;
			for (i++, j--; i < n; i++)
			{
				if (pt[i][j] == 0)
				{
					pt[i][j] = sum;
					count++;
				}
				else
				{
					break;
				}
			}
			sum++;
			for (i--, j--; j >= 0; j--)
			{
				if (pt[i][j] == 0)
				{
					pt[i][j] = sum;
					count++;
				}
				else
				{
					break;
				}
			}
			sum++;
			for (i--, j++; i > 0; i--)
			{
				if (pt[i][j] == 0)
				{
					pt[i][j] = sum;
					count++;
				}
				else
				{
					break;
				}
			}
			sum++;
			if (count == m*n)
			{
				break;
			}
		}
		sum++;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cout << pt[i][j];
			}
			cout << endl;
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}