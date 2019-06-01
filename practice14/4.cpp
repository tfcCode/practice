//https://www.nowcoder.com/practice/88ddd31618f04514ae3a689e83f3ab8e?tpId=37&tqId=21322&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m, sum, j, k, count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 0; i <= n; i++)
		{
			m = i*i;
			sum = 0;
			j = 0;
			while (m >= 0)
			{
				k = m % 10;
				sum = sum + k* pow(10, j);
				m = m / 10;
				j++;
				if (sum > i)
				{
					break;
				}
				if (sum == i)
				{
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}