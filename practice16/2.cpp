//https://www.nowcoder.com/practice/077d8fd660f74a938019b17314ed1707?tpId=90&tqId=30881&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, temp;
	int i, m, k1, k2;
	char ch;
	while (cin >> str)
	{
		ch = '\\';
		k1 = k2 = -1;
		m = str.size();
		for (i = m - 1; i >= 0; i--)
		{
			if (i - 4 >= 0 && str[i] == ']'&&str[i - 1] == 'g'&&str[i - 2] == 'm'&&str[i - 3] == 'i'&&str[i - 4] == '[')
			{
				k1 = i - 4;
				break;
			}
		}
		for (i = m - 1; i >= 0; i--)
		{
			if (i - 5 >= 0 && str[i] == ']'&&str[i - 1] == 'g'&&str[i - 2] == 'm'&&str[i - 3] == 'i' &&str[i - 4] == ch&&str[i - 5] == '[')
			{
				k2 = i;
				break;
			}
		}
		if (k1 == -1 || k2 == -1||k2<=k1)
		{
			cout << "null" << endl;
		}
		else
		{
			for (i = k1; i <= k2; i++)
			{
				cout << str[i];
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}