//https://www.nowcoder.com/practice/0337e32b1e5543a19fa380e36d9343d7?tpId=40&tqId=21361&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, j, m, r, remain, sum, p, pti, num[20000], x;
	while (cin >> str)
	{
		m = str.size();
		int *pt = new int[m];
		for (i = 0; i < m; i++)
		{
			pt[i] = str[i] - '0';
			pti = pt[i];
		}
		x = 0;
		for (i = 0; i < m;)
		{
			r = 0, remain = 0;
			for (j = i; j < m; j++)
			{
				pti = pt[j];
				sum = r * 10 + pt[j];
				r = sum % 2;
				pt[j] = sum / 2;
				remain = r;
			};
			num[x] = remain;
			x++;
			p = pt[i];
			while (pt[i] == 0)
			{
				p = pt[i];
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