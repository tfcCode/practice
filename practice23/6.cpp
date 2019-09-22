

//https://www.nowcoder.com/practice/57260c08eaa44feababd05b328b897d7?tpId=98&tqId=32880&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

void bracket_matching(string& str)
{
	char *ch = new char[str.size()];
	int m = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (m >= 1 && str[i] == ')' && ch[m - 1] == '(')
		{
			m--;
		}
		else if (m >= 1 && str[i] == ']' && ch[m - 1] == '[')
		{
			m--;
		}
		else if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']')
		{
			ch[m] = str[i];
			m++;
		}
	}
	if (m == 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	delete[]ch;
}

int main()
{
	string str;
	while (cin >> str)
	{
		bracket_matching(str);
	}
	system("pause");
	return 0;
}