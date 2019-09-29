

//https://www.nowcoder.com/practice/673454422d1b4a168aed31e449d87c00?tpId=98&tqId=32887&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void third_large(string& str)
{
	int m;
	vector<int> pt;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i]>='0' && str[i]<='9')
		{
			if (str[i - 1] == '-')
			{
				m = -1 * (str[i] - '0');
				pt.push_back(m);
			}
			else
			{
				m = str[i] - '0';
				pt.push_back(m);
			}
		}
	}
	sort(pt.begin(), pt.end());
	int num = pt[0], x = 1;
	for (int i = 0; i < pt.size(); i++)
	{
		if (pt[i] > num)
		{
			num = pt[i];
			x++;
			if (x == 3)
			{
				cout << pt[i] << endl;
				break;
			}
		}
	}
}

int main()
{
	string str;
	while (cin >> str)
	{
		third_large(str);
	}
	system("pause");
	return 0;
}
