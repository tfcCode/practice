

//https://www.nowcoder.com/practice/f459f298ca814040bf601004734129a9?tpId=90&tqId=30860&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	vector<string> pt;
	int n, m;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		pt.push_back(str);
	}
	vector<string>::iterator it;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> str;
		it = find(pt.begin(), pt.end(), str);
		if (it != pt.end()) {
			pt.erase(it);
		}
	}
	sort(pt.begin(), pt.end());
	for (int i = 0; i < pt.size(); i++) {
		cout << pt[i] << endl;
	}
	system("pause");
	return 0;
}