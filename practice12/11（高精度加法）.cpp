//https://www.nowcoder.com/practice/49e772ab08994a96980f9618892e55b6?tpId=37&tqId=21280&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, temp;
	int m, n, i, j, k, p, sign;
	while (cin >> s1 >> s2)
	{
		m = s1.length();
		n = s2.length();
		if (m < n)
		{
			temp = s1, s1 = s2, s2 = temp;
			p = m, m = n, n = p;
		}
		sign = 0;
		for (i = m - 1, j = n - 1; i > 0; i--, j--)
		{
			if (j >= 0)
			{
				k = s1[i] - '0' + s2[j] - '0';
				if (k >= 10)
				{
					s1[i - 1] += k / 10;
					s1[i] = k % 10 + '0';
				}
				else
				{
					s1[i] = k + '0';
				}
			}
			else
			{
				if (s1[i] - '0' >= 10)
				{
					s1[i - 1] += 1;
					s1[i] = (s1[i] - '0') % 10 + '0';
				}
				else
				{
					sign = 1;
					break;
				}
			}
		}
		if (m == n)
		{
			k = s1[i] - '0' + s2[j] - '0';
			cout << k;
			for (i = 1; i < m; i++)
			{
				cout << s1[i];
			}
			cout << endl;
		}
		if (m > n)
		{
			if (sign == 1)
			{
				cout << s1 << endl;
			}
			else
			{
				k = s1[i] - '0';
				cout << k;
				for (i = 1; i < m; i++)
				{
					cout << s1[i];
				}
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}