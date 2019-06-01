//https://www.nowcoder.com/practice/42c0673f04b34f66ae236a1cb7995532?tpId=94&&tqId=31062&rp=1&ru=/activity/oj&qru=/ta/bit-kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n, i, j, p;
	cin >> n;
	string *pt = new string[n];
	for (i = 0; i < n; i++)
	{
		cin >> pt[i];
	}
	for (i = 0; i < n; i++)
	{
		p = 1;
		if (i < 4)
		{
			for (j = i; j >= 0; j--)
			{
				if (j == i)
				{
					cout << p << "=" << pt[j];
					p++;
					continue;
				}
				cout << " " << p << "=" << pt[j];
				p++;
			}
			cout << endl;
		}
		if (i >= 4)
		{
			for (j = i; j >= i - 3; j--)
			{
				if (j == i)
				{
					cout << p << "=" << pt[j];
					p++;
					continue;
				}
				cout << " " << p << "=" << pt[j];
				p++;
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
}