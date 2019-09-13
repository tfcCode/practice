#include<iostream>
#include<string>
using namespace std;

void number_1(string& str)
{
	int m;
	m = str.size();
	int *pt = new int[m];
	for (int i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}

	int length = 0, temp = 0;
	for (int i = 0; i < m;)
	{
		int r = 0, sum = 0;
		for (int j = i; j < m; j++)
		{
			sum = r * 10 + pt[j];
			pt[j] = sum / 2;
			r = sum % 2;
		}
		if (r == 1)
		{
			temp++;
		}
		else
		{
			if (temp > length)
			{
				length = temp;
			}
			temp = 0;
		}
		while (pt[i] == 0)
		{
			i++;
		}
		if (temp > length)
		{
			length = temp;
		}
	}
	cout << length << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		number_1(str);
	}
}