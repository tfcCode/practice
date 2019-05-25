//https://www.nowcoder.com/practice/e4af1fe682b54459b2a211df91a91cf3?tpId=37&tqId=21259&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<char>a;
	int i, m, n;
	char ch;
	string str;
	vector<char>::iterator pt;
	while (cin >> ch)
	{
		ch = toupper(ch);
		pt = find(a.begin(), a.end(), ch);
		if (pt == a.end())
		{
			a.push_back(ch);
		}
		while (cin.get(ch))
		{
			if (ch == '\n')
			{
				break;
			}
			ch = toupper(ch);
			pt = find(a.begin(), a.end(), ch);
			if (pt == a.end())
			{
				a.push_back(ch);
			}
		}
		ch = 'A';
		for (i = 0; i < 26; i++)
		{
			pt = find(a.begin(), a.end(), ch);
			if (pt == a.end())
			{
				a.push_back(ch);
			}
			ch++;
		}
		cin >> str;
		m = str.length();
		for (i = 0; i < m; i++)
		{
			if (str[i] >= 'A'&&str[i] <= 'Z')
			{
				n = str[i] - 'A';
				str[i] = a[n];
			}
			if (str[i] >= 'a'&&str[i] <= 'z')
			{
				n = str[i] - 'a';
				str[i] = a[n] + 32;
			}
		}
		cout << str << endl;
		a.clear();
	}
	system("pause");
	return 0;
}