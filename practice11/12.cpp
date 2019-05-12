//https://www.nowcoder.com/practice/5190a1db6f4f4ddb92fd9c365c944584?tpId=37&tqId=21249&tPage=2&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	vector<char> tempChar;
	while (getline(cin, s))
	{
		tempChar.clear();
		int len = s.size();
		for (int j = 0; j<26; j++)
		{
			for (int i = 0; i<len; i++)
			{
				if (s[i] - 'a' == j || s[i] - 'A' == j)
				{
					tempChar.push_back(s[i]);
				}
			}
		}
		for (int i = 0, k = 0; (i<len) && k<tempChar.size(); i++)
		{
			if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))//如果是字母，就把tempChar中的放到s中，如果不是（例如？），就跳过，这样
			{                                                            //非字母就保留在了原位置
				s[i] = tempChar[k++];
			}
		}
		cout << s << endl;
	}
	return 0;
}