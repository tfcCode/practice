
//https://www.nowcoder.com/practice/f87616abbac44842b43f24ddd3cf49e8?tpId=98&tqId=32861&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int number_exchange(string& str)
{
	string str1, str2;
	str1 = str2 = str;
	char ch1 = 'C', ch2 = 'D', ch;
	int x1 = 0, x2 = 0, m;
	for (int i = 1; i < str1.size(); i++)
	{
		m = i;
		while (m > 0 && str1[m] == ch1 && str1[m - 1] != ch1)
		{
			ch = str1[m - 1], str1[m - 1] = str1[m], str1[m] = ch;
			x1++, m--;
		}
	}

	for (int i = 1; i < str2.size(); i++)
	{
		m = i;
		while (m > 0 && str2[m] == ch2 && str2[m - 1] != ch2)
		{
			ch = str2[m - 1], str2[m - 1] = str2[m], str2[m] = ch;
			x2++, m--;
		}
	}
	if (x1 < x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}

int main()
{
	string str;
	while (cin >> str)
	{
		cout << number_exchange(str) << endl;
	}
}