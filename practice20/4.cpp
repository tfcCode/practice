//https://www.nowcoder.com/practice/fc72d3493d7e4be883e931d507352a4a?tpId=98&tqId=32827&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char ch[] = { 'N','W','S','E' };
	int n, now = 0;
	string str;
	cin >> n;
	cin >> str;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'L')
		{
			now++;
			if (now > 3)
			{
				now = 0;
			}
		}
		if (str[i] == 'R')
		{
			now--;
			if (now < 0)
			{
				now = 3;
			}
		}
	}
	cout << ch[now] << endl;
	system("pause");
	return 0;
}