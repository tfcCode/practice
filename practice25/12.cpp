

//https://www.nowcoder.com/practice/827e316ddc824cb6ac6825c1f720ed02?tpId=98&tqId=32929&tPage=6&rp=6&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include <iostream>
#include<string>
#include<deque>
using namespace std;
int main()
{
	string str;
	int k;
	deque<char> que;
	while (cin >> str >> k) {
		que.push_back(str[0]);
		for (int i = 1; i < str.size(); i++) {
			while (!que.empty() && k > 0) {
				if (str[i] > que.back()) {
					que.pop_back();
					--k;
				}
				else {
					break;
				}
			}
			que.push_back(str[i]);
		}
		while (k > 0) {
			que.pop_back();
			k--;
		}
		while (!que.empty()) {
			cout << que.front();
			que.pop_front();
		}
		cout << endl;
	}
	system("pause");
	return 0;
}