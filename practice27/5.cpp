
//https://www.nowcoder.com/practice/59b4ff4167e245c199922880c2733488?tpId=98&tqId=32985&tPage=9&rp=9&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

void main(){
	map<char, int> pt;
	string str;
	cin >> str;
	int temp = 0, x;
	for (int i = 0; i < str.size(); i++){
		x = 0;
		for (int j = i; j < str.size(); j++){
			if (pt[str[j]]>0){
				break;
			}
			else{
				x++;
				pt[str[j]]++;
			}
		}
		if (x > temp){
			temp = x;
		}
		pt.clear();
	}
	cout << temp << endl;
	system("pause");
}