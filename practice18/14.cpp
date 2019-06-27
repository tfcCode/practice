//https://www.nowcoder.com/practice/a632ec91a4524773b8af8694a51109e7?tpId=98&tqId=33028&tPage=10&rp=10&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;
struct number
{
	int element;
	struct number *next;
};
int create(number* &firstNode)
{
	int count = 1;
	number *pt;
	firstNode = new number;
	cin >> firstNode->element;
	pt = firstNode;
	while (1)
	{
		pt->next = new number;
		count++;
		pt = pt->next;
		cin >> pt->element;
		if (cin.get() == '\n')
		{
			break;
		}
	}
	pt->next = NULL;
	return count;
}
int main()
{
	number *firstNode, *pt1, *pt2;
	int n, m, i, j, p;
	n = create(firstNode);
	cin >> m;
	int *pt = new int[m]();
	int k = n / m;
	pt1 = firstNode;
	for (i = 0; i < k; i++)
	{
		pt2 = pt1;
		for (j = 0; j < m; j++)
		{
			pt[j] = pt1->element;
			pt1 = pt1->next;
		}
		for (j = 0, p = m - 1; j < m; j++, p--)
		{
			pt2->element = pt[p];
			pt2 = pt2->next;
		}
	}
	for (number *pt = firstNode; pt != NULL; pt = pt->next)
	{
		cout << pt->element << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}