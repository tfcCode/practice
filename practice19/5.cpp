//https://www.nowcoder.com/practice/752409657fee4fddbac587fb30fd59b6?tpId=98&&tqId=32991&rp=8&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, a[10000], x = 0, num = 0;
	while (1)
	{
		cin >> a[x];
		x++;
		if (cin.get() == '\n')
		{
			break;
		}
	}
	for (i = 0; i < x - 1; i++)
	{
		if (a[i + 1] < a[i])
		{
			num++;
		}
	}
	if (num <= 1)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	system("pause");
	return 0;
}