//https://www.nowcoder.com/practice/ea1c82be0c144d74925a044973fe9a5c?tpId=90&tqId=30874&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int m, n, i, j, count, sign;
	while (cin >> m >> n)
	{
		count = 0;

		for (i = m; i <= n; i++)
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
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}