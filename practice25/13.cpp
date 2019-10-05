

//https://www.nowcoder.com/practice/08707b9b484f4ca4943f108c709dab96?tpId=98&tqId=32933&tPage=6&rp=6&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int n = s.length(), cnt = 0, Max = 0;
	for (int i = 0; i<n; i++) {
		if (s[i] == '[')
			cnt++;
		else if (s[i] == ']')
			cnt--;
		Max = max(Max, cnt);
	}
	cout << Max << endl;
	return 0;
}