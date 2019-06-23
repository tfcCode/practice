//https://www.nowcoder.com/practice/97be22ee50b14cccad2787998ca628c8?tpId=40&tqId=21348&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string mut(string &num1, string &num2)
{
	string res = "";
	int n, m;
	m = num1.size(), n = num2.size();
	vector<int>temp(m + n - 1);
	for (int i = 0; i < m; i++)
	{
		int a = num1[i] - '0';
		for (int j = 0; j < n; j++)
		{
			int b = num2[j] - '0';
			temp[i + j] = temp[i + j] + a*b;
		}
	}
	int carry = 0, t;
	for (int i = temp.size() - 1; i >= 0; i--)  //进行进位处理，注意左侧是大右侧是小
	{
		t = temp[i] + carry;
		temp[i] = t % 10;
		carry = t / 10;
	}
	while (carry != 0)  //若遍历完仍然有进位
	{
		t = carry % 10;
		carry = carry / 10;
		temp.insert(temp.begin(), t);
	}
	for (auto a : temp)   //基于范围的for循环
	{
		res = res + to_string(a);  //将数值转化为字符
	}
	if (res.size() > 0 && res[0] == '0')
	{
		return "0";
	}
	return res;
}
string Rev(string str1)
{
	int i, m;
	string str = "";
	m = str1.size();
	for (i = m - 1; i >= 0; i--)
	{
		str = str + str1[i];
	}
	return str;
}
int main()
{
	int n, i, num;
	string str, str1, str2;
	while (cin >> n)
	{
		str1 = "";
		num = n;
		while (num > 0)
		{
			str1 = str1 + to_string(num % 10);
			num = num / 10;
		}
		str1 = Rev(str1);
		for (i = n - 1; i >= 1; i--)
		{
			str2 = "";
			num = i;
			while (num > 0)
			{
				str2 = str2 + to_string(num % 10);
				num = num / 10;
			}
			str2 = Rev(str2);
			str1 = mut(str1, str2);
		}
		cout << str1 << endl;
	}
	system("pause");
	return 0;
}