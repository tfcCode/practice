#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, m;
	while (cin >> s)
	{
		m = s.length();
		for (i = 0; i < m; i++)
		{
			if (s[i] == 'Z')
			{
				s[i] = 'a';
				continue;
			}
			if (s[i] >= 'A'&&s[i] <= 'Y')
			{
				s[i] = s[i] + 33;
				continue;
			}
			if (s[i] >= 'a'&&s[i] <= 'c')
			{
				s[i] = '2';
				continue;
			}
			if (s[i] >= 'd'&&s[i] <= 'f')
			{
				s[i] = '3';
				continue;
			}
			if (s[i] >= 'g'&&s[i] <= 'i')
			{
				s[i] = '4';
				continue;
			}
			if (s[i] >= 'j'&&s[i] <= 'l')
			{
				s[i] = '5';
				continue;
			}
			if (s[i] >= 'm'&&s[i] <= 'o')
			{
				s[i] = '6';
				continue;
			}
			if (s[i] >= 'p'&&s[i] <= 's')
			{
				s[i] = '7';
				continue;
			}
			if (s[i] >= 't'&&s[i] <= 'v')
			{
				s[i] = '8';
				continue;
			}
			if (s[i] >= 'w'&&s[i] <= 'z')
			{
				s[i] = '9';
				continue;
			}
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}