//https://www.nowcoder.com/practice/ba241b85371c409ea01ac0aa1a8d957b?tpId=37&tqId=21278&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int m, i, count, n, k;
	while (cin >> m)
	{
		count = 0;
		for (i = 1; i <= m; i++)
		{
			k = i;
			if (i % 7 == 0)
			{
				count++;
				continue;
			}
			while (k > 0)
			{
				n = k % 10;
				if (n == 7)
				{
					count++;
					break;
				}
				k = k / 10;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}