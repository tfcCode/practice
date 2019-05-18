//https://www.nowcoder.com/practice/f9a4c19050fc477e9e27eb75f3bfd49c?tpId=37&tqId=21264&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
	int n, i, j, m, a[10], b[10];
	while (cin >> n)
	{
		for (i = 0; i < n; i++)
		{
			cin >> a[i];  //重量
		}
		for (i = 0; i < n; i++)
		{
			cin >> b[i];  //数量
		}
		vector<int> temp;
		temp.push_back(0);
		for (i = 1; i <= b[0]; i++)
		{
			temp.push_back(i*a[0]);
		}
		for (i = 1; i < n; i++)
		{
			int size = temp.size();
			for (j = 1; j <= b[i]; j++)
			{
				for (m = 0; m < size; m++)
				{
					int wei = temp[m] + j*a[i];
					if ((find(temp.begin(), temp.end(), wei)) == temp.end())
					{
						temp.push_back(wei);
					}
				}
			}
		}
		cout << temp.size() << endl;
	}
	system("pause");
	return 0;
}