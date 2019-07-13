//https://www.nowcoder.com/practice/743de16bf29041b7b423609628a1fa8c?tpId=98&&tqId=32984&rp=9&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int f1 = 0, f2 = 1, f, n, m1, sum, m2;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			f = 0;
			while (f < n)
			{
				sum = f;
				f = f1 + f2;
				f1 = f2;
				f2 = f;
			}
			m1 = -(sum - n);
			m2 = f - n;
			if (m1 < m2)
			{
				cout << m1 << endl;
			}
			else
			{
				cout << m2 << endl;
			}
		}
	}
	system("pause");
	return 0;
}