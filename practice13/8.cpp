//https://www.nowcoder.com/practice/8e400fd9905747e4acc2aeed7240978b?tpId=37&tqId=21291&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	double score;
};
int main()
{
	int m, n, i, j;
	while (cin >> m >> n)
	{
		string str;
		double temp;
		student *pt = new student[m];
		for (i = 0; i < m; i++)
		{
			cin >> pt[i].name >> pt[i].score;
		}
		if (n == 0)
		{
			for (i = 1; i < m; i++)
			{
				temp = pt[i].score;
				str = pt[i].name;
				j = i - 1;
				while ((j >= 0) && pt[j].score < temp)
				{
					pt[j + 1].score = pt[j].score;
					pt[j + 1].name = pt[j].name;
					j--;
				}
				if (j != i - 1)
				{
					pt[j + 1].score = temp;
					pt[j + 1].name = str;
				}
			}
		}
		if (n == 1)
		{
			for (i = 1; i < m; i++)
			{
				temp = pt[i].score;
				str = pt[i].name;
				j = i - 1;
				while ((j >= 0) && pt[j].score > temp)
				{
					pt[j + 1].score = pt[j].score;
					pt[j + 1].name = pt[j].name;
					j--;
				}
				if (j != i - 1)
				{
					pt[j + 1].score = temp;
					pt[j + 1].name = str;
				}
			}
		}
		for (i = 0; i < m; i++)
		{
			cout << pt[i].name << " " << pt[i].score << endl;
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}