
//https://www.nowcoder.com/pat/6/problem/4045
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

void subtraction(string& str)
{
	int *pt1, *pt2;
	string str1;
	pt1 = new int[4];
	pt2 = new int[4];
	while (str1 != "6174")
	{
		for (int i = 0; i < 4; i++)
		{
			pt1[i] = pt2[i] = str[i] - '0';
		}
		sort(pt1, pt1 + 4,greater<int>());
		sort(pt2, pt2 + 4);
		cout << pt1[0] << pt1[1] << pt1[2] << pt1[3] << " - ";
		cout << pt2[0] << pt2[1] << pt2[2] << pt2[3] << " = ";
		for (int i = 4; i >= 0; i--)
		{
			if (pt1[i] < pt2[i])
			{
				pt1[i] = pt1[i] + 10;
				pt1[i - 1]--;
			}
			pt1[i] = pt1[i] - pt2[i];
		}
		str1 = "";
		for (int i = 0; i < 4; i++)
		{
			str1 = str1 + to_string(pt1[i]);
		}
		cout << str1 << endl;
		str = str1;
	}
}

int main()
{
	string str;
	while (cin >> str)
	{
		if (str.size() == 1)
		{
			str = str + "000";
		}
		if (str.size() == 2)
		{
			str = str + "00";
		}
		if (str.size() == 3)
		{
			str = str + "0";
		}
		if (str[0] == str[1] == str[2] == str[3])
		{
			cout << str << " - " << str << " = " << "0000" << endl;
		}
		else
		{
			subtraction(str);
		}
	}

	system("pause");
	return 0;
}