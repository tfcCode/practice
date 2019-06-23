//https://www.nowcoder.com/practice/8cb1f3979b524ed1ba67b4f64ed9e4f2?tpId=90&tqId=30935&tPage=8&rp=8&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool primeNumber(int &n)
{
	int sign = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sign = 1;
			break;
		}
	}
	if (sign == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Rev(int &n)
{
	vector<int> temp;
	int m = n;
	while (m > 0)
	{
		temp.push_back(m % 10);
		m = m / 10;
	}
	m = temp.size();
	int k = m - 1, sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum = sum + temp[i] * pow(10, k);
		k--;
	}
	temp.clear();
	return sum;
}
int main()
{
	vector<int> temp;
	int i, m, x, k;
	while (cin >> k)
	{
		x = 0;
		for (i = 2;; i++)
		{
			if (primeNumber(i))
			{
				m = Rev(i);
				{
					if (m != i&&primeNumber(m))
					{
						x++;
					}
				}
			}
			if (x == k)
			{
				cout << i << endl;
				break;
			}
		}
	}
	system("pause");
	return 0;
}