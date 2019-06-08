//https://www.nowcoder.com/practice/dfeed0e0e4624814b122265e859783b2?tpId=40&tqId=21413&tPage=4&rp=4&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int i, j, n, length, k;
	string str, temp;
	while (cin >> n)
	{
		cin.get();
		vector<string> m;
		for (i = 0; i < n; i++)
		{
			getline(cin, str);
			if (str == "stop")
			{
				break;
			}
			if (str != " ")
			{
				m.push_back(str);
			}
		}
		length = m.size();
		int *pt = new int[length];
		vector<string>::iterator p, p1;
		for (i = 0, p = m.begin(); i < length; i++, p++)
		{
			pt[i] = (*p).size();
		}
		for (i = 0, p = m.begin(); i < length - 1; i++, p++)
		{
			for (j = i + 1, p1 = p + 1; j < length; j++, p1++)
			{
				if (pt[i]>pt[j])
				{
					temp = *p, *p = *p1, *p1 = temp;
					k = pt[i], pt[i] = pt[j], pt[j] = k;
				}
			}
		}
		for (p = m.begin(); p != m.end(); p++)
		{
			cout << *p << endl;
		}
	}
	system("pause");
	return 0;
}