//https://www.nowcoder.com/practice/1f1db273eeb745c6ac83e91ff14d2ec9?tpId=40&tqId=21366&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int n, int m);
int main()
{
	int n, i, j, count;
	while (cin >> n)
	{
		count = 0;
		int *pt = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		sort(pt, pt + n);
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (gcd(pt[i], pt[j]) == 1)
				{
					count++;
				}
			}
		}
		cout << count << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}
int gcd(int n, int m)
{
	int r;
	r = m%n;
	while (r > 0)
	{
		m = n;
		n = r;
		r = m%n;
	}
	return n;
}