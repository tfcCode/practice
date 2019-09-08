
//https://www.nowcoder.com/practice/f549ee08ddd84b8485a4fa9aefaf4a38?tpId=37&tqId=21302&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int min(int a, int b, int c)
{
	int temp;
	temp = a < b ? a : b;
	temp = temp < c ? temp : c;
	return temp;
}

void change_number(string& str1, string& str2)
{
	int i, j, temp, deletion, insertion, addition, m, n, k;
	m = str1.size(), n = str2.size();

	int **pt = new int*[m + 1];

	for (i = 0; i <= m; i++)
	{
		pt[i] = new int[n + 1];
	}

	pt[0][0] = 0;
	for (i = 1; i <= m; i++)
	{
		pt[i][0] = i;
		k = pt[i][0];
	}
	for (i = 0; i <= n; i++)
	{
		pt[0][i] = i;
		k = pt[0][i];
	}

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			temp = str1[i - 1] == str2[j - 1] ? 0 : 1;
			deletion = pt[i][j - 1] + 1;
			insertion = pt[i - 1][j] + 1;
			addition = pt[i - 1][j - 1] + temp;
			pt[i][j] = min(deletion, insertion, addition);
		}
	}
	cout << "1/" << pt[m][n] + 1 << endl;

	for (i = 0; i <= m; i++)
	{
		delete[]pt[i];
	}
	delete pt;
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		change_number(str1, str2);
	}
	system("pause");
	return 0;
}