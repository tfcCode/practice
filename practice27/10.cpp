

//https://www.nowcoder.com/practice/7cf889cb5db44e46a2fcc21c415c0150?tpId=98&tqId=32994&tPage=9&rp=9&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string str;
	char ch1, ch2;
	while (cin >> str) {
		ch1 = str[0];
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ',') {
				continue;
			}
			ch2 = str[i];
			if (ch2 > ch1&&ch2 != ch1 + 1) {
				cout << ch1 - '0' + 1 << endl;
				break;
			}
			ch1 = ch2;
		}
	}

	system("pause");
	return 0;
}