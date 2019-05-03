#include<iostream>
using namespace std;
int main()
{
	int a[3], i, j, m;
	char ch1 = 'B', ch2 = 'S';
	while (cin >> m)
	{
		i = 0;
		while (m != 0)
		{
			a[i] = m % 10;
			m = m / 10;
			i++;
		}
		if (i == 1)
		{
			for (j = 1; j <= a[0]; j++)
			{
				cout << j;
			}
			cout << endl;
			continue;
		}
		if (i == 2)
		{
			for (j = 0; j < a[1]; j++)
			{
				cout << ch2;
			}
			for (j = 1; j <= a[0]; j++)
			{
				cout << j;
			}
			cout << endl;
			continue;
		}
		if (i == 3)
		{
			for (j = 0; j < a[2]; j++)
			{
				cout << ch1;
			}
			for (j = 0; j < a[1]; j++)
			{
				cout << ch2;
			}
			for (j = 1; j <= a[0]; j++)
			{
				cout << j;
			}
			cout << endl;
			continue;
		}
	}
	system("pause");
	return 0;
}
