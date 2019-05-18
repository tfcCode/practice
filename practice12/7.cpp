//https://www.nowcoder.com/practice/1221ec77125d4370833fd3ad5ba72395?tpId=37&tqId=21260&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int i, m, count = 0, f1, f2;
	while (cin >> m)
	{
		f1 = 1, f2 = 1;
		for (i = 2; i < m; i++)
		{
			count = f1 + f2;
			f1 = f2;
			f2 = count;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}