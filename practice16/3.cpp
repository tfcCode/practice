//https://www.nowcoder.com/practice/f970201e9f7e4040ab25a40918e27d15?tpId=90&tqId=30847&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	int sum, m, n, i, all, sign, k, j;
	cin >> k;
	string *pt = new string[k];
	for (i = 0; i < k; i++)
	{
		cin >> pt[i];
	}
	for(i=0;i<k;i++)
	{
		str = pt[i];
		m = str.size();
		all = 0;
		n = m - 1;
		for (j = 0; j < m; j++)
		{
			all = all + (str[j] - '0')*pow(10, n);
			n--;
		}
		sort(str.begin(), str.end());
		sum = 0;
		n = m - 1;
		for (j = 0; j < m; j++)
		{
			sum = sum + (str[j] - '0')*pow(10, n);
			n--;
		}
		sign = 0;
		if (sum != all&&sum%all == 0)
		{
			sign = 1;
			cout << "Possible" << endl;
		}
		if (sign == 0)
		{
			while (next_permutation(str.begin(), str.end()))
			{
				sum = 0;
				n = m - 1;
				for (j = 0; j < m; j++)
				{
					sum = sum + (str[j] - '0')*pow(10, n);
					n--;
				}
				if (sum != all&&sum%all == 0)
				{
					sign = 1;
					cout << "Possible" << endl;
					break;
				}
			}
			if (sign == 0)
			{
				cout << "Impossible" << endl;
			}
		}
	}
	delete[]pt;
	system("pause");
	return 0;
}