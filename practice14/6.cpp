//https://www.nowcoder.com/practice/fa2e02625a8541beb2309fcb7ab31e5b?tpId=37&tqId=21327&tPage=6&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int n, i, m, j, p;
	while (cin >>n)
	{
		string *pt = new string[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		for (i = 0; i < n; i++)
		{
			m = pt[i].length();
			for (j = 0; j < m; j++)
			{
				cout << pt[i][j];
				if (j % 8 == 7)
				{
					cout << endl;
				}
			}
			p = m % 8;
			if (p != 0)
			{
				for (j = p; j < 8; j++)
				{
					cout << 0;
				}
				cout << endl;
			}
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}