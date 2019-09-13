
//https://www.nowcoder.com/pat/6/problem/4043
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void division(string& str, int n)
{
	int i, m;
	m = str.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}
	int r = 0, sum = 0;
	for (i = 0; i < m; i++)
	{
		sum = r * 10 + pt[i];
		pt[i] = sum / n;
		r = sum % n;
	}
	int x = 0;
	while (pt[x] == 0)
	{
		x++;
	}
	for (i = x; i < m; i++)
	{
		cout << pt[i];
	}
	cout << " " << r << endl;
	delete[] pt;
}

int main()
{
	string str;
	int n;
	while (cin >> str >> n)
	{
		division(str, n);
	}
	system("pause");
	return 0;
}