//https://www.nowcoder.com/practice/2aa32b378a024755a3f251e75cbf233a?tpId=37&tqId=21252&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
void result1(string &s);
void result2(string &s);
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		result1(s1);
		result2(s2);
	}
}
void result1(string &s)
{
	int i, m;
	m = s.length();
	for (i = 0; i < m; i++)
	{
		if (s[i] == 'Z')
		{
			s[i] = 'a';
			continue;
		}
		if (s[i] == 'z')
		{
			s[i] = 'A';
			continue;
		}
		if (s[i] == '9')
		{
			s[i] = '0';
			continue;
		}
		if (s[i] >= 'A'&&s[i] <= 'Y')
		{
			s[i] = s[i] + 33;
			continue;
		}
		if (s[i] >= 'a'&&s[i] <= 'y')
		{
			s[i] = s[i] - 31;
			continue;
		}
		if (s[i] >= '0'&&s[i] <= '8')
		{
			s[i] = s[i] + 1;
			continue;
		}
	}
	cout << s << endl;
}
void result2(string &s)
{
	int i, m;
	m = s.length();
	for (i = 0; i < m; i++)
	{
		if (s[i] == 'a')
		{
			s[i] = 'Z';
			continue;
		}
		if (s[i] == 'A')
		{
			s[i] = 'z';
			continue;
		}
		if (s[i] == '0')
		{
			s[i] = '9';
			continue;
		}
		if (s[i] >= 'B'&&s[i] <= 'Z')
		{
			s[i] = s[i] + 31;
			continue;
		}
		if (s[i] >= 'b'&&s[i] <= 'z')
		{
			s[i] = s[i] - 33;
			continue;
		}
		if (s[i] >= '1'&&s[i] <= '9')
		{
			s[i] = s[i] - 1;
			continue;
		}
	}
	cout << s << endl;
}