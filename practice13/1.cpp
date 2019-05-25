//https://www.nowcoder.com/practice/2f6f9339d151410583459847ecc98446?tpId=37&tqId=21261&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i;
	double length, n;
	while (cin >> n)
	{
		i = 1;
		length = 0;
		while (i <= 5)
		{
			length = length + n + n / 2;
			n = n / 2;
			i++;
		}
		length = length - n;
		cout << length << endl << n << endl;
	}
	system("pause");
	return 0;
}