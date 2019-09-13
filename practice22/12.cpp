
//https://www.nowcoder.com/practice/e3d8d4dd9ec740f9b1e7fc1e8574ba21?tpId=40&tqId=21414&tPage=5&rp=5&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int m, n, x, y, sum, k;
	while (cin >> m >> n)
	{
		x = 0, y = 0, sum = 0, k = 1;
		for (int i = 0;; i++)
		{
			if (x == m&&y == n)
			{
				cout << sum << endl;
				break;
			}
			sum++;

			if (k == 1)
			{
				x++, y++;
				k++;
				continue;
			}
			if (k == 2)
			{
				x++, y--;
				k++;
				continue;
			}
			if (k == 3)
			{
				x++, y++;
				k++;
				continue;
			}
			if (k==4)
			{
				x--, y++;
				k = 1;
				continue;
			}
		}
	}
	system("pause");
	return 0;
}