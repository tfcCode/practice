

//https://www.nowcoder.com/practice/07b66536f3f94f88908fe598108172d5?tpId=98&tqId=32883&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int k, n;
	while (cin >> k >> n) {
		int *pt = new int[n*n];
		for (int i = 0; i < n*n; i++) {
			cin >> pt[i];
		}
		sort(pt, pt + n*n);
		int x = 0;
		for (int i = 1; i < n*n; i++) {
			if (pt[i] > pt[x]) {
				x++;
			}
			if (x == k - 1) {
				cout << pt[x] << endl;
				break;
			}
		}
		delete[]pt;
	}
	system("pause");
	return 0;
}