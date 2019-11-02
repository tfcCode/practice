

//https://www.nowcoder.com/practice/cf24906056f4488c9ddb132f317e03bc?tpId=37&tqId=21266&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<vector>
using namespace std;

int n, m;
vector<vector<int>> maze;
vector<vector<int>> best_path;
vector<vector<int>> temp_path;

void Trace_path(int i, int j) {
	maze[i][j] = 1;
	temp_path.push_back({ i, j });
	if (i == n - 1 && j == m - 1) {
		if (best_path.empty() || temp_path.size() < best_path.size()) {
			best_path = temp_path;
		}
	}
	if (i - 1 >= 0 && maze[i - 1][j] == 0) {
		Trace_path(i - 1, j);
	}
	if (i + 1 < n&&maze[i + 1][j] == 0) {
		Trace_path(i + 1, j);
	}
	if (j - 1 >= 0 && maze[i][j - 1] == 0) {
		Trace_path(i, j - 1);
	}
	if (j + 1 < m&&maze[i][j + 1] == 0) {
		Trace_path(i, j + 1);
	}
	maze[i][j] = 0;
	temp_path.pop_back();
}

int main() {
	int x;
	while (cin >> n >> m) {
		maze = vector<vector<int>>(n, vector<int>(m, 0));
		best_path.clear();
		temp_path.clear();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> x;
				maze[i][j] = x;
			}
		}
		Trace_path(0, 0);
		for (int i = 0; i < best_path.size(); i++) {
			cout << '(' << best_path[i][0] << ',' << best_path[i][1] << ')' << endl;
		}
	}
	system("pause");
	return 0;
}