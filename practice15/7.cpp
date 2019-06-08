//https://www.nowcoder.com/practice/e2422543519249f292d8435394ab82fe?tpId=3&tqId=10872&tPage=1&rp=&ru=/ta/hackathon&qru=/ta/hackathon/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	long long i, m, k, sum, l;
	while (cin >> str)
	{
		l = str.size();
		sum = 0;
		for (i = 0; i < l; i++)
		{
			sum = sum + str[i] - '0';
		}
		m = sum;
		sum = 0;
		while (m > 0)
		{
			k = m % 10;
			sum = sum + k;
			m = m / 10;
		}
		while (sum >= 10)
		{
			m = sum;
			sum = 0;
			while (m > 0)
			{
				k = m % 10;
				sum = sum + k;
				m = m / 10;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}