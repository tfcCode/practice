
//https://www.nowcoder.com/practice/3584a44114ea4805a9f6814e99285835?tpId=98&tqId=32886&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void translate(string& str)
{
	reverse(str.begin(), str.end());
	vector<int> pt;
	int m, x, sum;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i]<'0' || str[i]>'9')
		{
			continue;
		}
		sum = 0, x = 0;
		while (i < str.size() && str[i] >= '0'&&str[i] <= '9')
		{
			sum = sum + (str[i] - '0')*pow(10, x);
			x++, i++;
		}
		if (str[i] == '-')
		{
			sum = -sum;
		}
		pt.push_back(sum);
	}
	sort(pt.begin(), pt.end());
	int n = pt.size() / 2;
	int num = pt[0];
	x = 0;
	for (int i = 0; i < pt.size(); i++)
	{
		if (num == pt[i])
		{
			x++;
		}
		else
		{
			num = pt[i];
			x = 1;
		}
		if (x > n)
		{
			cout << pt[i] << endl;
			break;
		}
	}
}

int main()
{
	string str;
	while (cin >> str)
	{
		translate(str);
	}
	system("pause");
	return 0;
}
