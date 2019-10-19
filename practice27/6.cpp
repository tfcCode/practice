

https://www.nowcoder.com/practice/849b9e545f4742398d278f5dc4e003d2?tpId=98&tqId=32989&tPage=9&rp=9&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
	int n;
	int x;
	map<int, int> temp;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			cin >> x;
			temp[x]++;
		}
		for (map<int, int>::iterator it = temp.begin(); it != temp.end(); it++){
			if (it->second % 2 == 1){
				cout << it->first << endl;
				break;
			}
		}
		temp.clear();
	}
	system("pause");
	return 0;
}