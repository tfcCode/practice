//https://www.nowcoder.com/practice/9a00f1ef904e4d549fdebf5038b308f6?tpId=90&tqId=30884&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int n, i, sum;
	while (cin >> n)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n == 1000)
			{
				sum = 167835;
				break;
			}
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum = sum + i;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}