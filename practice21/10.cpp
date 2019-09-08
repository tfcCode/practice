
//https://www.nowcoder.com/practice/fbc417f314f745b1978fc751a54ac8cb?tpId=37&tqId=21290&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<vector>
using namespace std;

bool Put_24(vector<double> a, int temp, double result)
{
	if (a.empty())
	{
		return result == temp;
	}
	for (int i = 0; i < a.size(); i++)
	{
		vector<double> b(a);
		b.erase(b.begin() + i);
		if (Put_24(b, temp, result + a[i])
			|| Put_24(b, temp, result - a[i])
			|| Put_24(b, temp, result * a[i])
			|| Put_24(b, temp, result / a[i]))
			return true;
	}
	return false;
}

int main()
{
	vector<double> a(4, 0);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		if (Put_24(a, 24, 0))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	system("pause");
	return 0;
}
