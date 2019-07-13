//https://www.nowcoder.com/practice/967133d6656440ba951870eaf17861de?tpId=98&tqId=32858&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, j, m, n, k, sign;
	while (cin >> n)
	{
		m = 1;
		sign = 0;
		for (i = 1; i <= n;)
		{
			k = i;
			for (j = 1; j <= m; j++)
			{
				i++;
				if (i > n)
				{
					sign = 1;
					break;
				}
			}
			if (sign == 1)
			{
				break;
			}
			m++;
		}
		cout << m << endl;
	}
	system("pause");
	return 0;
}