
//https://www.nowcoder.com/practice/93f6c5b032bf473696373ab0d834b0fc?tpId=98&tqId=32897&tPage=4&rp=4&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<string>
using namespace std;

void palindrome_length(string& str)
{
	for (int i = 0; i <= str.size(); i = i + 2)
	{
		str.insert(i, 1, '#');
	}
	int len = str.size();   //处理后字符串长度
	int rightside = 0;      //右边界
	int rightSidecenter = 0;//右边界对应回文串中心
	int *halflenArr = new int[len]();  //保存以每个字符为中心的回文串长度的一半
	int center = 0;         //记录回文中心
	int longestHalf = 0;    //记录最长回文长度
	bool needcalc;
	for (int i = 0; i < len; i++)
	{
		needcalc = true;
		if (rightside > i)  //如果在右边界的覆盖之内
		{
			int leftCenter = rightSidecenter * 2 - i;  // 计算相对rightSideCenter的对称位置
			halflenArr[i] = halflenArr[leftCenter];    //根据回文性质得到（对称）
			if (i + halflenArr[i] > rightside)      // 如果超过了右边界，进行调整
			{
				halflenArr[i] = rightside - i;
			}
			if (i + halflenArr[i] < rightside)   // 如果根据已知条件计算得出的最长回文小于右边界，则不需要扩展了
			{
				needcalc = false;
			}
		}
		if (needcalc)
		{
			while (i - 1 - halflenArr[i] >= 0 && i + 1 + halflenArr[i] < len)
			{
				if (str[i + 1 + halflenArr[i]] == str[i - 1 - halflenArr[i]])
				{
					halflenArr[i]++;
				}
				else
				{
					break;
				}
			}

			// 更新右边界及中心
			rightside = i + halflenArr[i];
			rightSidecenter = i;

			// 记录最长回文串
			if (halflenArr[i] > longestHalf)
			{
				center = i;
				longestHalf = halflenArr[i];
			}
		}
	}
	for (int i = center - longestHalf + 1; i <= center + longestHalf; i = i + 2)
	{
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	string str;
	while (cin >> str)
	{
		palindrome_length(str);
	}
	system("pause");
	return 0;
}