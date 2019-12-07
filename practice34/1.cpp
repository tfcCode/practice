
//https://www.nowcoder.com/practice/a6a656249f404eb498d16b2f8eaa2c60?tpId=85&tqId=29898&tPage=4&rp=4&ru=/ta/2017test&qru=/ta/2017test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
	int n;
	while (cin >> n){
		string *pt = new string[n];
		for (int i = 0; i < n; i++){
			cin >> pt[i];
		}
		string temp;
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if ((pt[i] + pt[j]) < (pt[j] + pt[i])){
					temp = pt[i], pt[i] = pt[j], pt[j] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++){
			cout << pt[i];
		}
		cout << endl;
		delete[]pt;
	}
	system("pause");
	return 0;
}