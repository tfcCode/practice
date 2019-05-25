//https://www.nowcoder.com/practice/2c81f88ecd5a4cc395b5308a99afbbec?tpId=37&tqId=21315&tPage=5&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2, temp, temp1;
	int m, i, j, count, x, y, size;
	while (cin >> str1)
	{
		str2 = str1;
		m = str1.size();
		for (i = 0; i < m; i++)
		{
			count = 0;
			for (j = 0; j < m; j++)
			{
				count = 0;
				x = i, y = j;
				while (str1[x] == str2[y])
				{
					if (str1[x]<'0' || str1[x]>'9')
					{
						break;
					}
					x++;
					y++;
					count++;
				}
				size = temp.size();
				if (count > size)
				{
					temp.clear();
					temp.insert(temp.begin(), str1.begin() + i, str1.begin() + x);
				}
			}
		}
		cout << temp;
		size = temp.size();
		for (i = 0; i < m; i++)
		{
			count = 0;
			for (j = 0; j < m; j++)
			{
				count = 0;
				x = i, y = j;
				while (str1[x] == str2[y])
				{
					if (str1[x]<'0' || str1[x]>'9')
					{
						break;
					}
					x++;
					y++;
					count++;
				}
				if (count == size)
				{
					temp1.clear();
					temp1.insert(temp1.begin(), str1.begin() + i, str1.begin() + x);
					if (temp != temp1)
					{
						cout << temp1;
					}
				}
			}
		}
		cout << "," << size << endl;
		temp.clear();
		temp1.clear();
		str1.clear();
		str2.clear();
	}
	system("pause");
	return 0;
}