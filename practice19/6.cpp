//https://www.nowcoder.com/practice/e953b0dc87bb43f29cb042c7a9f31598?tpId=98&&tqId=33059&rp=1&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main()
{
	long long n, sum, time, t, all;
	while (cin >> time)
	{
		all = 3;
		sum = 3;
		while (all < time)
		{
			sum = sum * 2;
			n = all;
			all = all + sum;
		}
		t = sum - (time - n) + 1;
		cout << t << endl;
	}
	system("pause");
	return 0;
}