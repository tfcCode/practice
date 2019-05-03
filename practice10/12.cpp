#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i, m, count;
	while (cin >> m)
	{
		count = 0;
		i = 2;
		while (1)
		{
			if (m%i == 0)
			{
				m = m / i;
				count++;
				break;
			}
			i++;
		}
		i = 2;
		while (m != 1)
		{
			while (1)
			{
				if (m%i == 0)
				{
					m = m / i;
					count++;
					break;
				}
				i++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}