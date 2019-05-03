#include<iostream>
using namespace std;
int main()
{
	int i, j, m, n, a[1000], b[100] = { 0 };
	while (cin >> n)
	{
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			for (j = 1; j <= a[i]; j++)
			{
				if (a[i] % j == 0)
				{
					b[i]++;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << b[i] << endl;
		}
	}
	system("pause");
	return 0;
}