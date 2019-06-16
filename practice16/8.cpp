//https://www.nowcoder.com/practice/a5edebf0622045468436c74c3a34240f?tpId=40&tqId=21349&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	int i, j, m, n, sum, x, y;
	while (cin >> s1 >> s2)
	{
		m = s1.size();
		n = s2.size();
		sum = 0;
		for (i = 0; i < m; i++)
		{
			x = s1[i] - '0';
			for (j = 0; j < n; j++)
			{
				y = s2[j] - '0';
				sum = sum + x*y;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}