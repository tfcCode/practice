//https://www.nowcoder.com/practice/3f27a0a5a59643a8abf0140b9a8cf1f7?tpId=40&tqId=21340&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
using namespace std;
class student
{
public:
	int num;
	int score;
	void set_data();
	void show_data();
};
void student::set_data()
{
	cin >> num >> score;
}
void student::show_data()
{
	cout << num << " " << score << endl;
}
int main()
{
	int n, i, j, temp, temp1;
	while (cin >> n)
	{
		student *pt = new student[n];
		for (i = 0; i < n; i++)
		{
			pt[i].set_data();
		}
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (pt[i].score>pt[j].score)
				{
					temp = pt[i].score, pt[i].score = pt[j].score, pt[j].score = temp;
					temp1 = pt[i].num, pt[i].num = pt[j].num, pt[j].num = temp1;
				}
				if (pt[i].score == pt[j].score)
				{
					if (pt[i].num > pt[j].num)
					{
						temp = pt[i].score, pt[i].score = pt[j].score, pt[j].score = temp;
						temp1 = pt[i].num, pt[i].num = pt[j].num, pt[j].num = temp1;
					}
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			pt[i].show_data();
		}
	}
	system("pause");
	return 0;
}