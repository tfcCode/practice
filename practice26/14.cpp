

//https://www.nowcoder.com/practice/b7985769dc434d85a16717908669bcab?tpId=98&tqId=32967&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> pt;
	int n;
	while (cin >> n) {
		if (cin.get() == '\n') {
			pt.push_back(n);
			break;
		}
		pt.push_back(n);
	}
	sort(pt.begin(), pt.end());
	int sum = 0;
	if (pt.size() % 2 != 0) {
		int x = pt.size() / 2;
		for (int i = 0; i < pt.size(); i++) {
			sum += abs(pt[i] - pt[x]);
		}
		cout << sum << endl;
	}
	else {
		int x1 = pt.size() - 1;
		int x2 = pt.size();
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < pt.size(); i++) {
			sum1 += abs(pt[i] - pt[x1]);
			sum2 += abs(pt[i] - pt[x2]);
		}
		cout << min(sum1, sum2) << endl;
	}
	system("pause");
	return 0;
}