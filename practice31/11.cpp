
//https://www.nowcoder.com/practice/9e7a88d6a00e404c8418602515a5046c?tpId=90&tqId=30888&tPage=6&rp=6&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_right(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	vector<int> pt;
	for (int i = 2; i <= 10000; i++) {
		if (is_right(i)) {
			pt.push_back(i);
		}
	}
	int n, count;
	cin >> n;
	count = 0;
	for (int i = 0; i < pt.size(); i++) {
		if (pt[i] < n) {
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}