

//https://www.nowcoder.com/practice/a4d17eb2e9884359839f8ec559043761?tpId=98&tqId=32961&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<stack>
using namespace std;

stack<int> Min, result;

int main() {
	int n;
	int x, y;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x == 0) {
				if (result.size() > 0) {
					cout << Min.top() << endl;
				}
			}
			if (x == 1) {
				cin >> y;
				result.push(y);
				if (Min.empty() || y <= Min.top()) {
					Min.push(y);
				}
			}
			if (x == 2) {
				cout << result.top() << endl;
				if (result.top() == Min.top()) {
					Min.pop();
				}
				result.pop();
			}
		}
	}
	system("pause");
	return 0;
}