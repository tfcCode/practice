//https://www.nowcoder.com/practice/181a1a71c7574266ad07f9739f791506?tpId=37&tqId=21288&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2, temp;
	int m, n, i, j, temp1, count, x, y, size;
	while (cin >> str1 >> str2)
	{
		m = str1.length();
		n = str2.length();
		if (m > n)
		{
			temp = str1, str1 = str2, str2 = temp;
			temp1 = m, m = n, n = temp1;
		}
		temp.clear();
		for (i = 0; i < m; i++)
		{
			count = 0;
			for (j = 0; j < n; j++)
			{
				x = i, y = j;
				while (str1[x] == str2[y])
				{
					count++;
					x++;
					y++;
				}
				size = temp.size();
				if (count > size)
				{
					temp.clear();
					temp.insert(temp.begin(), str1.begin() + i, str1.begin() + x);
				}
				count = 0;
			}
		}
		cout << temp << endl;
	}
	system("pause");
	return 0;
}