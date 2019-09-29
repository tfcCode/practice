
//https://www.nowcoder.com/practice/10f2fab3ceb043088d2a5cca339d4413?tpId=98&tqId=32956&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main() 
{
	int n, k, x;
	cin >> n >> k;
	map<int, int> Map;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		Map[x]++;
	}
	if (k == 1)
	{
		cout << Map.size() << endl;
	}
	else
	{
		int num;
		for (map<int, int>::iterator pt = Map.begin(); pt != Map.end(); pt++)
		{
			x = (pt->first)*k;
			if (Map.find(x) == Map.end())
			{
				continue;
			}
			if (pt->second == 0 || Map[x] == 0)
			{
				continue;
			}
			num = min(pt->second, Map[x]);
			n = n - num;
			Map[x] = Map[x] - num;
		}
		cout << n << endl;
	}

	system("pause");
	return 0;
}