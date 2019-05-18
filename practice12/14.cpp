//https://www.nowcoder.com/practice/c4f11ea2c886429faf91decfaf6a310b?tpId=37&tqId=21303&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	set<int> s1, s2, s;
	int m, n, i, temp;
	while (cin >> m)
	{
		for (i = 0; i < m; i++)
		{
			cin >> temp;
			s1.insert(temp);
		}
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> temp;
			s2.insert(temp);
		}
		set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<set<int>>(s, s.end()));
		set<int>::iterator pt;
		for (pt = s.begin(); pt != s.end(); pt++)
		{
			cout << *pt;
		}
		s1.clear();
		s2.clear();
		s.clear();
		cout << endl;
	}
	system("pause");
	return 0;
}