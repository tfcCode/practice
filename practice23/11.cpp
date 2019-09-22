

//https://www.nowcoder.com/practice/f7500a858bde41108f01286f57f554f3?tpId=98&tqId=32878&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int n;
	cin >> str >> n;
	int m = str.size();
	int x = 0;
	if (n <= 0 || n > m)
	{
		cout << -1 << endl;
	}
	else
	{
		while (1)
		{
			for (int i = x; i < x + n; i++)
			{
				cout << str[i];
			}
			x++;
			if (x + n > m)
			{
				cout << endl;
				break;
			}
			else
			{
				cout << " ";
			}
		}
	}
	system("pause");
	return 0;
}