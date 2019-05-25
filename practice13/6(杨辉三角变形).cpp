//https://www.nowcoder.com/practice/8ef655edf42d4e08b44be4d777edbf43?tpId=37&tqId=21276&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, j, m, n, p;
	while (cin >> n)
	{
		p = 2 * n - 1;
		int **pt = new int*[n];
		for (i = 0; i < n; i++)
		{
			pt[i] = new int[p]();
		}
		m = 2 * i - 2;
		for (i = n, j = 0; i > 0; i--, j++)
		{
			if (i == 1)
			{
				pt[i - 1][j] = 1;
				continue;
			}
			pt[i-1][j] = 1;
			pt[i-1][m] = 1;
			m--;
		}
		for (i = 1; i < n; i++)
		{
			for (j = p / 2 - i + 1; j <= p / 2 + i - 1; j++)
			{
				pt[i][j] = pt[i - 1][j - 1] + pt[i - 1][j] + pt[i - 1][j + 1];
			}
		}
		for (i = 0; i < p; i++)
		{
			if (pt[n - 1][i] % 2 == 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}