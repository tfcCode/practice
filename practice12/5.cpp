#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, m, n, a[100], count;
	while (cin >> m)
	{
		n = 0;
		count = 0;
		while (m > 0)
		{
			a[n] = m % 2;
			m = m / 2;
			n++;
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] == 1)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}
