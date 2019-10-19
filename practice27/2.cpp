
//https://www.nowcoder.com/practice/7492dceb022a4bbebb990695c107823e?tpId=98&tqId=32976&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
	int k, x, n;
	cin >> k;
	for (int i = 0; i < k; i++) {
		set<int> pt;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> x;
			pt.insert(x);
		}
		if (pt.size() <= 2) {
			cout << "YES" << endl;
		}
		else if (pt.size() == 3) {
			set<int>::iterator p;
			vector<int> vec;
			for (p = pt.begin(); p != pt.end(); p++) {
				vec.push_back(*p);
			}
			if (vec[2] - vec[1] == vec[1] - vec[0]) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}