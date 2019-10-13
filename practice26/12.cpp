
//https://www.nowcoder.com/practice/60594521f1db4d75ad78266b0b35cfbb?tpId=98&tqId=32965&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		int *pt = new int[n];
		for (int i = 0; i < n; i++){
			cin >> pt[i];
		}
		sort(pt, pt + n);

		int Max = -23112;
		int Min = 999990;
		for (int i = 0, j = n - 1; i < n / 2; i++, j--){
			Max = max(Max, pt[i] + pt[j]);
			Min = min(Min, pt[i] + pt[j]);
		}
		cout << Max - Min << endl;
	}

	system("pause");
	return 0;
}