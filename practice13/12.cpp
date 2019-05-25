//https://www.nowcoder.com/practice/3350d379a5d44054b219de7af6708894?tpId=37&tqId=21317&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<string> pt, pt1;
	map<string, int> str;
	int  m, n, count, i, sum;
	string ch;
	while (cin >> m)
	{
		for (i = 0; i < m; i++)
		{
			cin >> ch;
			pt.push_back(ch);
		}
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> ch;
			pt1.push_back(ch);
		}
		vector<string>::iterator p, p1;
		for (p = pt.begin(); p != pt.end(); p++)
		{
			count = 0;
			for (p1 = pt1.begin(); p1 != pt1.end(); p1++)
			{
				if (*p == *p1)
				{
					count++;
				}
			}
			str[*p] = count;
		}
		for (p = pt.begin(); p != pt.end(); p++)
		{
			cout << *p << " : " << str[*p] << endl;
		}
		sum = 0;
		for (p = pt.begin(); p != pt.end(); p++)
		{
			sum = sum + str[*p];
		}
		cout << "Invalid : " << n - sum << endl;
		pt.clear();
		pt1.clear();
		str.clear();
	}
	system("pause");
	return 0;
}