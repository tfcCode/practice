//https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef?tpId=40&tqId=21342&tPage=1&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include<iostream>
#include<string>
using namespace std;

int num;
string str;

struct binary
{
	char data;
	struct binary *left;
	struct binary *right;
};

struct binary *createTree()
{
	struct binary *pt;
	char ch;
	ch = str[num++];
	if (ch == '#')
	{
		pt = NULL;
	}
	else
	{
		pt = new struct binary;
		pt->data = ch;
		pt->left = createTree();
		pt->right = createTree();
	}
	return pt;
}

void printTree(binary *pt)
{
	if (pt != NULL)
	{
		printTree(pt->left);
		cout << pt->data << " ";
		printTree(pt->right);
	}
}

int main()
{
	struct binary *pt;
	while (cin >> str)
	{
		num=0;
		pt = createTree();
		printTree(pt);
		cout << endl;
	}
	system("pause");
	return 0;
}
