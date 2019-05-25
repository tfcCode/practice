//https://www.nowcoder.com/practice/769d45d455fe40b385ba32f97e7bcded?tpId=37&tqId=21296&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int year, month, day, sign, count;
	while (cin >> year >> month >> day)
	{
		if (month > 12 || month < 1)
		{
			cout << -1 << endl;
			continue;
		}
		sign = 0;
		count = 0;
		if (year % 4 == 0 && year % 100 != 0)
		{
			sign = 1;
		}
		if (year % 400 == 0)
		{
			sign = 1;
		}
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
		{
			cout << -1 << endl;
			continue;
		}
		if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		{
			cout << -1 << endl;
			continue;
		}
		if (sign == 1 && month == 2 && day > 29)
		{
			cout << -1 << endl;
			continue;
		}
		if (sign == 0 && month == 2 && day > 28)
		{
			cout << -1 << endl;
			continue;
		}
		for (int i = 1; i <= month - 1; i++)
		{
			count = count + a[i];
		}
		count = count + day;
		if (sign == 1)
		{
			count = count + 1;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}