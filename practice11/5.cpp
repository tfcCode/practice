#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, j, m;
	cin >> s;
	m = s.length();
	for (i = m - 1; i >= 0; i--)
	{
		if (s[i] == 'a')
		{
			continue;
		}
		for (j = m - 1; j >= 0; j--)
		{
			if (s[j] == 'a'||i == j)
			{
				continue;
			}
			if (s[j] == s[i])
			{
				s[j] = 'a';
			}
		}
	}
	for (i = m - 1; i >= 0; i--)
	{
		if (s[i]!= 'a')
		{
			cout << s[i];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}