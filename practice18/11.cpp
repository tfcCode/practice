//https://www.nowcoder.com/practice/f6bca30942874d01863ccfd44ae260f0?tpId=98&tqId=32901&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
void div(string &num1, int &num2)
{
	int i, j, m, num[10000], x, r, sum;
	m = num1.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = num1[i] - '0';
	}
	x = 0;
	for (i = 0; i < m;)
	{
		r = 0;
		for (j = i; j < m; j++)
		{
			sum = r * 10 + pt[j];
			r = sum%num2;
			pt[j] = sum / num2;
		}
		num[x] = r;
		x++;
		while (pt[i] == 0)
		{
			i++;
		}
	}
	for (i = x - 1; i >= 0; i--)
	{
		cout << num[i];
	}
	cout << endl;
	delete[]pt;
}
int main()
{
	string num1;
	int num2;
	while (cin >> num1 >> num2)
	{
		div(num1, num2);
	}
	system("pause");
	return 0;
}