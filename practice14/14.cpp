//https://www.nowcoder.com/practice/27fbaa6c7b2e419bbf4de8ba60cf372b?tpId=40&tqId=21368&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct mouse
{
	int num;
	string color;
};
int main()
{
	int i, j, n, m;
	string temp;
	while (cin >> n)
	{
		mouse *pt = new mouse[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i].num >> pt[i].color;
		}
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (pt[i].num < pt[j].num)
				{
					m = pt[i].num, pt[i].num = pt[j].num, pt[j].num = m;
					temp = pt[i].color;
					pt[i].color = pt[j].color;
					pt[j].color = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			cout << pt[i].color << endl;
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}