#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	void set_date();
	void show_date();
	int get();
private:
	string name;
	string num;
	int score;
};
void student::set_date()
{
	cin >> name >> num >> score;
}
void student::show_date()
{
	cout << name << " " << num << endl;
}
int student::get()
{
	return score;
}
int main()
{
	int n, i, sum, count = 0, sum1, count1 = 0;
	student stud[1000];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		stud[i].set_date();
		if (i == 1)
		{
			sum = stud[i - 1].get();
			sum1 = stud[i - 1].get();
		}
		if (sum < stud[i].get())
		{
			sum = stud[i].get();
			count = i;
		}
		if (sum1 > stud[i].get())
		{
			sum1 = stud[i].get();
			count1 = i;
		}
	}
	stud[count].show_date();
	stud[count1].show_date();
	system("pause");
	return 0;
}
