//https://www.nowcoder.com/practice/d69e75bb224e4a7785a02b2acc0821c4?tpId=40&tqId=21443&tPage=6&rp=6&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int x, y, a, b, c, d, i, m, n;
	vector<int> p;
	while (cin >> x >> y)
	{
		int *pt1 = new int[x];
		int *pt2 = new int[y];
		for (i = 0; i < x; i++)
		{
			cin >> pt1[i];
		}
		for (i = 0; i < y; i++)
		{
			cin >> pt2[i];
		}
		cin >> a >> b;
		cin >> c >> d;
		for (i = a - 1; i <= b - 1; i++)
		{
			p.push_back(pt1[i]);
		}
		for (i = c - 1; i <= d - 1; i++)
		{
			p.push_back(pt2[i]);
		}
		m = p.size();
		if (m % 2 == 0)
		{
			m = m / 2 - 1;
		}
		else
		{
			m = m / 2;
		}
		n = p[m];
		cout << n << endl;
		delete[]pt1;
		delete[]pt2;
		p.clear();
	}
	system("pause");
	return 0;
}