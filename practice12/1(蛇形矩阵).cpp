//https://www.nowcoder.com/practice/649b210ef44446e3b1cd1be6fa4cab5e?tpId=37&tqId=21258&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int n, i, j, count, k;
	while (cin >> n)
	{
		count = 1;
		for (i = 0; i < n; i++)
		{
			count = count + i;
			k = count;
			for (j = 0; j < n - i; j++)
			{
				cout << k << " ";
				k = k + j + 2 + i;
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}