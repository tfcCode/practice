
//https://www.nowcoder.com/practice/cb27a2cc0e8b41cbbdab7b0ca5c1bc23
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str, str1, str2;
	while (cin >> str)
	{
		int x;
		str1 = "";
		str2 = "";
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ';')
			{
				x = i;
				break;
			}
		}
		str1 = str.substr(0, x);
		str2 = str.substr(x + 1, str.size());
		string temp;
		int i, j;
		for (i = 0, j = 0; i < str1.size(); i++)
		{
			if (str1[i] == str2[j])
			{
				x = i;
				temp = str1.substr(i, str1.size()) + str1.substr(0, i);
				break;
			}
		}

		if (str2 == temp)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	system("pause");
	return 0;
}
