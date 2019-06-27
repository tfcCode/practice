//https://www.nowcoder.com/practice/2ff3d36b4d4a4bfeb1a7d64f3cc55c15?tpId=98&tqId=33031&tPage=11&rp=11&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, j, x;
	char ch, ch1;
	while (getline(cin, str))
	{
		for (i = 0; i < str.size();)
		{
			ch = str[i], x = 0;
			for (j = i + 1; j < str.size();)
			{
				if (ch == str[j])
				{
					str.erase(str.begin() + j);
					x++;
				}
				else
				{
					break;
				}
			}
			if (x > 0)
			{
				ch1 = x + '0';
				str.insert(str.begin() + i, ch1);
				i = i + 2;
			}
			else
			{
				i++;
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}