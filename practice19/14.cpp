//https://www.nowcoder.com/practice/849b9e545f4742398d278f5dc4e003d2?tpId=98&&tqId=32989&rp=8&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, i, num;
	while (cin >> n)
	{
		int *pt = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i];
		}
		for (i = 0; i < n; i++)
		{
			num = count(pt, pt + n, pt[i]);
			if (num % 2 != 0)
			{
				cout << pt[i] << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}