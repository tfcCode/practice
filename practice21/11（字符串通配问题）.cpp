//https://www.nowcoder.com/practice/43072d50a6eb44d2a6c816a283b02036?tpId=37&tqId=21294&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;

int Char_matching(string& str1, string& str2)
{
	int m, n;
	m = str1.size();
	n = str2.size();
	int **pt = new int*[m + 1];
	for (int i = 0; i <= m; i++)
	{
		pt[i] = new int[n + 1];
	}
	pt[0][0] = 1;
	for (int i = 1; i <= m; i++)
	{
		if (str1[0] == '*') //如果含 通配符 的字符串 第一个字符 是* 
		{
			pt[i][0] = 1;
		}
		else
		{
			pt[i][0] = 0;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		pt[0][i] = 0;
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (str1[i] == '?')
			{
				pt[i][j] = pt[i - 1][j - 1];
			}
			else if (str1[i] == '*')
			{
				pt[i][j] = (pt[i - 1][j - 1] || pt[i][j - 1] || pt[i - 1][j]);
			}
			else
			{
				pt[i][j] = pt[i - 1][j - 1] && (str1[i] == str2[j]);
			}
		}
	}
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << pt[i][j] << " ";
		}
		cout << endl;
	}
	return pt[m][n];
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (Char_matching(str1, str2))
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

