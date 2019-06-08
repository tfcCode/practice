//https://www.nowcoder.com/practice/de7d4a4b50f643669f331941afb1e728?tpId=90&tqId=30805&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, m, num, y;
	while (cin >> str)
	{
		m = str.size();
		num = 0, y = 0;
		for (i = 0; i < m; i++)
		{
			if (str[i] == '(')
			{
				num++;
			}
			else
			{
				if (num == 0)
				{
					y++;
				}
				else
				{
					num--;
				}
			}
		}
		cout << num + y << endl;
	}
	system("pause");
	return 0;
}