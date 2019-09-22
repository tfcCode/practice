
//https://www.nowcoder.com/practice/2ae1e475df394b9bbb7c6e5bf40be9ec?tpId=98&tqId=32865&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int x0, x1, x;
	int n;
	while (cin >> n)
	{
		x = x0 = x1 = 1;
		for (int i = 2; i <= n; i++)
		{
			x = x0 + x1;
			x0 = x1;
			x1 = x;
		}
		cout << x << endl;
	}
	system("pause");
	return 0;
}