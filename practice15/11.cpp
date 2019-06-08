//https://www.nowcoder.com/practice/3fbd8fe929ea4eb3a254c0ed34ac993a?tpId=90&tqId=30782&tPage=1&rp=1&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, m, temp, count;
	char c1, c2;
	while (cin >> str)
	{
		m = str.size();
		temp = 0, count = 0;
		for (i = 0; i < m - 1; i++)
		{
			c1 = str[i], c2 = str[i + 1];
			if (str[i] != str[i + 1])
			{
				count++;
			}
			else
			{
				if (count > temp)
				{
					temp = count;
				}
				count = 0;
			}
		}
		if (count > temp)
		{
			temp = count;
		}
		cout << temp + 1 << endl;
	}
	system("pause");
	return 0;
}