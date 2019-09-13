
//https://www.nowcoder.com/practice/d2f088e655d44e4a85c16f7b99126211?tpId=40&tqId=21405&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	char ch;
	while (cin >> str)
	{
		for (int i = 0; i < str.size() - 1; i++)
		{
			for (int j = i + 1; j < str.size(); j++)
			{
				if (str[i] > str[j])
				{
					ch = str[i], str[i] = str[j], str[j] = ch;
				}
			}
		}
		cout << str << endl;
	}
	system("pause");
	return 0;
}