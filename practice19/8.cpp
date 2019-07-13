//https://www.nowcoder.com/practice/1ff47ce832054d2d84fc66a70e9e1009?tpId=98&&tqId=33058&rp=2&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, a, b, c;
	int i, n, sum;
	while (getline(cin, a, ':'))
	{
		getline(cin, b, ':');
		getline(cin, c);
		if (c[2] == 'A')
		{
			if (a[0] == '1'&&a[1] == '2')
			{
				cout << "00:00:00" << endl;
			}
			else
			{
				cout << a << ":" << b << ":" << c[0] << c[1] << endl;
			}
		}
		else
		{
			if (a[0] == '1'&&a[1] == '2')
			{
				cout << "12:00:00" << endl;
			}
			else
			{
				sum = 0, n = 1;
				for (i = 1; i >= 0; i--)
				{
					sum = sum + (a[i] - '0')*n;
					n = n * 10;
				}
				sum = sum + 12;
				cout << sum << ":" << b << ":" << c[0] << c[1] << endl;
			}
		}
	}
	system("pause");
	return 0;
}