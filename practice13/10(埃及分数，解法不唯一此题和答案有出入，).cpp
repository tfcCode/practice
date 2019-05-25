//https://www.nowcoder.com/practice/e0480b2c6aa24bfba0935ffcca3ccb7b?tpId=37&tqId=21305&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int a, b, m, n, sign;
	char ch;
	while (cin >> a >> ch >> b)
	{
		sign = 0;
		while (a > 1)
		{
			m = b / a;
			n = b%a;
			cout << 1 << '/' << m + 1 << '+';
			a = a - n;
			b = b*(m + 1);
			if (b%a == 0)
			{
				cout << 1 << '/' << b / a << endl;
				sign = 1;
				break;
			}
		}
		if (sign == 0)
		{
			cout << a << '/' << b << endl;
		}
	}
	system("pause");
	return 0;
}
