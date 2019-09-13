
//https://www.nowcoder.com/practice/e8cee01f2d834fa9ba3479fafe492b65?tpId=40&tqId=21415&tPage=5&rp=5&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n, temp;
	while (cin >> n)
	{
		temp = n;
		int sum = 0;
		for (int i = 1; i <= 5; i++)
		{
			cin >> n;
			if (n < temp)
			{
				sum = sum + n;
			}
		}
		cout << sum << endl;
	}
	system("pause");
	return 0;
}