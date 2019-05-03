#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, j, count, m, n, k;
	while (cin >> n)
	{
		count = 0;
		for (i = 1; i <= n; i++)
		{
			m = i;
			while (m != 0)
			{
				k = m % 10;
				if (k == 1)
				{
					count++;
				}
				m = m / 10;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}