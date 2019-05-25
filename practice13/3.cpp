#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[10001] = { 0 }, i, j, m, sign, x, y, count, temp;
	for (i = 2; i <= 10000; i++)
	{
		sign = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			a[i] = i;
		}
	}
	while (cin >> m)
	{
		count = 1000;
		for (i = 2; i <= m / 2; i++)
		{
			for (j = m / 2; j <= m; j++)
			{
				if (a[i] + a[j] == m)
				{
					temp = a[j] - a[i];
					if (temp < count)
					{
						x = i, y = j;
						count = temp;
					}
				}
			}
		}
		cout << x << endl << y << endl;
	}
	system("pause");
	return 0;
}