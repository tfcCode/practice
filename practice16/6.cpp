//https://www.nowcoder.com/practice/103dd589fed14457a673c613d8de3841?tpId=40&tqId=21519&tPage=10&rp=10&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i, j, m, r, num[10000], sum, x, remain;
	while (cin >> str)
	{
		m = str.size();
		int *pt = new int[m];
		for (i = 0; i < m; i++)
		{
			pt[i] = str[i] - '0';
		}
		x = 0;
		for (i = 0; i < m;)
		{
			r = 0;
			for (j = i; j < m; j++)
			{
				sum = r * 10 + pt[j];
				r = sum % 2;
				pt[j] = sum / 2;
			}
			num[x] = r;
			x++;
			while (pt[i] == 0)
			{
				i++;
			}
		}
		for (i = x - 1; i >= 0; i--)
		{
			cout << num[i];
		}
		cout << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}