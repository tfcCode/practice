//https://www.nowcoder.com/practice/b69c933c28164cbd8852820c16556a84?tpId=98&&tqId=33015&rp=6&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i, j, a[1000], x = 0, n, y, sign, sign1;
	while (1)
	{
		cin >> a[x];
		x++;
		if (cin.get() == ',')
		{
			break;
		}
	}
	cin >> n;
	sort(a, a + x);
	y = -1;
	for (i = 0; i < x; i++)
	{
		if (a[i] >= n)
		{
			y = i;
			break;
		}
	}
	sign = 0, sign1 = 0;
	if (y == -1)
	{
		y = x;
	}
	for (i = 0; i < y; i++)
	{
		for (j = i + 1; j < y; j++)
		{
			for (int k = j + 1; k < y; k++)
			{
				if (a[i] + a[j] + a[k] == n)
				{
					sign = 1;
					break;
				}
			}
			if (sign == 1)
			{
				sign1 = 1;
				break;
			}
		}
		if (sign1 == 1)
		{
			break;
		}
	}
	if (sign == 0)
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}
	system("pause");
	return 0;
}