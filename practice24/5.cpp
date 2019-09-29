

//https://www.nowcoder.com/practice/325483e19dab4609baf00157e5ebeb6f?tpId=98&tqId=32913&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


int main()
{
	int n;
	vector<int> pt;
	while (cin >> n)
	{
		if (cin.get() == '\n')
		{
			pt.push_back(n);
			break;
		}
		pt.push_back(n);
	}
	int x = 0, temp;
	for (int i = 0; i < pt.size(); i++)
	{
		if (pt[i] % 2 == 0)
		{
			temp = pt[x], pt[x] = pt[i], pt[i] = temp;
			while (pt[x] % 2 == 0)
			{
				if (x == i)
				{
					i++;
				}
				x++;
			}
		}
	}
	copy(pt.begin(), pt.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}
