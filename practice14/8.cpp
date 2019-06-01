//https://www.nowcoder.com/practice/e8480ed7501640709354db1cc4ffd42a?tpId=37&tqId=21286&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, pt;
	int n, i, j;
	double m, count, temp, a;
	while (cin >> str >> n)
	{
		m = str.size();
		if (m <= n)
		{
			cout << str << endl;
			continue;
		}
		temp = 0;
		for (i = 0; i < m - n; i++)
		{
			count = 0;
			for (j = i; j < i + n; j++)
			{
				if (str[j] == 'G' || str[j] == 'C')
				{
					count++;
				}
			}
			a = count / m;
			if (a > temp)
			{
				temp = a;
				pt.clear();
				pt.insert(pt.begin(), str.begin() + i, str.begin() + i + n);
			}
		}
		cout << pt << endl;
		str.clear();
		pt.clear();
	}
	system("pause");
	return 0;
}