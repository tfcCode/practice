

//https://www.nowcoder.com/practice/fae1307a24ae4e9ea852a646a4f812bf?tpId=98&tqId=32870&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
	string str;
	while (cin >> str)
	{
		int len = str.size();
		int *values = new int[len]();
		int value = 0;
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'R')
			{
				value = len;
			}
			else if (str[i] == 'L')
			{
				value = 0;
			}
			else
			{
				value = max(value - 1, 0);
			}
			values[i] += value;
		}
		value = 0;
		for (int i = len - 1; i >= 0; i--)
		{
			if (str[i] == 'L')
			{
				value = len;
			}
			else if (str[i] == 'R')
			{
				value = 0;
			}
			else
			{
				value = max(value - 1, 0);
			}
			values[i] -= value;
		}
		for (int i = 0; i < len; i++)
		{
			if (values[i] > 0)
			{
				str[i] = 'R';
				continue;
			}
			if (values[i] < 0)
			{
				str[i] = 'L';
				continue;
			}
			if (values[i] == 0)
			{
				str[i] = '.';
				continue;
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}