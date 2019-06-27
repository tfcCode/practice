//https://www.nowcoder.com/practice/27c833289e5f4f5e9ba3718ce9136759?tpId=98&tqId=32950&tPage=7&rp=7&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
struct number
{
	int element;
	struct number *next;
};
number * create()
{
	number *firstNode, *pt;
	firstNode = new number;
	cin >> firstNode->element;
	pt = firstNode;
	while(1)
	{
		pt->next = new number;
		pt = pt->next;
		cin >> pt->element;
		if (cin.get() == '\n')
		{
			break;
		}
	}
	pt->next = NULL;
	return firstNode;
}
int main()
{
	int temp;
	number *pt1, *pt2, *pt, *p;
	pt1 = create();
	pt2 = create();
	pt = pt1;
	while (1)
	{
		if (pt->next == NULL)
		{
			pt->next = pt2;
			break;
		}
		pt = pt->next;
	}
	for (pt = pt1; pt != NULL; pt = pt->next)
	{
		for (p = pt->next; p != NULL; p = p->next)
		{
			if (pt->element > p->element)
			{
				temp = pt->element, pt->element = p->element, p->element = temp;
			}
		}
	}
	for (pt = pt1; pt != NULL; pt = pt->next)
	{
		cout << pt->element << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}