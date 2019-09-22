

//https://www.nowcoder.com/practice/8705437354604a7cb9ba7bf959e42de6?tpId=98&tqId=32855&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, Max = -999999, sum = 0;
	while (cin >> n)
	{
		if (cin.get() == '\n')
		{
			sum = max(sum + n, n);
			Max = max(sum, Max);
			break;
		}
		sum = max(sum + n, n);
		Max = max(sum, Max);
	}
	if (Max > 0)
	{
		cout << Max << endl;
	}
	else
	{
		cout << 0 << endl;
	}

	system("pause");
	return 0;
}