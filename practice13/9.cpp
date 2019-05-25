//https://www.nowcoder.com/practice/22fdeb9610ef426f9505e3ab60164c93?tpId=37&tqId=21304&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	int m, n, i, sign;
	while (cin >> str1 >> str2)
	{
		sign = 0;
		m = str1.size();
		n = str2.size();
		for (i = 0; i < m; i++)
		{
			if (str2.find(str1[i]) == str2.npos)
			{
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
		str1.clear();
		str2.clear();
	}
	system("pause");
	return 0;
}