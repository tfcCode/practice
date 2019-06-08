//https://www.nowcoder.com/practice/82424d93369649b98720743c25edc6ce?tpId=3&tqId=10871&tPage=1&rp=&ru=/ta/hackathon&qru=/ta/hackathon/question-ranking
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//大数相乘
/**
*num1 乘数1
*num2 乘数2
*return 结果字符串
*/
string BigMutiple(string num1, string num2)
{
	string res = "";

	//两个数的位数
	int m = num1.size(), n = num2.size();

	//一个i位数乘以一个j位数，结果至少是i+j-1位数
	vector<long long> tmp(m + n - 1);

	//每一位进行笛卡尔乘法
	for (int i = 0; i < m; i++) 
	{
		int a = num1[i] - '0';
		for (int j = 0; j < n; j++) 
		{
			int b = num2[j] - '0';
			tmp[i + j] += a*b;
		}
	}
	//进行进位处理，注意左侧是大右侧是小
	int carry = 0;
	for (int i = tmp.size() - 1; i >= 0; i--)
	{
		int t = tmp[i] + carry;
		tmp[i] = t % 10;
		carry = t / 10;
	}
	//若遍历完仍然有进位
	while (carry != 0) 
	{
		int t = carry % 10;
		carry /= 10;
		tmp.insert(tmp.begin(), t);
	}
	//将结果存入到返回值中
	for (auto a : tmp)  //基于范围的for循环，a依次为tmp中元素
	{
		res = res + to_string(a);  //将数值转化为字符
	}
	if (res.size() > 0 && res[0] == '0')
	{
		return "0";
	}
	return res;
}

//测试函数
int main()
{
	string num1, num2, temp, str;
	temp = "628";
	int m;
	while (cin >> num1 >> num2) 
	{
		str = BigMutiple(temp, num2);
		m = str.size();
		str.erase(str.begin() + m - 2, str.end());
		if (num1 <= str)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	return 0;
}