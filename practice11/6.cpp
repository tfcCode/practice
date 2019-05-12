#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, count, m, j;
	while (cin >> s)
	{
		count = 0;
		m = s.length();
		for (i = 0; i<m; i++)
		{
			if (s[i] == 0)
			{
				continue;
			}
			if (s[i] > 0 && s[i] < 127)
			{
				for (j = i + 1; j < m; j++)
				{
					if (s[j] == s[i])
					{
						s[j] = 0;
						count++;
					}
				}
			}
			else
			{
				s[i] = 0;
				count++;
			}
		}
		cout << m - count << endl;
	}
	system("pause");
	return 0;
}