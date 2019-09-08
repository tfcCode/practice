//https://www.nowcoder.com/practice/72015680c32b449899e81f1470836097?tpId=40&tqId=21379&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;

int main()
{
	int num[21];
	num[1] = 1, num[2] = 2;
	for (int i = 3; i < 21; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
	int n;
	while (cin >> n)
	{
		cout << num[n] << endl;
	}
	system("pause");
	return 0;
}