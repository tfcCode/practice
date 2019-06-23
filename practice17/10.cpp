//https://www.nowcoder.com/practice/22d33f7d65b84a759babae4001e87740?tpId=90&tqId=30885&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	char ch;
	int i, j, count;
	while (cin >> str)
	{
		for (i = 0; i < str.size(); i++)
		{
			ch = str[i];
			count = 0;
			for (j = i; j < str.size(); j++)
			{
				if (str[j] == ch)
				{
					count++;
				}
				else
				{
					break;
				}
			}
			if (count == 3)
			{
				str.erase(str.begin() + i, str.begin() + j);
				i = -1;
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}