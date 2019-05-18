//https://www.nowcoder.com/practice/539054b4c33b4776bc350155f7abd8f5?tpId=37&tqId=21263&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i, m, count1, count2, count3, count4;
	while (getline(cin, s))
	{
		m = s.length();
		count1 = count2 = count3 = count4 = 0;
		for (i = 0; i < m; i++)
		{
			if (s[i] >= 'a'&&s[i] <= 'z' || s[i] >= 'A'&&s[i] <= 'Z')
			{
				count1++;
			}
			else if (s[i] == ' ')
			{
				count2++;
			}
			else if (s[i] >= '0'&&s[i] <= '9')
			{
				count3++;
			}
			else
			{
				count4++;
			}
		}
		cout << count1 << endl << count2 << endl << count3 << endl << count4 << endl;
	}
	system("pause");
	return 0;
}