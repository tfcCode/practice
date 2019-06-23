//https://www.nowcoder.com/practice/2ee36922acfe4b26bb7cceb5fc9a89a2?tpId=90&tqId=30918&tPage=8&rp=8&ru=/ta/2018test&qru=/ta/2018test/question-ranking
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
	int n, i, m, x;
	string s, str1, str2;
	while (cin >> s >> n)
	{
		m = s.size();
		x = 0;
		for (i = m - 1; i >= 0; i--)
		{
			if (s[i] != '.')
			{
				x++;
			}
			else
			{
				s.erase(i, 1);
				break;
			}
		}
		str1 = str2 = s;
		for (i = 0; i < n - 1; i++)
		{
			str1 = mut(str1, str2);
		}
		if (x != m)
		{
			char ch = '.';
			m = str1.size();
			x = m - x*n;
			str1.insert(str1.begin() + x, ch);
		}
		cout << str1 << endl;
	}
	system("pause");
	return 0;
}