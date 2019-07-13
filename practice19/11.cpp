//https://www.nowcoder.com/practice/e947e4801fc64808b2390c1cf2754906?tpId=98&&tqId=32993&rp=8&ru=/activity/oj&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	int i, j, m, n, temp, x, y, count;
	while (getline(cin, str1, ','))
	{
		getline(cin, str2);
		m = str1.size();
		n = str2.size();
		temp = 0;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				x = i, y = j;
				count = 0;
				while (str1[x] == str2[y])
				{
					x++, y++;
					count++;
					if (x == m || y == n)
					{
						break;
					}
				}
				if (count > temp)
				{
					temp = count;
				}
			}
		}
		cout << temp << endl;
	}
	system("pause");
	return 0;
}