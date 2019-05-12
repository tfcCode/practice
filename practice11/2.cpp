//https://www.nowcoder.com/practice/3245215fffb84b7b81285493eae92ff0?tpId=37&tqId=21226&tPage=1&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, *pt, i, sign;
	while (cin >> n)
	{
		pt = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		sort(pt, pt + n);
		sign = pt[0];
		for (i = 1; i < n; i++)
		{
			if (pt[i] == sign)
			{
				pt[i] = -1;
			}
			else
			{
				sign = pt[i];
			}
		}
		for (i = 0; i < n; i++)
		{
			if (pt[i] != -1)
			{
				cout << pt[i] << endl;
			}
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}