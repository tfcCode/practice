
//https://www.nowcoder.com/practice/24ec35c2a8054a7b831a5a3ea660d729?tpId=98&tqId=32875&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;


int main() 
{
	int i, sum, t, sign;
	while (cin >> t)
	{
		sign = 0;
		sum = 0, i = 1;
		while (1)
		{
			sum = sum + i;
			if (sum >= t && (sum - t) % 2 == 0)
			{
				cout << i << endl;
				break;
			}
			i++;
		}
	}
	system("pause");
	return 0;
}