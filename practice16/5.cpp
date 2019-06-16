//https://www.nowcoder.com/questionTerminal/bc62febdd1034a73a62224affe8bddf2
#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int rev(string s);
string Itoa(int n);
int main()
{
	int m, n;
	string str, x, y;
	while (cin >> x >> y)
	{
		n = rev(x) + rev(y);
		str = Itoa(n);
		m = rev(str);
		cout << m << endl;
	}
	system("pause");
	return 0;
}
int rev(string s)
{
	int m, n, i, sum;
	m = s.size();
	sum = 0;
	n = m - 1;
	for (i = m - 1; i >= 0; i--)
	{
		sum = sum + (s[i] - '0')*pow(10, n);
		n--;
	}
	return sum;
}
string Itoa(int n)
{
	int i, j, m = 0, n1;
	n1 = n;
	while (n1 > 0)
	{
		n1 = n1 / 10;
		m++;
	}
	char *pt1 = new char[m + 1];
	char *pt = new char[m + 1];
	pt1[m] = '\0';
	pt[m] = '\0';
	i = 0;
	while (n > 0)
	{
		pt1[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	for (i = 0, j = m - 1; j >= 0; i++, j--)
	{
		pt[i] = pt1[j];
	}
	string p;
	p = pt;
	delete[]pt1;
	delete[]pt;
	return p;
}