
//https://www.nowcoder.com/practice/17a083854661490e85e5bb6c4b26e546?tpId=98&tqId=32966&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<vector>
using namespace std;

int main() {
	long hp;
	long normalattack;
	long bufferattack;
	while (cin >> hp >> normalattack >> bufferattack) {
		int x = 0;
		if (bufferattack <= normalattack * 2) {
			while (hp > 0) {
				hp = hp - normalattack;
				x++;
			}
		}
		else {
			while (hp > normalattack) {
				x = x + 2;
				hp = hp - bufferattack;
			}
			if (hp > 0) {
				x++;
			}
		}
		cout << x << endl;
	}
	system("pause");
	return 0;
}