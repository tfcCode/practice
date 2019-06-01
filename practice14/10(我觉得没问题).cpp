//https://www.nowcoder.com/practice/fe8bff0750c8448081759f3ee0d86bb4?tpId=40&tqId=21358&tPage=2&rp=2&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student
{
private:
	int num;
	string name;
	string sex;
	int age;
public:
	void set_date();
	void show_date();
	int getnum();
};
int student::getnum()
{
	return num;
}
void student::set_date()
{
	cin >> num >> name >> sex >> age;
}
void student::show_date()
{
	if (num < 10)
	{
		cout << "0" << num;
	}
	else
	{
		cout << num;
	}
	cout << " " << name;
	cout << " " << sex;
	cout << " " << age << endl;
}
int main()
{
	int n, i, m, j;
	while (cin >> n)
	{
		student *pt = new student[n];
		for (i = 0; i < n; i++)
		{
			pt[i].set_date();
		}
		cin >> m;
		int *p = new int[m];
		for (i = 0; i < m; i++)
		{
			cin >> p[i];
		}
		int k, sign, q, x;
		for (i = 0; i < m; i++)
		{
			sign = 0;
			k = p[i];
			for (j = 0; j < n; j++)
			{
				q = pt[j].getnum();
				if (k == q)
				{
					x = j;
					sign = 1;
					break;
				}
			}
			if (sign == 0)
			{
				cout << "No Answer!" << endl;
				continue;
			}
			else
			{
				pt[x].show_date();
			}
		}
		delete[]pt;
		delete[]p;
	}
	system("pause");
	return 0;
}