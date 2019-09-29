
//https://www.nowcoder.com/practice/c3b49a12eb344ca3939f6a6232347397?tpId=98&tqId=32914&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> pt;
	int n = 0, x;
	int num1, num2;
	while (scanf("%d", &x) == 1)
	{
		pt.push_back(x);
		n++;
	}
	sort(pt.begin(), pt.end());
	num1 = num2 = 0;
	int num = pt[0];
	x = 0;
	for (int i = 0; i < pt.size(); i++)
	{
		if (pt[i] == num)
		{
			x++;
		}
		else
		{
			num = pt[i];
			if (x == 1 && num1 == 0)
			{
				num1 = pt[i - 1];
			}
			else if (x == 1 && num2 == 0)
			{
				num2 = pt[i - 1];
			}
			if (num2 != 0)
			{
				break;
			}
			x = 1;
		}
	}
	if (num2 == 0 && x == 1)
	{
		num2 = pt[pt.size() - 1];
	}
	cout << min(num1, num2) << " " << max(num1, num2) << endl;
	system("pause");
	return 0;
}
