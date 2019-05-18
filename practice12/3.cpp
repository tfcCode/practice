#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> s;
	string temp;
	int i, m;
	while (cin >> temp)
	{
		s.push_back(temp);
		if (cin.get() == '\n')
		{
			break;
		}
	}
	m = s.size();
	for (i = m - 1; i >= 0; i--)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}