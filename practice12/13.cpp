//https://www.nowcoder.com/practice/dbace3a5b3c4480e86ee3277f3fe1e85?tpId=37&tqId=21299&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int n, m, i, count;
	while (cin >> n)
	{
		m = 1;
		count = 0;
		for (i = 1; i <= n; i++)
		{
			m = m + (i - 1) * 2;
		}
		n = n*n*n;
		cout << m;
		count = count + m;
		m = m + 2;
		while (count != n)
		{
			count = count + m;
			cout << "+" << m;
			m = m + 2;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}