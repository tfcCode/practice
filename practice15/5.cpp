//https://www.nowcoder.com/practice/27bcafcd8baa41ea9334442cc7210138?tpId=3&tqId=10925&tPage=4&rp=&ru=/ta/hackathon&qru=/ta/hackathon/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, temp;
	int i, j, m, n, length, x, y, sign;
	while (cin >> str)
	{
		m = str.length();
		n = 0;
		if (m == 1)
		{
			cout << str << endl;
			continue;
		}
		for (i = 0; i < m; i++)
		{
			for (j = m - 1; j > i; j--)
			{
				x = i, y = j;
				sign = 0;
				while (str[x] == str[y])
				{
					x++, y--;
					if (y < x)
					{
						break;
					}
					if (((y == x + 1) || (x == y)) && str[x] == str[y])
					{
						sign = 1;
						break;
					}
				}
				length = j - i;
				if (sign == 1 && length > n)
				{
					n = length;
					temp.clear();
					temp.insert(temp.begin(), str.begin() + i, str.begin() + j + 1);
				}
			}
		}
		if (n == 0)
		{
			cout << 1 << endl;
		}
		if (n != 0)
		{
			cout << temp << endl;
		}
		temp.clear();
	}
	system("pause");
	return 0;
}