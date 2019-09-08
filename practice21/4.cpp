//https://www.nowcoder.com/practice/a2d5b1875bb0408384278f40d1f236c9?tpId=90&tqId=30808&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, m, temp, length;
	string str;
	while (cin >> str)
	{
		length = 0, temp = 0;
		m = str.size();
		for (i = 0; i < m; i++)
		{
			if (str[i] == '(')
			{
				temp++;
				if (temp > length)
				{
					length = temp;
				}
			}
			else
			{
				temp--;
			}
		}
		cout << length << endl;
	}
	system("pause");
	return 0;
}