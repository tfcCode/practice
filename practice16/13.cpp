//https://www.nowcoder.com/practice/6d27688e056c491b9024fa1340404666?tpId=90&tqId=30876&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int i, m;
	vector<char> pt1, pt2;
	while (cin >> str)
	{
		m = str.size();
		for (i = 0; i < m; i++)
		{
			if (str[i] >= '0'&&str[i] <= '9')
			{
				pt1.push_back(str[i]);
			}
			if (str[i] >= 'a'&&str[i] <= 'z')
			{
				pt2.push_back(str[i]);
			}
		}
		sort(pt1.begin(), pt1.end());
		sort(pt2.begin(), pt2.end());
		vector<char>::iterator pt;
		for (pt = pt2.begin(); pt != pt2.end(); pt++)
		{
			cout << *pt;
		}
		for (pt = pt1.begin(); pt != pt1.end(); pt++)
		{
			cout << *pt;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}