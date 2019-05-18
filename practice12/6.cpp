//https://www.nowcoder.com/practice/8f3df50d2b9043208c5eed283d1d4da6?tpId=37&tqId=21228&tPage=1&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	string s;
	char ch;
	int i, k, len, b1, b2, q;
	while (cin >> s)
	{
		len = s.length();
		q = len - 3;
		k = 0;
		for (i = 2; i < len; i++)
		{
			ch = s[i];
			if (ch >= '0'&&ch <= '9'&&ch - '0' < 16)   //处理0-9的字符，不能包含大于等于进制数的字符
			{
				b1 = s[i] - '0';
				k = k + b1 * pow(16, q--);
			}
			if (ch >= 'A'&&ch <= 'Z' && (ch - 'A') < 6)   //处理A-F的字符，不能包含大于等于进制数的字符
			{
				b2 = s[i] - '7';
				k = k + b2 * pow(16, q--);
			}
		}
		cout << k << endl;
	}
	system("pause");
	return 0;
}