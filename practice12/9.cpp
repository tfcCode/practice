//https://www.nowcoder.com/practice/a30bbc1a0aca4c27b86dd88868de4a4a?tpId=37&tqId=21269&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, m, n;
	while (getline(cin, s))
	{
		cin >> n;
		m = s.length();
		for (i = 0; i <n; i++)
		{
			cout << s[i];
		}
		s.clear();
		cout << endl;
		cin.get();
	}
	system("pause");
	return 0;
}