#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, m, n, a[10000], p;
	char ch = 'a';
	p = 0;
	while (ch != '\n')
	{
		cin >> m >> n;
		ch = cin.get();
		if (p == 0 && (m == 0 || n == 0 || (m == 0 && n == 0)))
		{
			a[p] = 0;
			a[p + 1] = 0;
			p = p + 2;
			continue;
		}
		if (m == 0 || n == 0 || (m == 0 && n == 0))
		{
			continue;
		}
		a[p] = m*n;
		a[p + 1] = n - 1;
		p = p + 2;
	}
	for (i = 0; i < p - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[p - 1] << endl;
	system("pause");
	return 0;
}
