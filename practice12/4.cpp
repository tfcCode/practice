#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, str;
	int i, m, j, count, sign1, sign2, sign3, sign4;
	while (cin >> s)
	{
		count = 0;
		str = s;
		m = s.length();
		sign1 = sign2 = sign3 = sign4 = 0;
		if (m <= 8)
		{
			cout << "NG" << endl;
			continue;
		}
		for (i = 0; i < m; i++)
		{
			if (count >= 3)
			{
				break;
			}
			if (s[i] >= 'a'&&s[i] <= 'z'&&sign1 == 1)
			{
				continue;
			}
			if (s[i] >= 'A'&&s[i] <= 'Z'&&sign2 == 2)
			{
				continue;
			}
			if (s[i] >= '0'&&s[i] <= '9'&&sign3 == 3)
			{
				continue;
			}
			if (s[i] >= 'a'&&s[i] <= 'z')
			{
				sign1 = 1;
				count++;
				continue;
			}
			else if (s[i] >= 'A'&&s[i] <= 'Z')
			{
				sign2 = 2;
				count++;
				continue;
			}
			else if (s[i] >= '0'&&s[i] <= '9')
			{
				sign3 = 3;
				count++;
				continue;
			}
			else
			{
				sign4 = 4;
				count++;
			}
		}
		if (count < 3)
		{
			cout << "NG" << endl;
			continue;
		}
		int temp, x, y, len, sign;
		temp = 0;
		for (i = 0; i < m; i++)
		{
			sign = 0;
			for (j = i + 1; j < m; j++)
			{
				len = 0;
				x = i, y = j;
				while (s[x] == str[y])
				{
					x++;
					y++;
					len++;
				}
				if (len > 2)
				{
					sign = 1;
					break;
				}
			}
			if (sign == 1)
			{
				break;
			}
		}
		if (sign == 1)
		{
			cout << "NG" << endl;
			continue;
		}
		cout << "OK" << endl;
	}
	system("pause");
	return 0;
}