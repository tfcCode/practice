//https://www.nowcoder.com/practice/dd63c30dfef04770b5813e63f5a2615a?tpId=98&tqId=32881&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int m = str.size();
		if (str[0] == '-')
		{
			cout << '-';
			for (int i = m - 1; i > 0; i--)
			{
				cout << str[i];
			}
			cout << endl;
		}
		else
		{
			for (int i = m - 1; i >= 0; i--)
			{
				cout << str[i];
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}