//https://www.nowcoder.com/practice/c6d9d7fb1b584ca5939f366618c847d8?tpId=98&tqId=32931&tPage=6&rp=6&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
class character
{
public:
	int type;
	int num;
};
string era(string &str, int n)
{
	int m = str.size() - n;
	str.insert(str.end(), str.begin(), str.begin() + m);
	str.erase(str.begin(), str.begin() + m);
	return str;
}
int main()
{
	string str;
	int length, num1, m;
	while (cin >> length >> num1 >> str)
	{
		character *pt = new character[num1];
		for (int i = 0; i < num1; i++)
		{
			cin >> pt[i].type >> pt[i].num;
		}
		for (int i = 0; i < num1; i++)
		{
			if (pt[i].type == 1)
			{
				str = era(str, pt[i].num);
				continue;
			}
			if (pt[i].type == 2)
			{
				m = pt[i].num;
				cout << str[m] << endl;
			}
		}
	}
	system("pause");
	return 0;
}