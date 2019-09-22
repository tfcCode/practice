
//https://www.nowcoder.com/practice/37aa8a88a72e47f798a14d63bee61d8f?tpId=98&tqId=32851&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 1 || n == 2 || n == 4)  //1 2 4装不满
		{
			cout << "-1" << endl;
		}
		else
		{
			int count = 0;
			count += n / 7; //对7取余，对余数进行讨论即可
			n = n % 7;
			if (n == 3 || n == 5 || n == 1)
			{
				count += 1;
			}
			if (n == 2 || n == 4 || n == 6)
			{
				count += 2;
			}
			cout << count << endl;
		}
	}

	system("pause");
	return 0;
}
