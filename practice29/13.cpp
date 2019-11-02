


/ https://www.nowcoder.com/practice/4f10d29c0a25491ca7d351fceafee15a?tpId=90&tqId=30836&tPage=4&rp=4&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str;
	int index, sign;
	while (cin >> str) {
		sign = 0;
		for (int i = 0; i < str.size(); i++) {
			int x = i, y = str.size() - 1;
			while (x < y && str[x] == str[y]) {
				x++, y--;
			}
			if (x >= y) {
				sign = 1;
				index = i;
				break;
			}
		}
		if (sign == 0) {
			if (str.size() % 2 == 0) {
				cout << str.size() * 2 << endl;
			}
			else {
				cout << (str.size() - 1) * 2 + 1 << endl;
			}
		}
		else {
			cout << str.size() + index << endl;
		}
	}
	system("pause");
	return 0;
}