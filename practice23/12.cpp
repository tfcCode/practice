
//https://www.nowcoder.com/practice/56f412b9e17e4504b1bbeca96f94a263?tpId=98&tqId=32876&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	long long  x, y;
	while (cin >> x >> y)
	{
		long long m = x + y;
		long long n = y;
		long long sum1 = m, sum2 = n;
		if (y == 1)
		{
			cout << m << endl;
		}
		else
		{
			m--, n--;
			for (; y > 1; y--)
			{
				sum1 = sum1*m;
				sum2 = sum2*n;
				m--, n--;
			}
			cout << sum1 / sum2 << endl;
		}
	}
	system("pause");
	return 0;
}