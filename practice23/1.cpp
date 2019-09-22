
//https://www.nowcoder.com/practice/44da6966beb449d383f62b12e8df6317?tpId=98&tqId=32853&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	char ch;
	int x;
	while (cin >> str)
	{
		ch = str[0];
		x = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ch)
			{
				x++;
			}
			else
			{
				cout << x << ch;
				ch = str[i];
				x = 1;
			}
		}
		cout << x << ch << endl;
	}
	system("pause");
	return 0;
}