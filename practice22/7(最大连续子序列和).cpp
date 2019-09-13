//https://www.nowcoder.com/practice/df219d60a7af4171a981ef56bd597f7b?tpId=40&tqId=21353&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		int Max = -99999999, sum = 0;
		int *pt = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> pt[i];
			sum = max(sum + pt[i], pt[i]);
			Max = max(sum, Max);
		}
		cout << Max << endl;
	}
	system("pause");
	return 0;
}