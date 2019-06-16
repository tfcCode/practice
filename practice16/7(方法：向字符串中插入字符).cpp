//https://www.nowcoder.com/practice/b0850698cb41449188344cdb647f3e99?tpId=8&tqId=10997&tPage=1&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
#include<iostream>
#include<string>
using namespace std;
class Replacement
{
public:
	string replaceSpace(string iniString, int length)
	{
		string str = "";
		int i;
		for (i = 0; i<length; i++)
		{
			if (iniString[i] == ' ')
			{
				str = str + "%20";
			}
			else
			{
				str = str + iniString[i];
			}
		}
		return str;
	}
};