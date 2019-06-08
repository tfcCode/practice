//https://www.nowcoder.com/practice/955d15cbeaed4bcd9f197ca4b9020907?tpId=90&tqId=30801&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x1, x2, str1, str2;
	int k1, k2, i, m, n;
	while (cin >> x1 >> k1 >> x2 >> k2)
	{
		str1 = x1, str2 = x2;
		for (i = 0; i < k1 - 1; i++)
		{
			x1.insert(x1.begin(), str1.begin(), str1.end());
		}
		for (i = 0; i < k2 - 1; i++)
		{
			x2.insert(x2.begin(), str2.begin(), str2.end());
		}
		m = x1.size();
		n = x2.size();
		if (x1 == x2)
		{
			cout << "Equal" << endl;
		}
		if (m > n)
		{
			cout << "Greater" << endl;
		}
		if (m < n)
		{
			cout << "Less" << endl;
		}
		if (m == n)
		{
			if (x1 > x2)
			{
				cout << "Greater" << endl;
			}
			if (x1 < x2)
			{
				cout << "Less" << endl;
			}
		}
	}
	system("pause");
	return 0;
}