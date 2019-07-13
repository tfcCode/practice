//https://www.nowcoder.com/practice/bac5a2372e204b2ab04cc437db76dc4f?tpId=98&tqId=32828&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int y, n, k, m, p;
	long long count;
	while (cin >> n >> k)
	{
		count = 0;
		for (y = k + 1; y <= n; y++)
		{
			m = n / y;
			p = n%y;
			count = count + m*(y - k);
			if (p >= k)
			{
				if (k > 0)
				{
					count = count + p - k + 1;
				}
				else
				{
					count = count + p;
				}
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}