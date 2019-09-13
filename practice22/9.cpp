//https://www.nowcoder.com/practice/deb19498bc644f53a6a99905ef5ee01d?tpId=40&tqId=21411&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void translation(string& str)
{
	str.erase(0, 2);
	int m, n, sum = 0, x;
	m = str.size();
	n = m - 1;
	for (int i = 0; i < m; i++, n--)
	{
		if (str[i] >= 'A'&&str[i] <= 'F')
		{
			x = str[i] - 'A' + 10;
		}
		else
		{
			x = str[i] - '0';
		}
		sum = sum + x*pow(16, n);
	}
	cout << sum << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		translation(str);
	}
	system("pause");
	return 0;
}