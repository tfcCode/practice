//https://www.nowcoder.com/practice/cc6ad889f95c49c08da1b338dd2e07ab?tpId=98&tqId=32857&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, sum, a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, year, month, day, sign;
	while (cin >> year >> month >> day)
	{
		sign = 0;
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			sign = 1;
		}
		sum = 0;
		for (i = 0; i < month - 1; i++)
		{
			sum = sum + a[i];
		}
		if (sign == 1)
		{
			sum = sum + day + 1;
		}
		else
		{
			sum = sum + day;
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}