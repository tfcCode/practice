
//https://www.nowcoder.com/practice/b43fb39898f448e39adbcffde5ff0dfc?tpId=90&tqId=30810&tPage=2&rp=2&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int LCS_length(string& str1, string& str2)
{
	int i, j;
	int **lcs = new int*[str1.size() + 1];
	for (i = 0; i <= str1.size(); i++)
	{
		lcs[i] = new int[str2.size() + 1]();
	}
	for (i = 1; i <= str1.size(); i++)
	{
		for (j = 1; j <= str2.size(); j++)
		{
			if (str1[i - 1] == str2[j - 1])
			{
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
			}
			else
			{
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
			}
		}
	}
	return lcs[str1.size()][str2.size()];
}

int main()
{
	string str, str1, str2;
	while (cin >> str)
	{
		int k, temp = 0, length = 0, m;
		m = str.size();
		for (k = 1; k <= m - 1; k++)
		{
			str1 = str.substr(0, k);
			str2 = str.substr(k, m - k);
			temp = LCS_length(str1, str2);
			if (temp > length)
			{
				length = temp;
			}
		}
		cout << length*2 << endl;
	}
	system("pause");
	return 0;
}