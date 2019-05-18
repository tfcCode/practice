//https://www.nowcoder.com/practice/7299c12e6abb437c87ad3e712383ff84?tpId=37&tqId=21279&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int n, i, j, count;
	while (cin >> n)
	{;
		int *pt = new int[n + 1]();
		for (i = 1; i <= n; i++)
		{
			count = 0;
			for (j = 1; j <= i / 2; j++)
			{
				if (i%j == 0)
				{
					count += j;
				}
			}
			if (i == count)
			{
				pt[i] = 1;
			}
		}
		count = 0;
		for (i = 1; i <= n; i++)
		{
			if (pt[i] == 1)
			{
				count++;
			}
		}
		cout << count << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}