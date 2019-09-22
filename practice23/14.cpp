
//https://www.nowcoder.com/practice/0cff324157a24a7a8de3da7934458e34?tpId=98&tqId=32912&tPage=5&rp=5&ru=/ta/2019test&qru=/ta/2019test/question-ranking
#include<iostream>
using namespace std;

struct Node
{
	int element;
	Node *next;
};

Node* createNode()
{
	Node *pt = new Node;
	Node *current = pt;
	for (int i = 1; i <= 7; i++)
	{
		current->element = i;
		current->next = new Node;
		current = current->next;
	}
	current->next = NULL;
	return pt;
}

void find(int Index, Node *pt)
{
	for (int i = 0; i < 7 - Index; i++)
	{
		pt = pt->next;
	}
	cout << pt->element << endl;
}

int main()
{
	Node *first;
	int n;
	while (cin >> n)
	{
		first = createNode();
		find(n, first);
	}
	system("pause");
	return 0;
}