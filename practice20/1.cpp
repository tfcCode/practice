//https://www.nowcoder.com/practice/944e5ca0ea88471fbfa73061ebe95728?tpId=98&&tqId=33011&rp=6&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	int n, num, m, i;
	while (cin >> n)
	{
		num = 0;
		m = 1024 - n;
		for (i = 64; i >= 1; i = i / 4)
		{
			num = num + m / i;
			m = m%i;
		}
		cout << num << endl;
	}
	system("pause");
	return 0;
}