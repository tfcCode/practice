//https://www.nowcoder.com/practice/c1f9561de1e240099bdb904765da9ad0?tpId=37&tqId=21325&tPage=6&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int> pt;
	vector<char> p;
	string str, s;
	int i, j, m, count, temp;
	char ch;
	while (getline(cin, str))
	{
		s = str;
		m = str.length();
		for (i = 0; i < m; i++)
		{
			if (s[i] == '*')
			{
				continue;
			}
			count = 0;
			for (j = i + 1; j < m; j++)
			{
				if (s[j] == '*')
				{
					continue;
				}
				if (s[i] == s[j])
				{
					count++;
					s[j] = '*';
				}
			}
			count += 1;
			pt.push_back(count);
			p.push_back(s[i]);
		}
		vector<int>::iterator pt1, pt2;
		vector<char>::iterator p1, p2;
		for (pt1 = pt.begin(), p1 = p.begin(); pt1 != pt.end() - 1; pt1++, p1++)
		{
			for (pt2 = pt1 + 1, p2 = p1 + 1; pt2 != pt.end(); pt2++, p2++)
			{
				if (*pt1 < *pt2)
				{
					temp = *pt1, *pt1 = *pt2, *pt2 = temp;
					ch = *p1, *p1 = *p2, *p2 = ch;
				}
				if (*pt1 == *pt2)
				{
					if (*p1 > *p2)
					{
						ch = *p1, *p1 = *p2, *p2 = ch;
					}
				}
			}
		}
		for (p1 = p.begin(); p1 != p.end(); p1++)
		{
			cout << *p1;
		}
		cout << endl;
		pt.clear();
		p.clear();
	}
	system("pause");
	return 0;
}