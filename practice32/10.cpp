
//https://www.nowcoder.com/practice/9d1559511b3849deaa71b576fa7009dc?tpId=85&tqId=29842&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool judge(string &str) {
	for (int i = 0, j = str.size() - 1; i < str.size() / 2; i++, j--) {
		if (str[i] != str[j]) {
			return false;
		}
	}
	return true;
}

int main(){
	string str, s, temp;
	cin >> str >> s;
	int count = 0;
	for (int i = 0; i <= str.size(); i++) {
		temp = str;
		temp.insert(i, s);
		if (judge(temp)) {
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}
