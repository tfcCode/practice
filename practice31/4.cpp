

//https://www.nowcoder.com/practice/8738b757e0f7469c92cc2585b13a3669?tpId=90&tqId=30863&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	string str;
	vector<string> pt;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.size() != 11) {
			pt.push_back("-1");
			continue;
		}
		num = (str[0] - '0') * 100 + (str[1] - '0') * 10 + str[2] - '0';
		if (num == 133 || num == 153 || num == 180 || num == 181 || num == 189) {
			pt.push_back("China Telecom");
		}
		else if (num == 130 || num == 131 || num == 155 || num == 185 || num == 186) {
			pt.push_back("China Unicom");
		}
		else if (num == 135 || num == 136 || num == 150 || num == 182 || num == 188) {
			pt.push_back("China Mobile Communications");
		}
		else {
			pt.push_back("-1");
		}
	}
	int p = pt.size();
	for (int i = 0; i < pt.size(); i++) {
		cout << pt[i] << endl;
	}
	system("pause");
	return 0;
}