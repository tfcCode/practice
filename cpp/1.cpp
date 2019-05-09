//https://www.nowcoder.com/practice/d9162298cb5a437aad722fccccaae8a7?tpId=37&tqId=21227&tPage=1&rp=&ru=%2Fta%2Fhuawei&qru=%2Fta%2Fhuawei%2Fquestion-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, s1;
	int i, m, n, p, m1, n1;
	cin >> s >> s1;
	m = s.length();
	n = s1.length();
	m1 = m, n1 = n;
	if (m <= 8)
	{
		cout << s;
		for (i = 0; i < 8 - m; i++)
		{
			cout << '0';
		}
		cout << endl;
	}
	else
	{
		p = 0;
		while (m > 8)
		{
			m = m - 8;
			for (i = p; i < p + 8; i++)
			{
				cout << s[i];
			}
			p = i;
			cout << endl;
		}
		for (i = p; i < m1; i++)
		{
			cout << s[i];
		}
		for (i = 0; i < 8 - m; i++)
		{
			cout << 0;
		}
		cout << endl;
	}
	if (n <= 8)
	{
		cout << s1;
		for (i = 0; i < 8 - n; i++)
		{
			cout << '0';
		}
		cout << endl;
	}
	else
	{
		p = 0;
		while (n > 8)
		{
			n = n - 8;
			for (i = p; i < p + 8; i++)
			{
				cout << s1[i];
			}
			p = i;
			cout << endl;
		}
		for (i = p; i < n1; i++)
		{
			cout << s1[i];
		}
		for (i = 0; i < 8 - n; i++)
		{
			cout << 0;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}