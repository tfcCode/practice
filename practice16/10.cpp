//https://www.nowcoder.com/practice/136de4a719954361a8e9e41c8c4ad855?tpId=40&tqId=21364&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, m;
	char ch;
	while (getline(cin, str))
	{
		m = str.size();
		for (i = 0; i < m; i++)
		{
			ch = str[i];
			if (str[i] >= 'a'&&str[i] <= 'y')
			{
				str[i] = str[i] + 1;
				ch = str[i];
				continue;
			}
			if (str[i] == 'z')
			{
				str[i] = 'a';
				ch = str[i];
				continue;
			}
			if (str[i] >= 'A'&&str[i] <= 'Y')
			{
				str[i] = str[i] + 1;
				ch = str[i];
				continue;
			}
			if (str[i] == 'Z')
			{
				str[i] = 'A';
				ch = str[i];
				continue;
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}