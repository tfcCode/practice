

//https://www.nowcoder.com/practice/5f29c72b1ae14d92b9c3fa03a037ac5f?tpId=90&tqId=30776&tPage=1&rp=1&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		long long *pt = new long long[n];
		long long Max[3], Min[2];
		for (int i = 0; i < n; i++) {
			cin >> pt[i];
		}
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < n; j++) {
				if (pt[i] < pt[j]) {
					swap(pt[i], pt[j]);
				}
			}
			Max[i] = pt[i];
		}
		for (int i = 0; i < 2; i++) {
			for (int j = i + 1; j < n; j++) {
				if (pt[i] > pt[j]) {
					swap(pt[i], pt[j]);
				}
			}
			Min[i] = pt[i];
		}
		long long x = Max[0] * Max[1] * Max[2];
		long long y = Max[0] * Min[0] * Min[1];
		cout << max(x, y) << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}