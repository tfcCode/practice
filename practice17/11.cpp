//https://www.nowcoder.com/practice/cff52ae345a248ea94c8c0cc2d278474?tpId=90&tqId=30916&tPage=8&rp=8&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 10010;
int main()
{
	int n;
	while (cin >> n)
	{
		int res[maxn] = { 0 };
		res[0] = 1;
		int index2 = 0, index3 = 0, index5 = 0;
		int i = 0;
		while (i<n)
		{
			i += 1;

			res[i] = min(res[index2] * 2, min(res[index3] * 3, res[index5] * 5));
			if (res[i] == res[index2] * 2)
			{
				index2++;
			}
			if (res[i] == res[index3] * 3)
			{
				index3++;
			}
			if (res[i] == res[index5] * 5)
			{
				index5++;
			}
		}
		cout << res[n - 1] << endl;
	}
}