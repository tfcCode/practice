
//https://www.nowcoder.com/practice/12e081cd10ee4794a2bd70c7d68f5507?tpId=37&tqId=21308&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Longest_length(string& str2)
{
	string str1;
	str1 = str2;
	reverse(str2.begin(), str2.end());
	int x, y, length = 0, temp;
	for (int i = 0; i < str1.size(); i++)
	{
		for (int j = 0; j < str2.size(); j++)
		{
			x = i, y = j, temp = 0;
			while (str1[x] == str2[y])
			{
				temp++;
				x++, y++;
				if (x == str1.size() || y == str2.size())
				{
					break;
				}
			}
			if (temp > length)
			{
				length = temp;
			}
		}
	}
	cout << length << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		Longest_length(str);
	}
	system("pause");
	return 0;
}