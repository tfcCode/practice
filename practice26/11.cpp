

//https://www.nowcoder.com/practice/52f25c8a8d414f8f8fe46d4e62ef732c?tpId=98&tqId=32964&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main(){

	int n;
	while (cin >> n){
		int *pt = new int[n];
		int sum = 0;
		for (int i = 0; i < n; i++){
			cin >> pt[i];
			sum = sum + pt[i];
		}
		vector<int> temp;
		temp.push_back(1);
		pt[0]--;
		int x = 1;
		while (x < sum){
			for (int i = 0; i < n; i++){
				if (pt[i] != 0 && temp[temp.size() - 1] != i + 1){
					temp.push_back(i + 1);
					x++;
					pt[i]--;
					break;
				}
			}
		}
		copy(temp.begin(), temp.end(), ostream_iterator<int>(cout, " "));
	}
	system("pause");
	return 0;
}