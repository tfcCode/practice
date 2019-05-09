//https://www.nowcoder.com/practice/196534628ca6490ebce2e336b47b3607?tpId=37&tqId=21229&tPage=1&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int m, i;
	while (cin >> m)
	{
		i = 2;
		while (m%i != 0)
		{
			i++;
		}
		cout << i;
		m = m / i;
		i = 2;
		while (m != 1)
		{
			if (m%i == 0)
			{
				cout << " " << i;
				m = m / i;
				i = 2;
				continue;
			}
			i++;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}