//https://www.nowcoder.com/practice/43d22dbc8bef46529e722dc6a5fb1e2d?tpId=98&&tqId=32986&rp=9&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
void rev(string &str)
{
	int i, j, r, num, m, sum;
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
		rev(str);
	}
	system("pause");
	return 0;
}