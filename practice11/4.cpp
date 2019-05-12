//https://www.nowcoder.com/practice/de044e89123f4a7482bd2b214a685201?tpId=37&tqId=21231&tPage=1&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;
class date
{
public:
	void set_date();
	void show_date();
	int & get_date1();
	int & get_date2();
	int num;
	int score;
};
void date::set_date()
{
	cin >> num >> score;
}
void date::show_date()
{
	cout << num << " " << score << endl;
}
int main()
{
	int n, i, j, m, temp, temp1;
	date Date[100];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		Date[i].set_date();
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (Date[i].num>Date[j].num)
			{
				temp = Date[i].num, temp1 = Date[i].score;
				Date[i].num = Date[j].num, Date[i].score = Date[j].score;
				Date[j].num = temp, Date[j].score = temp1;
			}
		}
	}
	m = 0;
	for (i = 1; i < n; i++)
	{
		if (Date[i].num == Date[m].num)
		{
			Date[m].score += Date[i].score;
			Date[i].score = -1;
		}
		else
		{
			m = i;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (Date[i].score != -1)
		{
			Date[i].show_date();
		}
	}
	system("pause");
	return 0;
}