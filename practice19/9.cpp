//https://www.nowcoder.com/practice/bc4c7936f5ed42cbb9131b6f39aa272b?tpId=98&&tqId=33037&rp=4&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
void rev1(string &str)
{
	int i, j, m, r, num[1000], x, sum, count;
	m = str.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}
	for (i = 0; i < 63; i++)
	{
		num[i] = 1;
	}
	x = 0;
	for (i = 0; i < m;)
	{
		r = 0;
		for (j = i; j < m; j++)
		{
			sum = r * 10 + pt[j];
			r = sum % 2;
			pt[j] = sum / 2;
		}
		if (r == 1)
		{
			num[x] = 0;
		}
		else
		{
			num[x] = 1;
		}
		x++;
		while (pt[i] == 0)
		{
			i++;
		}
	}
	num[0]++;
	count = 0;
	for (i = 0; i < 63; i++)
	{
		if (num[i] == 2)
		{
			num[i] = 0;
			num[i + 1]++;
		}
		if (num[i] == 1)
		{
			count++;
		}
	}
	count++;
	cout << count << endl;
}
void rev2(string &str)
{
	int i, j, m, num, r, sum;
	m = str.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}
	num = 0;
	for (i = 0; i < m;)
	{
		r = 0;
		for (j = i; j < m; j++)
		{
			sum = r * 10 + pt[j];
			r = sum % 2;
			pt[j] = sum / 2;
		}
		if (r == 1)
		{
			num++;
		}
		while (pt[i] == 0)
		{
			i++;
		}
	}
	cout << num << endl;
}
int main()
{
	string str;
	while (cin >> str)
	{
		if (str[0] == '-')
		{
			str.erase(0, 1);
			rev1(str);
		}
		else
		{
			rev2(str);
		}
	}
	system("pause");
	return 0;
}