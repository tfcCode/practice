

//https://www.nowcoder.com/practice/e3aa42adf73248c58bdaaaa3be162f83?tpId=98&tqId=32854&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Transform(string& str)
{
	reverse(str.begin(), str.end());
	int sum = 0, x = 0, sum1 = 0;
	for (int i = 0; i < str.size(); i++)
	{
		while (i < str.size() && str[i] != '+'&&str[i] != '-')
		{
			sum1 = sum1 + (str[i] - '0')*pow(10, x);
			x++, i++;
		}
		if (str[i] == '+' || i == str.size())
		{
			sum = sum + sum1;
			sum1 = 0, x = 0;
		}
		else
		{
			sum = sum - sum1;
			sum1 = 0, x = 0;
		}
	}
	cout << sum << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		Transform(str);
	}
	system("pause");
	return 0;
}