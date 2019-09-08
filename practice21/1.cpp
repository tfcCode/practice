//https://www.nowcoder.com/practice/776d401bf86d446fa783f0bef7d3c096?tpId=40&tqId=21381&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;

bool test(int n)
{
	while (n > 0)
	{
		if (n % 7 == 0)
		{
			break;
		}
		if (n % 10 == 7)
		{
			break;
		}
		n = n / 10;
	}
	if (n == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n, i, sum;
	while (cin >> n)
	{
		sum = 0;
		for (i = 1; i <= n; i++)
		{
			if (test(i))
			{
				sum = sum + i*i;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}