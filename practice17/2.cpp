//https://www.nowcoder.com/practice/f89f96ea3145418b8e6c3eb75773f65a?tpId=40&tqId=21446&tPage=6&rp=6&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s, temp;
	vector<string> str;
	int i, j, n, m;
	while (cin >> s)
	{
		m = s.size();
		n = m;
		str.push_back(s);
		for (i = 0; i < m - 1; i++)
		{
			s.erase(s.begin(), s.begin() + 1);
			temp = s;
			str.push_back(s);
		}
		m = str.size();
		for (i = 0; i < m - 1; i++)
		{
			for (j = i + 1; j < m; j++)
			{
				if (str[i]>str[j])
				{
					temp = str[i], str[i] = str[j], str[j] = temp;
				}
			}
		}
		vector<string>::iterator pt;
		for (pt = str.begin(); pt != str.end(); pt++)
		{
			cout << *pt << endl;
		}
		str.clear();
	}
	system("pause");
	return 0;
}