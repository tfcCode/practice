
//https://www.nowcoder.com/practice/34dc8aef8295470ea536f1c9255fef7e?tpId=98&tqId=32980&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
int main(){
	int n, sum, x;
	sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		sum += x;
	}
	cout << sum - n << endl;
	system("pause");
	return 0;
}