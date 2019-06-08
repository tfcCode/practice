//https://www.nowcoder.com/practice/bbbbf26601b6402c9abfa88de5833163?tpId=40&tqId=21398&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	vector<int> A;
	vector<int> B;
	int m, i;
	while (cin >> m)
	{
		if (m % 2 == 0)
		{
			A.push_back(m);
		}
		else
		{
			B.push_back(m);
		}
		for (i = 0; i < 9; i++)
		{
			cin >> m;
			if (m % 2 == 0)
			{
				A.push_back(m);
			}
			else
			{
				B.push_back(m);
			}
		}
		vector<int>::iterator pt;
		sort(B.begin(), B.end(),greater<int>());
		for (pt = B.begin(); pt != B.end(); pt++)
		{
			cout << *pt << " ";
		}
		sort(A.begin(), A.end());
		for (pt =A.begin(); pt != A.end(); pt++)
		{
			cout << *pt << " ";
		}
		cout << endl;
		A.clear();
		B.clear();
	}
	system("pause");
	return 0;
}