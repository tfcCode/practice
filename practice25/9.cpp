
//https://www.nowcoder.com/practice/b178fcef3ed4448c99d7c0297312212d?tpId=98&tqId=32905&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<string>
using namespace std;

string add(string &num1, string &num2)
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
		if (j >= 0) {
			sum = pt1[i] + pt2[j] + r;
			pt[x] = sum % 10;
			r = sum / 10;
			x--;
		}
		else {
			sum = pt1[i] + r;
			pt[x] = sum % 10;
			r = sum / 10;
			x--;
		}
	}
	while (r > 0)
	{
		x = r % 10;
		r = r / 10;
		pt.insert(pt.begin(), x);
	}
	string str = "";
	for (int i = 0; i < pt.size(); i++)
	{
		str = str + to_string(pt[i]);
	}
	delete[]pt1;
	delete[]pt2;
	return str;
}

int main()
{
	int n;
	while (cin >> n) {
		string f1 = "1", f2 = "1", f;
		for (int i = 2; i <= n; i++) {
			f = add(f1, f2);
			f2 = f1;
			f1 = f;
		}
		if (n > 1) {
			cout << f << endl;
		}
		else
		{
			cout << f1 << endl;
		}
	}
	system("pause");
	return 0;
}