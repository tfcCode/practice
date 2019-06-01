//https://www.nowcoder.com/practice/caf35ae421194a1090c22fe223357dca?tpId=37&tqId=21330&tPage=6&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	double x, y, m;
	while (cin >> y)
	{
		x = 1.0;
		m = x*x*x - y;
		if (m < 0)
		{
			m = -m;
		}
		while (m > 1e-7)
		{
			x = (2 * x + y / x / x) / 3;
			m = x*x*x - y;
			if (m < 0)
			{
				m = -m;
			}
		}
		cout << fixed;
		cout.precision(1);
		cout << x << endl;
	}
	system("pause");
	return 0;
}