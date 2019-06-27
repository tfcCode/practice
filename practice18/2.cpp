//https://www.nowcoder.com/practice/6d5e036defdf408681376a4a9d4930ff?tpId=98&tqId=32844&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, m, n;
	char ch;
	while (cin >> str)
	{
		int a[26] = { 0 };
		m = str.size();
		for (i = 0; i < m; i++)
		{
			n = str[i] - 'a';
			a[n]++;
		}
		ch = 'a';
		for (i = 0; i < 26; i++)
		{
			if (a[i] >= 1)
			{
				cout << ch << a[i];
			}
			ch++;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}