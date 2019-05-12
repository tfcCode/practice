//https://www.nowcoder.com/practice/05182d328eb848dda7fdd5e029a56da9?tpId=37&tqId=21246&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, m, min, j;
	while (cin >> s)
	{
		int a[26] = { 0 };
		m = s.length();
		for (i = 0; i < m; i++)
		{
			a[s[i] - 'a'] = a[s[i] - 'a'] + 1;
		}
		min = 100;
		for (i = 0; i < 26; i++)
		{
			if (a[i] != 0 && min >= a[i])
			{
				min = a[i];
			}
		}
		for (i = 0, j = 0; j < s.length();)
		{
			if (a[s[i] - 'a'] == min)
			{
				s.erase(i, 1);
				continue;
			}
			else
			{
				i++;
			}
			j++;
		}
		cout << s << endl;
	}
	system("pause");
	return 0;
}