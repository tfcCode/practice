

//https://www.nowcoder.com/practice/56c6fb8231a44ed8ab91ac231f7b2c63?tpId=98&tqId=32949&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int n, i;
	cin >> n;
	if (str.size() < n) {
		cout << -1 << endl;
	}
	else {
		for (i = 0; i < str.size() - n; i++) {
			cout << str.substr(i, n) << ' ';
		}
		cout << str.substr(i, n);
	}
	system("pause");
	return 0;
}