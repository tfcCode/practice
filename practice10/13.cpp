#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	string s;
	int m, count, i;
	getline(cin, s);
	m = s.length();
	count = 0;
	for (i = 0; i < m; i++)
	{
		if (s[i] != ' ')
		{
			count++;
		}
		else
		{
			count = 0;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}