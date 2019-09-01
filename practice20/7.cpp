//https://www.nowcoder.com/practice/a83e1893f5df4285a1796b34e1e7c9b3?tpId=98&tqId=32906&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void xabc(string& str1, string& str2)
{
	int i, m, n;
	m = str1.size();
	n = str2.size();
	int dic1[256] = { 0 };
	int dic2[256] = { 0 };
	for (i = 0; i < m; i++)
	{
		dic1[(int)str1[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		dic2[(int)str2[i]]++;
	}
	int flag = 1;
	for (i = 0; i < 256; i++)
	{
		if (dic1[i] > dic2[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}

int main()
{
	string str1, str2;
	
	while (cin >> str1 >> str2)
	{
		xabc(str1, str2);
	}
	
	system("pause");
	return 0;
}