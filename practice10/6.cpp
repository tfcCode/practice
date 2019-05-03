#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[80];
	int p, i, j;
	char ch, ch1;
	while (cin >> ch)
	{
		p = 1;
		ch1 = cin.get();
		cin >> s[0];
		while (cin.get() != '\n')
		{
			cin >> s[p];
			p++;
		}
		for (i = p - 1; i > 0; i--)
		{
			cout << s[i] << " ";
		}
		if (ch1 == ' ')
		{
			cout << s[0] << " " << ch << endl;
		}
		else
		{
			cout << ch << ch1 << s[0] << endl;
		}
	}
	system("pause");
	return 0;
}
