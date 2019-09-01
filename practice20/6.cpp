//https://www.nowcoder.com/practice/54404a78aec1435a81150f15f899417d?tpId=37&tqId=21274&tPage=3&rp=&ru=/ta/huawei&qru=/ta/huawei/question-ranking
#include<iostream>
using namespace std;

struct num
{
	int element;
	num *next;
};

void create(num *firstNode, int n)
{
	num *pt;
	cin >> firstNode->element;
	pt = firstNode;
	for (int i = 1; i < n; i++)
	{
		pt->next = new num;
		pt = pt->next;
		cin >> pt->element;
	}
	pt->next = NULL;
}

int main()
{
	num *p, *firstNode;
	int n, m;
	while (cin >> n)
	{
		firstNode = new num;
		create(firstNode, n);
		cin >> m;
		m = n - m;
		p = firstNode;
		for (int i = 0; i < m; i++)
		{
			p = p->next;
		}
		cout << p->element << endl;
		delete firstNode;
	}
	system("pause");
	return 0;
}