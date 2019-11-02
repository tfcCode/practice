


//https://www.nowcoder.com/pat/2/problem/276
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findCoin(int n) {
	if (n == 1) {
		return 0;
	}
	if (n <= 3) {
		return 1;
	}
	int reset, metage;
	metage = (n + 2) / 3;
	reset = n - metage * 2;
	return findCoin(max(metage, reset)) + 1;
}

int main(){
	int n;
	while (cin >> n) {
		if (n > 0) {
			cout << findCoin(n) << endl;
		}
	}
	system("pause");
	return 0;
}
