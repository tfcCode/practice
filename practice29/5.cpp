

//https://www.nowcoder.com/pat/2/problem/264
#include<iostream>
#include<algorithm>
using namespace std;

void number(int n) {
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			count++;
			while (n%i == 0) {
				n = n / i;
			}
		}
	}
	if (n != 1) {
		count++;
	}
	cout << count << endl;
}

int main(){
	int n;
	while (cin >> n) {
		number(n);
	}
	system("pause");
	return 0;
}
