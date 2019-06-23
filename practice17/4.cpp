//https://www.nowcoder.com/practice/afe7c043f0644f60af98a0fba61af8e7?tpId=40&tqId=21472&tPage=7&rp=7&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, j, temp, sum, x, y;
	while (cin >> n)
	{
		int *pt = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		temp = pt[0], x = pt[0], y = pt[0];
		for (i = 0; i < n - 1; i++)
		{
			sum = 0;
			for (j = i ; j < n; j++)
			{
				sum = sum + pt[j];
				if (sum > temp)
				{
					temp = sum;
					x = pt[i];
					y = pt[j];
				}
			}
		}
		cout << temp << " " << x << " " << y << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}