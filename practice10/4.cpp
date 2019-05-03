#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i, a[100000], j, m, p = 0, sign, count;
	for (i = 2; i <= 100000; i++)
	{
		m = sqrt(i), sign = 0;
		for (j = 2; j <= m; j++)
		{
			if (i%j == 0)
			{
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			a[p] = i;
			p++;
		}
	}
	while (cin >> n)
	{
		count = 0;
		for (i = 1; ; i++)
		{
			if (a[i] > n)
			{
				break;
			}
			if (a[i] - a[i - 1] == 2)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}
