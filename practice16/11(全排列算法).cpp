/*
【1】将规模为nn的全排列问题转化为规模为n−1n−1的全排列问题。

基本思想就是：任意选一个数（一般从小到大或者从左到右）打头，对后面的n - 1个数进行全排列。

例如：（A、B、C、D）的全排列为

A后面跟（B、C、D）的全排列
B后面跟（A、C、D）的全排列
C后面跟（A、B、D）的全排列
D后面跟（A、B、C）的全排列
【2】将规模为n−1n−1的全排列问题转化为规模为n−2n−2的全排列问题。实现方法类似【1】。
【3】将规模为n−2n−2的全排列问题转化为规模为n−3n−3的全排列问题。实现方法类似【1】。

以此类推….
最终，问题的规模一级一级降至1, 1个元素的全排列就是它本身，这也就是递归出口。
*/
//https://www.nowcoder.com/practice/5632c23d0d654aecbc9315d1720421c1?tpId=40&tqId=21374&tPage=3&rp=3&ru=/ta/kaoyan&qru=/ta/kaoyan/question-ranking
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

void swap(char *a, char *b)
{
	char ch;
	ch = *a, *a = *b, *b = ch;
}
//检查[from,to)之间的元素和第to号元素是否相同
bool isRepeat(string A, int from, int to)
{
	bool flag = false;//初始为false，代表不重复元素
	for (int i = from; i<to; i++)
	{
		if (A[to] == A[i])
		{
			flag = true;
			break;
		}
	}
	return flag;
}

void permutation(string A, int k, int n, int & count)  //参数值为传值调用，不会改变上一级的string变量A
{
	if (k == 1)//递归出口，此时打印整个数组。
	{
		count++;
		cout << count << " : ";
		cout << A << endl;
	}
	else
	{
		for (int j = n - k; j<n; j++)
		{
			if (!isRepeat(A, n - k, j))
			{
				swap(&A[n - k], &A[j]);
				permutation(A, k - 1, n, count);//参数值为传值调用，不会改变上一级的string变量A
				//swap(&A[n - k], &A[j]);  故不用再次交换
			}
		}
	}
}
int main()
{
	string str;
	int count;
	while (cin >> str)
	{
		count = 0;
		sort(str.begin(), str.end());
		permutation(str, str.size(), str.size(), count);
		cout << endl;
	}
	system("pause");
	return 0;
}