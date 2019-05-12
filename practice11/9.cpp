//https://www.nowcoder.com/practice/fe298c55694f4ed39e256170ff2c205f?tpId=37&tqId=21245&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int m, k, count;
	while (cin >> m)
	{
		count = 0;
		k = m / 3;
		m = m % 3;
		count = count + k;
		while (m + k >= 3)
		{
			m = m + k;
			k = m / 3;
			count = count + k;
			m = m % 3;
		}
		if (m + k == 2)
		{
			cout << count + 1 << endl;
		}
		else
		{
			cout << count << endl;
		}
	}
	system("pause");
	return 0;
}