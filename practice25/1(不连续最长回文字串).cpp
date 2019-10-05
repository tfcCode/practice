
//https://www.nowcoder.com/practice/5bfb74efcd5449e69a480550b1fef431?tpId=98&tqId=32846&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
	string str;
	while (cin >> str) {
		int m = str.size();
		int **pt = new int*[m];
		for (int i = 0; i < m; i++)
		{
			pt[i] = new int[m];
		}
		for (int i = 0; i < m; i++) {
			pt[i][i] = 1;
			for (int j = i - 1; j >= 0; j--) {
				if (str[j] == str[i]) {
					pt[j][i] = pt[j + 1][i - 1] + 2;
				}
				else {
					pt[j][i] = max(pt[j + 1][i], pt[j][i - 1]);
				}
			}
		}
		cout << pt[0][m - 1] << endl;
	}
	system("pause");
	return 0;
}