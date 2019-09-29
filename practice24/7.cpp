

//https://www.nowcoder.com/practice/4f31423f126749ab9196c97c5117bcb9?tpId=98&tqId=32946&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		vector<string> pt;
		sort(str.begin(), str.end());
		pt.push_back(str);
		while (next_permutation(str.begin(), str.end()))
		{
			pt.push_back(str);
		}
		cout << '[';
		for (int i = 0; i < pt.size() - 1; i++)
		{
			cout << pt[i] << ", ";
		}
		cout << pt[pt.size() - 1] << "]" << endl;
		pt.erase(pt.begin(), pt.end());
	}
	system("pause");
	return 0;
}
