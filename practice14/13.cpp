//https://www.nowcoder.com/practice/2364ff2463984f09904170cf6f67f69a?tpId=40&tqId=21367&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, i, sum;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		int *pt = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		sort(pt, pt + n);
		if (n % 2 == 0)
		{
			sum = (pt[n / 2 - 1] + pt[n / 2]) / 2;
		}
		if (n % 2 != 0)
		{
			sum = pt[n / 2];
		}
		cout << sum << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}