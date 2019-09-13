//https://www.nowcoder.com/practice/74c493f094304ea2bda37d0dc40dc85b?tpId=37&tqId=21295&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-rankinghttps://www.nowcoder.com/practice/74c493f094304ea2bda37d0dc40dc85b?tpId=37&tqId=21295&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;

int main()
{
	double n, x, y, z, pt;
	while (cin >> n)
	{
		for (x = 0; x <= 20; x++)
		{
			y = (100 - 7 * x) / 4;
			z = 100 - x - y;
			pt = y - (int)y;
			if (pt == 0 && y >= 0 && z >= 0)
			{
				cout << x << " " << y << " " << z << endl;
			}
		}
	}
	system("pause");
	return 0;
}