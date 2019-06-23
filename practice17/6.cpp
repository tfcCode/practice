//https://www.nowcoder.com/practice/647fc23dc4e147328cc484e3aeb6cc2a?tpId=40&tqId=21507&tPage=9&rp=9&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int m, n, num, i, count;
	while (cin >> n >> m)
	{
		count = 0;
		for (i = n; i >= n - m + 1; i--)
		{
			num = i;
			while (num % 2 == 0)
			{
				num = num / 2;
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}
/*string mut(string &num1, string &num2)
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
string div(string str)
{
	vector<int> temp;
	int m, i, remain, r, j, sum;
	m = str.size();
	int *pt = new int[m];
	for (i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}
	for (i = 0; i < m;)
	{
		r = 0, remain = 0;
		for (j = i; j < m; j++)
		{
			sum = r * 10 + pt[j];
			r = sum % 2;
			pt[j] = sum / 2;
			remain = r;
		};
		temp.push_back(remain);
		while (pt[i] == 0)
		{
			i++;
		}
	}
	string res = "";
	m = temp.size();
	for (i = 0; i < m; i++)
	{
		res = res + to_string(temp[i]);
	}
	res = Rev(res);
	return res;
	temp.clear();
	delete[]pt;
}
int main()
{
	string str1, str2, str;
	str1 = "";
	int m, n, i, num, count;
	while (cin >> n >> m)
	{
		if (m == 0 && n == 0)
		{
			break;
		}
		num = n;
		while (num > 0)
		{
			str1 = str1 + to_string(num % 10);
			num = num / 10;
		}
		str1 = Rev(str1);
		for (i = n - 1; i >= n - m + 1; i--)
		{
			num = i;
			str2 = "";
			while (num > 0)
			{
				str2 = str2 + to_string(num % 10);
				num = num / 10;
			}
			str2 = Rev(str2);
			str1 = mut(str1, str2);
		}
		str = div(str1);
		num = str.size();
		count = 0;
		for (i = num - 1; i >= 0; i--)
		{
			if (str[i] == '0')
			{
				count++;
			}
			else
			{
				break;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}*/