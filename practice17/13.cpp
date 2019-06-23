//https://www.nowcoder.com/practice/e9a4919b8848451d9aff81e3cdd133b1?tpId=90&tqId=30930&tPage=8&rp=8&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string mut(string &num1, string &num2)
{
	int m, n;
	string res = "";
	m = num1.size(), n = num2.size();
	vector<int> temp(m + n - 1);
	for (int i = 0; i < m; i++)
	{
		int a = num1[i] - '0';
		for (int j = 0; j < n; j++)
		{
			int b = num2[j] - '0';
			temp[i + j] += a*b;
		}
	}
	int carry = 0, t;
	for (int i = temp.size() - 1; i >= 0; i--)
	{
		t = temp[i] + carry;
		temp[i] = t % 10;
		carry = t / 10;
	}
	while (carry != 0)
	{
		t = carry % 10;
		carry = carry / 10;
		temp.insert(temp.begin(), t);
	}
	for (auto a : temp)
	{
		res = res + to_string(a);
	}
	if (res.size() > 0 && res[0] == '0')
	{
		return "0";
	}
	return res;
	temp.clear();
}
int main()
{
	int  i, n;
	string s, str1, str2;
	while (cin >>n)
	{
		str1 = "", str2;
		str1 = str1 + to_string(2);
		str2 = str1;
		for (i = 0; i < n - 1; i++)
		{
			str1 = mut(str1, str2);
		}
		cout << str1 << endl;
	}
	system("pause");
	return 0;
}