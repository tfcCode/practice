//https://www.nowcoder.com/practice/d9f5dbd3b57d450e8406e102573d4bdd?tpId=90&tqId=30800&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[3];
	int  sum;
	while (cin >> a[0] >> a[1] >> a[2])
	{
		sort(a, a + 3);
		if ((a[0] + a[1] > a[2]) && (a[2] - a[1] < a[0]))
		{
			sum = a[0] + a[1] + a[2];
			cout << sum << endl;
		}
		else
		{
			while ((a[0] + a[1] <= a[2]) || (a[2] - a[1] >= a[0]))
			{
				a[2]--;
			}
			sum = a[0] + a[1] + a[2];
			cout << sum << endl;
		}
	}
	system("pause");
	return 0;
}