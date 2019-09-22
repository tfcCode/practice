
//https://www.nowcoder.com/practice/503da02a9f474ad5bb0dcd012dd9ab25?tpId=98&tqId=32867&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;

int main()
{
	int n, sum;
	while (cin >> n)
	{
		sum = n*(n - 1) / 2 + n + 1;
		cout << sum << endl;
	}
	system("pause");
	return 0;
}