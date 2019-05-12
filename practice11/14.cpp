//https://www.nowcoder.com/practice/e896d0f82f1246a3aa7b232ce38029d4?tpId=37&tqId=21282&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch;
	string s;
	int m, i, j, count, sign, sign1;
	while (cin >> s)
	{
		sign1 = 0;
		m = s.length();
		for (i = 0; i < m; i++)
		{
			if (s[i] == '0')
			{
				continue;
			}
			sign = 0;
			count = 0;
			for (j = i + 1; j < m; j++)
			{
				if (s[i] == '0')
				{
					continue;
				}
				ch = s[j];
				if (s[i] == s[j])
				{
					count++;
					s[j] = '0';
				}
			}
			if (count == 0)
			{
				cout << s[i] << endl;
				sign1 = 1;
				break;
			}
		}
		if (sign1 == 0)
		{
			cout << -1 << endl;
		}
	}
	system("pause");
	return 0;
}