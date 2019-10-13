
//https://www.nowcoder.com/practice/4e7267b55fdf430d9403aa12206572b3?tpId=98&tqId=32960&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string str;
	vector<char> pt;
	while (cin >> str) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'a'&&str[i] <= 'z') {
				cout << str[i];
				continue;
			}
			if (str[i] == '+' || str[i] == '-') {
				while (pt.size() > 0 && (pt.back() == '+' || pt.back() == '-' || pt.back() == '*' || pt.back() == '/')) {
					cout << pt.back();
					pt.pop_back();
				}
				pt.push_back(str[i]);
				continue;
			}
			if (str[i] == '*' || str[i] == '/') {
				while (pt.size() > 0 && (pt.back() == '*' || pt.back() == '/')) {
					cout << pt.back();
					pt.pop_back();
				}
				pt.push_back(str[i]);
			}
		}
		while (pt.size() > 0) {
			cout << pt.back();
			pt.pop_back();
		}
		cout << endl;
	}
	system("pause");
	return 0;
}