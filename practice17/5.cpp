//https://www.nowcoder.com/practice/01b7dae14d1b464db5f9259e90d9a35e?tpId=40&tqId=21503&tPage=9&rp=9&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, m, n;
	while (cin >> str)
	{
		m = str.size();
		if (m == 1 && str[0] == '!')
		{
			break;
		}
		for (i = 0; i < m; i++)
		{
			if (str[i] >= 'a'&&str[i] <= 'z')
			{
				n = str[i] - 'a';
				str[i] = 'z' - n;
			}
			if ((str[i] >= 'A'&&str[i] <= 'Z'))
			{
				n = str[i] - 'A';
				str[i] = 'Z' - n;
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}