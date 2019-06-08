//https://www.nowcoder.com/practice/d0e751eac618463bb6ac447369e4aa25?tpId=40&tqId=21352&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int a, b, p, q, k;
	int i, m;
	while (cin >> a >> b >> p >> q >> k)
	{
		for (i = 2; i <= k; i++)
		{
			m = p*b + q*a;
			a = b % 10000;
			b = m % 10000;
		}
		m = m % 10000;
		cout << m << endl;
	}
	system("pause");
	return 0;
}