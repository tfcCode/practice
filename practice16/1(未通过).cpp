//https://www.nowcoder.com/practice/5a93963ecd2444a29c3e078e0a0c8796?tpId=90&tqId=30915&tPage=7&rp=7&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, m, sum, temp, j;
	char ch;
	int a[10000];
	cin >> a[0];
	ch = '0';
	m = 1;
	while (ch != '\n')
	{
		cin >> a[m];
		m++;
		ch = cin.get();
	}
	temp = a[0];
	for (i = 0; i < m; i++)
	{
		sum = 0;
		for (j = i; j < m; j++)
		{
			sum = sum + a[j];
			if (sum > temp)
			{
				temp = sum;
			}
		}
	}
	cout << temp << endl;
	system("pause");
	return 0;
}
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char ch;
	vector<int> pt;
	int  m, sum, temp;
	cin >> m;
	pt.push_back(m);
	ch = '0';
	while (ch != '\n')
	{
		cin >> m;
		pt.push_back(m);
		ch = cin.get();
	}
	vector<int>::iterator p, p1, p2;
	temp = 0;
	for (p = pt.begin(); p != pt.end(); p++)
	{
		sum = 0;
		for (p1 = p; p1 != pt.end(); p1++)
		{
			sum = sum + *p1;
			if (sum > temp)
			{
				temp = sum;
			}
		}
	}
	cout << temp << endl;
	system("pause");
	return 0;
}*/