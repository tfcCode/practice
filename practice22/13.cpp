
//https://www.nowcoder.com/practice/f74c7506538b44399f2849eba2f050b5?tpId=40&tqId=21416&tPage=5&rp=5&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;

int number_node(int n, int sum)
{
	if (n > sum)
	{
		return 0;
	}
	return number_node(n * 2, sum) + number_node(n * 2 + 1, sum) + 1;
}

int main()
{
	int n, sum;
	while (cin >> n >> sum)
	{
		cout << number_node(n, sum) << endl;
	}
	system("pause");
	return 0;
}