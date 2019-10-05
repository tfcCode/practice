

//https://www.nowcoder.com/practice/480caa5ffd164ac8b71caaa6d0f4e6db?tpId=98&tqId=32856&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool Compare(string &str1, string &str2) {
	for (int i = 0; i < str1.size(); i++) {
		for (int j = 0; j < str2.size(); j++) {
			if (str1[i] == str2[j]) {
				return false;
			}
		}
	}
	return true;
}

int main() 
{
	string str, temp;
	vector<string> pt;
	while (cin >> str) {
		temp = "";
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ',') {
				pt.push_back(temp);
				temp = "";
				i++;
				continue;
			}
			if (str[i] >= 'a'&&str[i] <= 'z') {
				temp = temp + str[i];
			}
		}
		pt.push_back(temp);
		vector<int> pt1;
		for (int i = 0; i < pt.size() - 1; i++) {
			for (int j = i + 1; j < pt.size(); j++) {
				if (Compare(pt[i], pt[j])) {
					int m = pt[i].size()*pt[j].size();
					pt1.push_back(m);
				}
			}
		}
		if (pt1.size() != 0) {
			sort(pt1.begin(), pt1.end());
			cout << pt1[pt1.size() - 1] << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	system("pause");
	return 0;
}