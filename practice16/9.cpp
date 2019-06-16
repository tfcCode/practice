//https://www.nowcoder.com/practice/3d6cee12fbf54ea99bb165cbaba5823d?tpId=40&tqId=21370&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, j, m, num[10], r, sum, k, sign, x;
	while (cin >> str)
	{
		m = str.size();
		int *pt = new int[m];
		for (i = 0; i < m; i++)
		{
			pt[i] = str[i] - '0';
		}
		sign = 0, x = 0;
		for (k = 2; k <= 9; k++)
		{
			sum = 0, r = 0;
			for (j = 0; j < m; j++)
			{
				sum = r * 10 + pt[j];
				r = sum%k;
			}
			if (r == 0)
			{
				sign = 1;
				num[x] = k;
				x++;
			}
		}
		if (sign == 0)
		{
			cout << "none" << endl;
		}
		else
		{
			for (i = 0; i < x; i++)
			{
				cout << num[i] << " ";
			}
			cout << endl;
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}