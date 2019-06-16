//https://www.nowcoder.com/practice/f792cb014ed0474fb8f53389e7d9c07f?tpId=37&tqId=21323&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int a1 = 2, sum, n, i, a;
	while (cin >> n)
	{
		a = a1, sum = 0;
		if (n <= 0)
		{
			cout << "-1" << endl;
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				sum = sum + a;
				a = a + 3;
			}
			cout << sum << endl;
		}
	}
	system("pause");
	return 0;
}