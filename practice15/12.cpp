//https://www.nowcoder.com/practice/9240357eefcf4d938b90bdd5eec3712b?tpId=90&tqId=30795&tPage=1&rp=1&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int i, j, m, n, count, k, sum;
	char ch;
	while (cin >> str >> k)
	{
		int a[26] = { 0 };
		m = str.size();
		for (i = 0; i < m; i++)
		{
			if (str[i] == '0')
			{
				continue;
			}
			ch = str[i];
			count = 0;
			for (j = i; j < m; j++)
			{
				if (str[j] == '0')
				{
					continue;
				}
				if (str[j] == ch)
				{
					count++;
					str[j] = '0';
				}
			}
			n = ch - 'a';
			a[n] = count;
		}
		sort(a, a + 26);
		while (k > 0)    //不断将最大数减去一
		{
			a[25] = a[25] - 1;
			k = k - 1;
			sort(a, a + 26);
		}
		sum = 0;
		for (i = 0; i < 26; i++)
		{
			if (a[i] != 0)
			{
				sum = sum + a[i] * a[i];
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}