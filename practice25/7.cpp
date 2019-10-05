

//https://www.nowcoder.com/practice/dd5b5b2df5f84bae9b26c99a0a8f8660?tpId=98&tqId=32899&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;

int main() {
	int m, n, x;
	while (cin >> m >> n) {
		int **pt = new int*[m];
		for (int i = 0; i < m; i++) {
			pt[i] = new int[n];
			for (int j = 0; j < n; j++) {
				cin >> pt[i][j];
			}
		}
		cin >> x;
		int sign = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (pt[i][j] == x) {
					sign = 1;
					break;
				}
				if (pt[i][j] > x) {
					break;
				}
			}
			if (sign == 1) {
				break;
			}
		}
		if (sign == 1) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
		for (int i = 0; i < m; i++)
		{
			delete[]pt[i];
		}
	}
	system("pause");
	return 0;
}