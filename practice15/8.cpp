//https://www.nowcoder.com/practice/b90f1f5957ae4ee09b9dddf464718587?tpId=3&tqId=10934&tPage=4&rp=&ru=/ta/hackathon&qru=/ta/hackathon/question-ranking
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i = -1, j = -1, n, r = 1;
	while (cin >> n)
	{
		r = 1;
		i = -1, j = -1;
		int a[100][100] = { 0 };
		while (r <= n*n)
		{
			for (i++, j++; a[i][j] == 0 && j<n; j++)
			{
				a[i][j] = r++;
			}
			for (i++, j--; a[i][j] == 0 && i<n; i++)
			{
				a[i][j] = r++;
			}
			for (i--, j--; a[i][j] == 0 && j >= 0; j--)
			{
				a[i][j] = r++;
			}
			for (i--, j++; a[i][j] == 0 && i>0; i--)
			{
				a[i][j] = r++;
			}
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}