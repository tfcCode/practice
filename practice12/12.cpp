#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	int i, j, m, n, x, y, temp, count;
	while (cin >> s1 >> s2)
	{
		temp = 0;
		m = s1.length();
		n = s2.length();
		for (i = 0; i < m; i++)
		{
			count = 0;
			for (j = 0; j < n; j++)
			{
				x = i, y = j;
				while (s1[x] == s2[y])
				{
					x++;
					y++;
					count++;
					if (x >= m || y >= n)
					{
						break;
					}
				}
				if (count > temp)
				{
					temp = count;
				}
				count = 0;
			}
		}
		cout << temp << endl;
	}
	system("pause");
	return 0;
}