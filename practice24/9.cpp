

//https://www.nowcoder.com/practice/c0e676f4cf9846c785ade34d9472951b?tpId=98&tqId=32866&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
	vector<int> pt1, pt2;
	int x, n;
	while (cin >> x)
	{
		if (cin.get() == '\n')
		{
			pt1.push_back(x);
			break;
		}
		pt1.push_back(x);
	}
	while (cin >> x)
	{
		if (cin.get() == '\n')
		{
			pt2.push_back(x);
			break;
		}
		pt2.push_back(x);
	}
	sort(pt1.begin(), pt1.end());
	sort(pt2.begin(), pt2.end());
	n = 0;
	int i, j;
	for (i = 0; i < pt2.size(); i++)
	{
		for (j = 0; j < pt1.size(); j++)
		{
			if (pt1[j] == 0)
			{
				continue;
			}
			if (pt2[i] < pt1[j])
			{
				break;
			}
		}
		if (j <= pt1.size())
		{
			while (j > 0 && pt1[j - 1] == 0)
			{
				j--;
			}
			if (j > 0)
			{
				pt1[j - 1] = 0;
				n++;
			}
		}
	}
	cout << n << endl;
	system("pause");
	return 0;
}