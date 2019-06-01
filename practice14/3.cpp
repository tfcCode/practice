//https://www.nowcoder.com/practice/ebe941260f8c4210aa8c17e99cbc663b?tpId=37&tqId=21292&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	while (cin >> x >> y >> z)
	{
		int i, j;
		int **a = new int *[x];
		for (i = 0; i < x; i++)
		{
			a[i] = new int[y]();
			for (j = 0; j < y; j++)
			{
				cin >> a[i][j];
			}
		}
		int **b = new int *[y];
		for (i = 0; i < y; i++)
		{
			b[i] = new int[z]();
			for (j = 0; j < z; j++)
			{
				cin >> b[i][j];
			}
		}
		int **c = new int *[x];
		for (i = 0; i < x; i++)
		{
			c[i] = new int[z]();
		}
		int p, sum, k;
		for (i = 0; i < x; i++)
		{
			p = 0;
			for (k = 0; k < z; k++)
			{
				sum = 0;
				for (j = 0; j < y; j++)
				{
					sum = sum + a[i][j] * b[j][p];
				}
				c[i][k] = sum;
				p++;
			}
		}
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < z; j++)
			{
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
		delete[]a;
		delete[]b;
		delete[]c;
	}
	system("pause");
	return 0;
}