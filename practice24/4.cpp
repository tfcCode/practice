

//https://www.nowcoder.com/practice/7dd312bb4e7c4546a9aa8a001c2b11f5?tpId=98&tqId=32915&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	vector<int> pt;
	while (cin >> n)
	{
		if (cin.get() == '\n')
		{
			break;
		}
		pt.push_back(n);
	}
	sort(pt.begin(), pt.end());
	cout << pt[0] << endl;
	system("pause");
	return 0;
}
