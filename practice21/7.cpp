//https://www.nowcoder.com/practice/5b80ab166efa4551844657603227caeb?tpId=40&tqId=21378&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;

int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		while (x != y)
		{
			if (x < y)
			{
				y = y / 2;
			}
			else
			{
				x = x / 2;
			}
		}
		cout << x << endl;
	}
	system("pause");
	return 0;
}