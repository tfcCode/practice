

//https://www.nowcoder.com/practice/6ef4d5e5767b470da56e64ee48e0abea?tpId=98&tqId=32872&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int x, n;
	cin >> n;
	vector<int> pt(n);
	for (int i = 0; i < n; i++)
	{
		cin >> pt[i];
	}
	x = 0;
	for (int i = 1; i < pt.size(); i++)
	{
		int temp = pt[i];
		int j = i - 1;
		while (j >= 0 && pt[j] > temp)
		{
			pt[j + 1] = pt[j];
			j--;
			x++;
		}
		if (j != i - 1)
		{
			pt[j + 1] = temp;
		}
	}
	cout << x << endl;
	system("pause");
	return 0;
}