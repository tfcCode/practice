#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, temp;
	int m, n, i, j, sign, k, num, p;
	while (cin >> s1 >> s2)
	{
		sign = 0;
		m = s1.length();
		n = s2.length();
		if (m < n)
		{
			temp = s1, s1 = s2, s2 = temp;
			num = m, m = n, n = num;
		}
		for (i = m - 1, j = n - 1; i > 0; j--, i--)
		{
			if (j >= 0)
			{
				p = s1[i] - '0' + s2[j] - '0';
				if (p >= 10)
				{
					if (p % 10 == 0)
					{
						s1[i] = '0';
						s1[i - 1] = s1[i - 1] + p / 10;
					}
					else
					{
						s1[i] = p % 10 + '0';
						s1[i - 1] = s1[i - 1] + p / 10;
					}
				}
				else
				{
					s1[i] = p + '0';
				}
			}
			else
			{
				if (s1[i]-'0' >= 10)
				{
					if (s1[i] - '0' == 10)
					{
						s1[i] = '0';
						s1[i - 1] = s1[i - 1] + 1;
					}
					else
					{
						s1[i] = (s1[i] - '0') % 10 + '0';
						s1[i - 1] = s1[i - 1] + 1;
					}
				}
				else
				{
					sign = 1;
					break;
				}
			}
		}
		if (sign == 1)
		{
			cout << s1 << endl;
		}
		else
		{
			if (m == n)
			{
				k = s1[i] - '0' + s2[j] - '0';
			}
			else
			{
				k = s1[0] - '0';
			}
			cout << k;
			for (i = 1; i < m; i++)
			{
				cout << s1[i];
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}