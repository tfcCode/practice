
//https://www.luogu.org/problem/T107468
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool num_right(int pt[]) {
	int m1, m2, m3, m4, m5, m6;
	m1 = pt[1] + pt[3] + pt[6] + pt[8];
	m2 = pt[1] + pt[4] + pt[7] + pt[11];
	m3 = pt[8] + pt[9] + pt[10] + pt[11];
	m4 = pt[2] + pt[3] + pt[4] + pt[5];
	m5 = pt[2] + pt[6] + pt[9] + pt[12];
	m6 = pt[5] + pt[7] + pt[10] + pt[12];
	if (m1 == m2&&m2 == m3&&m3 == m4&&m4 == m5&&m5 == m6) {
		return true;
	}
	return false;
}

int main()
{
	int pt[13] = { 0,1,8,2,4,5,6,7,9,10,11,12,3 };

	while (next_permutation(pt + 3, pt + 12)) {
		if (num_right(pt)) {
			for (int i = 1; i <= 12; i++) {
				cout << pt[i] << " ";
			}
			cout << endl;
			break;
		}
	}
	system("pause");
	return 0;
}