//https://www.nowcoder.com/practice/54ef7fa64c63442d87b9c836ef9c7701?tpId=94&&tqId=31060&rp=1&ru=/activity/oj&qru=/ta/bit-kaoyan/question-ranking
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int a1, b1, a2, b2, a3, b3;
	int sign, i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		sign = 0;
		cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
		double length[3], sum;
		length[0] = (a2 - a1)*(a2 - a1) + (b2 - b1)*(b2 - b1);
		length[1] = (a3 - a2)*(a3 - a2) + (b3 - b2)*(b3 - b2);
		length[2] = (a3 - a1)*(a3 - a1) + (b3 - b1)*(b3 - b1);
		sum = sqrt(length[0]) + sqrt(length[1]) + sqrt(length[2]);
		if (length[0] + length[1] == length[2])
		{
			sign = 1;
		}
		if (length[0] + length[2] == length[1])
		{
			sign = 1;
		}
		if (length[2] + length[1] == length[0])
		{
			sign = 1;
		}
		if (sign == 1)
		{
			cout << "Yes" << endl;
			cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
		}
		else
		{
			cout << "No" << endl;
			cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
		}
	}
	system("pause");
	return 0;
}