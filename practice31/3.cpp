
//https://www.nowcoder.com/practice/d00c43a0739e4f0ca299d6c5067bb4b9?tpId=90&tqId=30862&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
using namespace std;

int main() {
	int n, x, num;
	int count = 0;
	num = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (num != x) {
			count++;
		}
		num = x;
	}
	cout << count << endl;
	system("pause");
	return 0;
}