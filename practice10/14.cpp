#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char ch;
	int m, i, count;
	cin >> s >> ch;
	m = s.length();
	count = 0;
	for (i = 0; i < m; i++)
	{
		if (s[i] == ch || s[i] - 32 == ch || s[i] == ch - 32)
		{
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}