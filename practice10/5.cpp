#include<iostream>
using namespace std;
int main()
{
	int n, m, a[100], i, j;
	while (cin >> n >> m)
	{
		if (m > n)
		{
			m = m%n;
		}
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = n - m; i < n; i++)
		{
			cout << a[i] << " ";
		}
		for (i = 0; i < n - m - 1; i++)
		{
			cout << a[i] << " ";
		}
		cout << a[n - m - 1] << endl;
	}
	system("pause");
	return 0;
}
