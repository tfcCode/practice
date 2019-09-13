
//https://www.nowcoder.com/practice/a4b46b53773e4a8db60b5f7629ce03e9?tpId=40&tqId=21393&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;

void calculation(double n, double k)
{
	double sum = n, m = 200;
	for (int i = 1;; i++)
	{
		if (sum >= m)
		{
			cout << i << endl;
			break;
		}
		if (i > 21)
		{
			cout << "Impossible" << endl;
			break;
		}
		sum = sum + n;
		m = m + m*k / 100;
	}
}

int main()
{
	double n, k;
	while (cin >> n >> k)
	{
		calculation(n, k);
	}
	system("pause");
	return 0;
}