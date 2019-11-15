
//https://www.luogu.org/problem/P5638
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	n--;
	long long *pt = new long long[n + 1];
	long long *front = new long long[n + 1];
	long long *back = new long long[n + 2];
	for (int i = 1; i <= n; i++) {
		cin >> pt[i];
	}
	front[0] = 0;
	back[n + 1] = 0;
	for (int i = 1, j = n; i <= n; i++, j--) {
		front[i] = front[i - 1] + pt[i];
		back[j] = back[j + 1] + pt[j];
	}
	long long temp = back[k + 1];
	for (int i = 2, j = n - 1; i <= n - k + 1; i++, j--) {
		temp = min(temp, front[i - 1] + back[i + k]);
	}
	cout << temp << endl;
	system("pause");
	return 0;
}