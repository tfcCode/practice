//https://www.nowcoder.com/practice/51dcb4eef6004f6f8f44d927463ad5e8?tpId=98&tqId=32825&tPage=1&rp=1&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> change(int n)
{
	vector<int> temp;
	for (int i = 1; i <= n; i++)
	{
		temp.push_back(i);
	}
	return temp;
}
int main()
{
	string str;
	int i, j, m, r, sum, count, x, y;
	vector<int> temp, pt;
	while (cin >> x >> y)
	{
		count = 0;
		temp = change(x - 1);
		for (i = x; i <= y; i++)
		{
			pt.clear();
			temp.push_back(i);
			pt = temp;
			m = pt.size();
			r = 0;
			for (j = 0; j < m; j++)
			{
				sum = r * 10 + pt[j];
				r = sum % 3;
			}
			if (r == 0)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}