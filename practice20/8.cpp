//https://www.nowcoder.com/practice/1b46eb4cf3fa49b9965ac3c2c1caf5ad?tpId=37&tqId=21285&tPage=4&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;

void countnumber(string& str)
{
	int m = str.size();
	int *pt = new int[m];
	for (int i = 0; i < m; i++)
	{
		pt[i] = str[i] - '0';
	}
	int x = 0, remain, sum, num = 0;
	for (int i = 0; i < m;)
	{
		remain = 0;
		for (int j = i; j < m; j++)
		{
			sum = remain * 10 + pt[j];
			remain = sum % 2;
			pt[j] = sum / 2;
		}
		if (remain == 1)
		{
			num++;
		}
		while (pt[i] == 0)
		{
			i++;
		}
	}
	cout << num << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		countnumber(str);
	}
	system("pause");
	return 0;
}