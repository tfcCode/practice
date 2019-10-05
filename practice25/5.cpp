
//https://www.nowcoder.com/practice/b83b126603dd4e63bc4287d32d754886?tpId=98&tqId=32868&tPage=3&rp=3&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	while (cin >> str) {
		int *pt = new int[str.size() + 1]();
		pt[0] = pt[1] = 1;
		for (int i = 2; i <= str.size(); i++) {
			if (str[i - 1] != '0') {
				pt[i] += pt[i - 1];
			}
			if (str[i - 2] == '1' || (str[i - 2] <= '2' && str[i] <= '6')) {
				pt[i] += pt[i - 2];
			}
		}
		cout << pt[str.size()] << endl;
	}
	system("pause");
	return 0;
}