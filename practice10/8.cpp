#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, j, m, count, sign;
	while (cin >> m)
	{
		count = 0;
		for (i = 2; i <= m; i++)
		{
			sign = 0;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i%j == 0)
				{
					sign = 1;
				}
			}
			if (sign == 0)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}