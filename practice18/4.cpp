//https://www.nowcoder.com/practice/003482c395bd41c68082f6adc545a600?tpId=98&tqId=32852&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
string rev(string &s)
{
	string str = "";
	int m, i;
	m = s.size();
	for (i = m - 1; i >= 0; i--)
	{
		str = str + s[i];
	}
	return str;
}
int main()
{
	string str, pt, pt1;
	int i, j, m, count;
	while (cin >> str)
	{
		count = 0;
		m = str.size();
		for (i = 0; i < m; i++)
		{
			pt = "";
			for (j = i ; j < m; j++)
			{
				pt = pt + str[j];
				pt1 = rev(pt);
				if (pt == pt1)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}