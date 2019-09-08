//https://www.nowcoder.com/practice/bfd8234bb5e84be0b493656e390bdebf?tpId=37&tqId=21284&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;

int Put_numbers(int m, int n)
{
	if (m <= 0)
	{
		return 0;
	}
	if (m == 1 || n == 1)
	{
		return 1;
	}
	if (m == n)
	{
		return Put_numbers(m, n - 1) + 1;
	}
	else
	{
		return Put_numbers(m, n - 1) + Put_numbers(m - n, n);
	}
}

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << Put_numbers(m, n) << endl;
	}
	system("pause");
	return 0;
}