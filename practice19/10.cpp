//https://www.nowcoder.com/practice/3eb4f4f8128a4372880ea73e2bbc0d7e?tpId=98&&tqId=33035&rp=4&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
struct time
{
	int num;
	int itime;
	int otime;
};
int main()
{
	int n, Time, i, j, x;
	while (cin >> n >> Time)
	{
		struct time *pt = new struct time[n];
		for (i = 0; i < n; i++)
		{
			cin >> pt[i].num >> pt[i].itime >> pt[i].otime;
		}
		x = 0;
		for (i = 0; i < n; i++)
		{
			if (pt[i].itime<=Time&&pt[i].otime>=Time)
			{
				pt[x] = pt[i];
				x++;
			}
		}
		if (x == 0)
		{
			cout << "null" << endl;
		}
		else
		{
			struct time temp;
			for (i = 0; i < x - 1; i++)
			{
				for (j = i + 1; j < x; j++)
				{
					if (pt[i].num > pt[j].num)
					{
						temp = pt[i], pt[i] = pt[j], pt[j] = temp;
					}
				}
			}
			for (i = 0; i < x; i++)
			{
				cout << pt[i].num << endl;
			}
		}
	}
	system("pause");
	return 0;
}