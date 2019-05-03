#include<iostream>
using namespace std;
int main()
{
	int a[100], i, m, n, j, temp;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == -1)
		{
			continue;
		}
		m = a[i];
		while (m != 1)
		{
			if (m % 2 == 0)
			{
				m = m / 2;
			}
			else
			{
				m = (m * 3 + 1) / 2;
			}
			for (j = 0; j < n; j++)
			{
				if (a[j] == -1)
				{
					continue;
				}
				if (a[j] == m)
				{
					a[j] = -1;
					break;
				}
			}
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i], a[i] = a[j], a[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == -1)
		{
			break;
		}
		if (i == 0)
		{
			cout << a[i];
		}
		else
		{
			cout << " " << a[i];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
