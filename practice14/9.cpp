//https://www.nowcoder.com/practice/4b733a850c364c32b368555c8c2ec96b?tpId=40&tqId=21341&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<cmath>
#include<iomanip>
const double n = acos(-1);
using namespace std;
int main()
{
	double a, b, c, x, y, z, v, r;
	while (cin >> a >> b >> c >> x >> y >> z)
	{
		r = sqrt((x - a)*(x - a) + (y - b)*(y - b) + (z - c)*(z - c));
		v = 4 * n*r*r*r / 3;
		cout << fixed << setprecision(3);
		cout << r << " " << v << endl;
	}
	system("pause");
	return 0;
}