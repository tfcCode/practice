

//https://www.nowcoder.com/practice/08f70daa78bf45fea64d72523a3641f3?tpId=98&tqId=32862&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int price, buy = 999999, profit = 0;
	while (cin >> price) {
		profit = max(price - buy, profit);
		buy = min(price, buy);
	}
	cout << profit << endl;
	system("pause");
	return 0;
}