
//https://www.nowcoder.com/practice/668603dc307e4ef4bb07bcd0615ea677?tpId=37&tqId=21297&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	vector<string> mystr;
	string str;
	int sign = 0, x = 0;
	while (cin >> str)
	{
		if (str[str.size() - 1] == '\"'&&str[0] == '\"')
		{
			sign = 1;
		}
		if (str[str.size() - 1] != '\"'&&str[0] != '\"')
		{
			sign = 1;
		}
		if (str[str.size() - 1] != '\"'&&str[0] == '\"')
		{
			sign = 0;
		}
		if (str[str.size() - 1] == '\"'&&str[0] != '\"')
		{
			sign = 1;
		}
		if (sign == 1)
		{
			x++;
		}
		mystr.push_back(str);
	}
	cout << x << endl;
	string next;
	string eve;
	for (int i = 0; i<mystr.size(); i++)
	{
		next = mystr[i];
		if (next[0] == '\"'&&next[next.size() - 1] == '\"')
		{
			int a = next.size();
			eve = next.substr(1, a - 2);
			cout << eve << endl;
		}
		else if (next[0] == '\"'&&next[next.size() - 1] != '\"')
		{
			int a = next.size();
			eve = next.substr(1, a);
			cout << eve << " ";
			i++;
			next = mystr[i];
			while (next[next.size() - 1] != '\"')
			{
				i++;
			}
			a = next.size();
			eve = next.substr(0, a - 1);
			cout << eve << endl;
		}
		else
		{
			cout << next << endl;
		}
	}
	system("pause");
	return 0;

}