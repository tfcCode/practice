

//https://www.nowcoder.com/practice/8e0fdf50f69f42458cb0aa043d9c41d6?tpId=90&tqId=30868&tPage=5&rp=5&ru=/ta/2018test&qru=/ta/2018test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *pt = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> pt[i];
	}
	int index, temp, x, sign;
	if (pt[0] == 1) {
		sign = 0;
		for (int i = 1; i < n; i++) {
			if (pt[i] == pt[i - 1] + 1) {
				continue;
			}
			else {
				x = i;
				sign = 1;
				break;
			}
		}
		for (int i = x + 1; i < n; i++) {
			if (pt[i] == pt[x - 1] + 1) {
				index = i;
				break;
			}
		}
		if (sign == 1) {
			temp = pt[x], pt[x] = pt[index], pt[index] = temp;
		}
		else {
			temp = pt[n - 2], pt[n - 2] = pt[n - 1], pt[n - 1] = temp;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (pt[i] == 1) {
				index = i;
				break;
			}
		}
		temp = pt[0], pt[0] = pt[index], pt[index] = temp;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << pt[i] << " ";
	}
	cout << pt[n - 1] << endl;
	system("pause");
	return 0;
}