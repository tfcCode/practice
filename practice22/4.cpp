
//https://www.nowcoder.com/pat/6/problem/4050
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void science_count1(string& str)
{
	str.erase(1, 1);
	int x = 0, sum = 0, n, m, sign = 0;
	while (1)
	{
		if (str[x] == '-' || str[x] == '+')
		{
			break;
		}
		x++;
	}
	if (str[x] == '+')
	{
		sign = 1;
	}
	str.erase(x - 1, 2);
	n = str.size() - x + 1;
	x = x - 2;
	for (int i = x + 1; i < str.size(); i++)
	{
		sum = sum + (str[i] - '0')*pow(10, --n);
	}
	str.erase(x + 1, str.size() - x - 1);
	if (sign == 1)
	{
		if (sum < str.size() - 1)
		{
			str.insert(str.begin() + str.size() - sum + 1, '.');
		}
		else
		{
			str.insert(str.begin() + str.size(), sum - str.size() + 1, '0');
		}
		cout << str << endl;
	}
	else
	{
		cout << "0.";
		for (int i = 0; i < sum - 1; i++)
		{
			cout << '0';
		}
		cout << str << endl;
	}
}

int main()
{
	string str;
	while (cin >> str)
	{
		if (str[0] == '-')
		{
			cout << '-';
		}
		str.erase(0, 1);
		science_count1(str);
	}
	system("pause");
	return 0;
}