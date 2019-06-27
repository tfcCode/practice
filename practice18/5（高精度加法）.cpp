//https://www.nowcoder.com/practice/829ae8987a424bd6b9a95a240ebdb0e3?tpId=98&tqId=32882&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void add(string &num1, string &num2)
{
	string temp;
	int m, n, i, j, k;
	m = num1.size();
	n = num2.size();
	if (m < n)
	{
		k = m, m = n, n = k;
		temp = num1, num1 = num2, num2 = temp;
	}
	vector<int> pt(m);
	int *pt1 = new int[m];
	int *pt2 = new int[n];
	for (i = 0; i < m; i++)
	{
		pt1[i] = num1[i] - '0';
		if (i < n)
		{
			pt2[i] = num2[i] - '0';
		}
	}
	int sum, r = 0, x = m - 1;
	for (i = m - 1, j = n - 1; i >= 0; i--, j--)
	{
		sum = pt1[i] + pt2[j] + r;
		pt[x] = sum % 2;
		r = sum / 2;
		x--;
	}
	while (r > 0)
	{
		x = r % 2;
		r = r / 2;
		pt.insert(pt.begin(), x);
	}
	for (vector<int>::iterator p = pt.begin(); p != pt.end(); p++)
	{
		cout << *p;
	}
	cout << endl;
}
int main()
{
	string num1, num2;
	while (cin >> num1 >> num2)
	{
		add(num1, num2);
	}
	system("pause");
	return 0;
}