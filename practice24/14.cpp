

//https://www.nowcoder.com/practice/6a6a0e4d6dfa4d89acd73bdfec79cf28?tpId=98&tqId=32848&tPage=2&rp=2&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string s;
	cin >> s;
	int l = s.length();
	cout << (l + 1) * 26 - l << endl;
	system("pause");
	return 0;
}