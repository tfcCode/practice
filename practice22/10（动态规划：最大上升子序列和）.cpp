
//https://www.nowcoder.com/practice/dcb97b18715141599b64dbdb8cdea3bd?tpId=40&tqId=21409&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int *pt = new int[n];
		int *sum = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> pt[i];
			sum[i] = pt[i];
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (pt[j] < pt[i])
				{
					sum[i] = max(sum[j] + pt[i], sum[i]);
				}
			}
		}
		int Max = sum[0];
		for (int i = 1; i < n; i++)
		{
			Max = max(Max, sum[i]);
		}
		cout << Max << endl;
	}
	system("pause");
	return 0;
}