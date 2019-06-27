//https://www.nowcoder.com/practice/661e24c11de64e78804fdce653dafb0e?tpId=98&tqId=32850&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2, str;
	int i, m, n, x, y, sign, temp;
	while (cin >> str1 >> str2)
	{
		m = str1.size();
		n = str2.size();
		if (m < n)
		{
			str = str1, str1 = str2, str2 = str;
			temp = m, m = n, n = temp;
		}
		sign = 0;
		for (i = 0; i < m; i++)
		{
			x = i, y = 0;
			while (str1[x] == str2[y])
			{
				x++, y++;
				if (y == n)
				{
					break;
				}
			}
			if (y == n)
			{
				cout << 1 << endl;
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			cout << 0 << endl;
		}
	}
	system("pause");
	return 0;
}