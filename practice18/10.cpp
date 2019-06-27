//https://www.nowcoder.com/practice/ff74b3d786de4a30b4cd49b8ad97467f?tpId=98&tqId=32898&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void mut(string &num1, string &num2)
{
	int m, n, i, j;
	m = num1.size();
	n = num2.size();
	vector<int> temp(m + n - 1);
	for (i = 0; i < m; i++)
	{
		int a = num1[i] - '0';
		for (j = 0; j < n; j++)
		{
			int b = num2[j] - '0';
			temp[i + j] += a*b;
		}
	}
	int carry = 0, t;
	for (i = temp.size() - 1; i >= 0; i--)
	{
		t = temp[i] + carry;
		temp[i] = t % 10;
		carry = t / 10;
	}
	while (carry > 0)
	{
		t = carry % 10;
		carry = carry / 10;
		temp.insert(temp.begin(), t);
	}
	for (i = 0; i < temp.size();)
	{
		if (temp[i] == 0)
		{
			temp.erase(temp.begin());
		}
		else
		{
			break;
		}
	}
	for (i = 0; i < temp.size(); i++)
	{
		cout << temp[i];
	}
	cout << endl;
}
int main()
{
	string num1, num2;
	while (cin >> num1 >> num2)
	{
		mut(num1, num2);
	}
	system("pause");
	return 0;
}