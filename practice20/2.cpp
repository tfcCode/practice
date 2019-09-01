//https://www.nowcoder.com/practice/42852fd7045c442192fa89404ab42e92?tpId=98&&tqId=33006&rp=7&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, j, n, k;
	while (cin >> n)
	{
		string *pt = new string[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < pt[i].size(); j++)
			{
				k = j;
				while (pt[i][j] == pt[i][j + 1] && pt[i][j + 1] == pt[i][j + 2])
				{
					pt[i].erase(j, 1);
				}
				while (k <= pt[i].size() - 4 && pt[i][j] == pt[i][j + 1] && pt[i][j + 2] == pt[i][j + 3])
				{
					pt[i].erase(j + 2, 1);
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << pt[i] << endl;
		}
	}
	system("pause");
	return 0;
}