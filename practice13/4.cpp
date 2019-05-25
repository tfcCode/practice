//https://www.nowcoder.com/practice/69ef2267aafd4d52b250a272fd27052c?tpId=37&tqId=21281&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m, n, i;
	while (cin >> m >> n)
	{
		int *pt = new int[m];
		for (i = 0; i < m; i++)
		{
			cin >> pt[i];
		}
		sort(pt, pt + m);
		cout << pt[0];
		for (i = 1; i < n; i++)
		{
			cout << " " << pt[i];
		}
		delete[]pt;
		cout << endl;
	}
	system("pause");
	return 0;
}