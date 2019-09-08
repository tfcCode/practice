//https://www.nowcoder.com/practice/7b6586ac8f614aafbe2e0896e82ac0c1?tpId=40&tqId=21382&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string Two_mutiply(int n)
{
	string str = "2";
	int m, i, j, k, r, sum;
	for (k = 0; k < n - 1; k++)
	{
		m = str.size();
		r = 0;
		for (i = m - 1; i >= 0; i--)
		{
			sum = r + (str[i] - '0') * 2;
			str[i] = sum % 10 + '0';
			r = sum / 10;
		}
		if (r > 0)
		{
			str.insert(0, 1, r + '0');
		}
	}
	m = str.size();
	str[m - 1] = str[m - 1] - 1;
	return str;
}

string TWOBig_multi(string& str, int n)
{
	int i, m, sum, r;
	m = str.size();
	r = 0;
	for (i = m - 1; i >= 0; i--)
	{
		sum = r + (str[i] - '0')*n;
		str[i] = sum % 10 + '0';
		r = sum / 10;
	}
	if (r > 0)
	{
		str.insert(0, 1, r + '0');
	}
	return str;
}

string add(string& str1, string& str2)
{
	int m, n, i, j, x, sum, r;
	string temp;
	m = str1.size();
	n = str2.size();
	if (m < n)
	{
		x = m, m = n, n = x;
		temp = str1, str1 = str2, str2 = temp;
	}
	r = 0;
	for (i = m - 1, j = n - 1; i >= 0; i--, j--)
	{
		if (j >= 0)
		{
			sum = r + str1[i] - '0' + str2[j] - '0';
			str1[i] = sum % 10 + '0';
			r = sum / 10;
		}
		else
		{
			sum = r + str1[i] - '0';
			str1[i] = sum % 10 + '0';
			r = sum / 10;
			if (r == 0)
			{
				break;
			}
		}
	}
	if (r > 0)
	{
		str1.insert(0, 1, r + '0');
	}
	return str1;
}

int main()
{
	string str, str_r, str1;
	int m, n, i;
	while (cin >> str)
	{
		if (str == "0")
		{
			break;
		}
		str_r = "";
		while (str[0] == '0')
		{
			str.erase(0, 1);
		}
		m = str.size();
		for (i = 0; i <str.size(); i++, m--)
		{
			str1 = Two_mutiply(m);
			n = str[i] - '0';
			str1 = TWOBig_multi(str1, n);
			str_r = add(str_r, str1);
		}
		cout << str_r << endl;
	}
	system("pause");
	return 0;
}