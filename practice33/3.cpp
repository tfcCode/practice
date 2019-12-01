
//https://www.nowcoder.com/practice/571cfbe764824f03b5c0bfd2eb0a8ddf?tpId=85&tqId=29860&tPage=2&rp=2&ru=/ta/2017test&qru=/ta/2017test/question-ranking
#include <iostream>
#include<vector>
using namespace std;

struct map {
	int x, y;
};
map Map;

vector<map> temp;
vector<map> result;

int **pt;
int m, n, p;
int min_p = 999999;

void find_path(int i, int j, int cur_p) {
	if (i<1 || i>n || j<1 || j>m || pt[i][j] == 0 || cur_p > p) {
		return;
	}

	Map.x = i;
	Map.y = j;
	pt[i][j] = 0;
	temp.push_back(Map);

	if (i == 1 && j == m&&cur_p <= p) {
		if (cur_p < min_p) {
			min_p = cur_p;
			result = temp;
		}
		pt[i][j] = 1;
		temp.pop_back();
		return;
	}

	if (cur_p <= p) {
		find_path(i - 1, j, cur_p + 3);
		find_path(i + 1, j, cur_p);
		find_path(i, j - 1, cur_p + 1);
		find_path(i, j + 1, cur_p + 1);
	}

	pt[i][j] = 1;
	temp.pop_back();
}

void output(vector<map> x) {
	cout << "[" << x[0].x - 1 << "," << x[0].y - 1 << "]";
	for (int i = 1; i < x.size(); i++) {
		cout << ",[" << x[i].x - 1 << "," << x[i].y - 1 << "]";
	}
	cout << endl;
}

int main() {
	cin >> n >> m >> p;
	pt = new int*[n + 2];
	for (int i = 0; i < n + 2; i++) {
		pt[i] = new int[m + 2]();
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> pt[i][j];
		}
	}

	find_path(1, 1, 0);
	if (result.size() > 0) {
		output(result);
	}
	else {
		cout << "Can not escape!" << endl;
	}

	system("pause");
	return 0;
}
