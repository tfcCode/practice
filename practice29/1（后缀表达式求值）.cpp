
//https://www.nowcoder.com/practice/9566499a2e1546c0a257e885dfdbf30d?tpId=37&tqId=21277&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	string str;
	vector<string> temp;
	vector<string> result;
	vector<int> pt;
	vector<string> input;
	string s;
	string ch;
	int m1, m2, m, x, y;
	cin >> str;
	if (str[0] == '-') {
		str.insert(0, 1, '0');
	}

	for (int i = 0; i < str.size(); i++) {
		s = "";
		if (str[i] == '(') {
			s = s + str[i];
			temp.push_back(s);
			continue;
		}
		if (str[i] >= '0'&& str[i] <= '9') {
			while (str[i] >= '0'&&str[i] <= '9') {
				s = s + str[i];
				i++;
			}
			i--;
			result.push_back(s);
			continue;
		}
		if (str[i] == ')') {
			while (temp.back() != "(") {
				ch = temp.back();
				temp.pop_back();
				result.push_back(ch);
			}
			temp.pop_back();
			continue;
		}
		if (str[i] == '+' || str[i] == '-') {
			s = s + str[i];
			while (temp.size() > 0 && (temp.back() == "+" || temp.back() == "-" || temp.back() == "*")) {
				ch = temp.back();
				temp.pop_back();
				result.push_back(ch);
			}
			temp.push_back(s);
			continue;
		}
		if (str[i] == '*') {
			s = s + str[i];
			while (temp.size() > 0 && temp.back() == "*") {
				ch = temp.back();
				temp.pop_back();
				result.push_back(ch);
			}
			temp.push_back(s);
		}
	}
	while (temp.size() > 0) {
		ch = temp.back();
		temp.pop_back();
		result.push_back(ch);
	}
	for (int i = 0; i < result.size(); i++) {
		if (result[i] != "*" && result[i] != "+" && result[i] != "-") {
			x = result[i].size() - 1;
			y = 0;
			for (int j = 0; j < result[i].size(); j++) {
				y = y + (result[i][j] - '0')*pow(10, x--);
			}
			pt.push_back(y);
		}
		else {
			m1 = pt.back();
			pt.pop_back();
			m2 = pt.back();
			pt.pop_back();
			if (result[i] == "+") {
				m = m1 + m2;
				pt.push_back(m);
				continue;
			}
			if (result[i] == "-") {
				m = m2 - m1;
				pt.push_back(m);
				continue;
			}
			if (result[i] == "*") {
				m = m2*m1;
				pt.push_back(m);
				continue;
			}
		}
	}
	cout << pt[0] << endl;
	pt.clear();
	temp.clear();
	result.clear();
	
	system("pause");
	return 0;
}
