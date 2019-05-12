#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int i, j, n;
	string temp;
	while (cin >> n)
	{
		string *s = new string[n];
		for (i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		cout << endl;
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (s[i]>s[j])
				{
					temp = s[i], s[i] = s[j], s[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << s[i] << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}