
//https://www.nowcoder.com/practice/ddec753f446e4ba4944e35378ba635c8?tpId=40&tqId=21410&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void add(string& str1, string& str2)
{
	int x1 = 0, x2 = 0, x;
	string temp;
	while (str1[x1] != '.')
	{
		x1++;
	}
	while (str2[x2] != '.')
	{
		x2++;
	}
	if (x1 < x2)
	{
		x = x1, x1 = x2, x2 = x;
		temp = str1, str1 = str2, str2 = temp;
	}
	int m1, m2;
	m1 = str1.size() - x1 - 1;
	m2 = str2.size() - x2 - 1;
	if (m2 - m1 > 0)
	{
		str1.insert(str1.end(), m2 - m1, '0');
	}
	int r = 0, sum;
	for (int i = x1 + m2, j = x2 + m2; i >= 0; i--, j--)
	{
		if (str1[i] == '.')
		{
			continue;
		}
		if (j >= 0)
		{
			sum = str1[i] - '0' + str2[j] - '0' + r;
			str1[i] = sum % 10 + '0';
			r = sum / 10;
		}
		else
		{
			sum = str1[i] - '0' + r;
			str1[i] = sum % 10 + '0';
			r = sum / 10;
			if (r == 0)
			{
				break;
			}
		}
	}
	cout << str1 << endl;
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		add(str1, str2);
	}
	system("pause");
	return 0;
}