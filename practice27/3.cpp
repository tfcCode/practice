

//https://www.nowcoder.com/practice/d4f843fc299a493ca9dbd76122a0a3d3?tpId=98&tqId=32971&tPage=8&rp=8&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int m, n;
	vector<int> temp;
	while (cin >> n >> m) {
		int *v1 = new int[n];
		int *v2 = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> v1[i];
			v2[i] = 0;
		}
		getchar();
		string str;
		int a, sum, y, b;
		for (int i = 0; i < m; i++) {
			getline(cin, str);
			if (str.size() == 3) {
				a = str[2] - '0' - 1;
				y = v2[a];
				temp.push_back(v2[a]);
			}
			else {
				a = str[2] - '0' - 1;
				sum = str[4] - '0';
				while (sum > 0) {
					b = v1[a] - v2[a];
					if (sum >= b) {
						v2[a] += b;
						sum = sum - b;
						a++;
						y = v2[a];
					}
					else {
						v2[a] += sum;
						sum = 0;
						y = v2[a];
					}
				}
			}
		}
		for (int i = 0; i < temp.size(); i++) {
			cout << temp[i] << endl;
		}
		temp.clear();
	}
	system("pause");
	return 0;
}