//https://www.nowcoder.com/practice/361ff5dd893c4e11856735e52007fca7?tpId=98&&tqId=33060&rp=1&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
long find(long pt[],long n,long k)
{
	long x = pt[0], p = 0;
	for (int i = 0; i < n; i++)
	{
		if (x < pt[i])
		{
			x = pt[i];
			p = i;
		}
	}
	pt[p] = 0;
	pt[k - p] = 0;
	return x;
}
int main()
{
	long long n, k, i, m, p, length, x;
	while (cin >> n >> k)
	{
		length = 0;
		long *pt = new long[k + 1]();
		for (i = 0; i < n; i++)
		{
			cin >> p;
			m = p%k;
			pt[m]++;
		}
		if (pt[0] != 0)
		{
			length = 1;
			pt[0] = 0;
		}
		if (k % 2 == 0 && pt[k / 2] != 0)
		{
			length = length + 1;
			pt[k / 2] = 0;
		}
		for (i = 0; i <= k / 2; i++)
		{
			x = find(pt, k + 1, k);
			if (x == 0)
			{
				break;
			}
			length = length + x;
		}
		cout << length << endl;
	}
	system("pause");
	return 0;
}