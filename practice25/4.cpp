

//https://www.nowcoder.com/practice/336d00e600f8496287d0d472678da774?tpId=98&tqId=32863&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	vector<int> pt;
	while (cin >> n) {
		if (cin.get() == '\n') {
			pt.push_back(n);
			break;
		}
		pt.push_back(n);
	}
	sort(pt.begin(), pt.end());
	int hour, x, i;
	cin >> hour;
	n = 1;
	while (1) {
		x = 0;
		for (i = pt.size() - 1; i >= 0; i--) {
			if (pt[i] % n == 0) {
				x = x + pt[i] / n;
			}
			else{
				x = x + pt[i] / n + 1;
			}
			if (x >= hour) {
				break;
			}
		}
		if (i <= 0) {
			cout << n << endl;
			break;
		}
		n++;
	}
	system("pause");
	return 0;
}