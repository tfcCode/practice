//https://www.nowcoder.com/practice/637062df51674de8ba464e792d1a0ac6?tpId=37&tqId=21319&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string ch = "*";
	char p;
	int m, i, sign;
	while (cin >> str)
	{
		m = str.size();
		sign = 0;
		for (i = 0; i < str.size() + 1; i++)
		{
			p = str[i];
			if (str[i] >= '0'&&str[i] <= '9'&&sign == 0)
			{
				str.insert(i, ch);
				sign = 1;
			}
			else if (sign == 1 && (str[i]<'0' || str[i]>'9'))
			{
				sign = 0;
				str.insert(i, ch);
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}