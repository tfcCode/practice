//https://www.nowcoder.com/practice/53447aa04f32460aa20ee11d02416e3b?tpId=40&tqId=21373&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, j, sum, r, x, m, num[1000];
	while (cin >> str)
	{
		m = str.size();
		int *pt = new int[m];
		for (i = 0; i < m; i++)
		{
			pt[i] = str[i] - '0';
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
			num[x] = r;
			x++;
			while (pt[i] == 0)
			{
				i++;
			}
		}
		for (i = x - 1; i >= 0; i--)
		{
			cout << num[i];
		}
		cout << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}