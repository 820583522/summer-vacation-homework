#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

long long fibonacci(int x)
{
	assert(x >= 0);
	if (x == 1)
		return 0;
	int n0 = 0, n1 = 1, n2 = 1;
	for (int i = 3; i <= x; ++i)
	{
		n2 = n0 + n1;
		n0 = n1;
		n1 = n2;
	}
	return n2;
}

//int main()
//{
//	for (int i = 1; i < 20; ++i)
//		printf("%d  ", fibonacci(i));
//	printf("\n");
//	return 0;
//}

int Numberof1(unsigned int x)
{
	int i = 0;
	int count = 0;
	while (i < 32)
	{
		count += ((x >> i++) & 1);
	}
	return count;
} 
int fun(int x)
{
	int count = 0;
	while (x){
		count++;
		x = x & (x - 1);
	} 
	return count;
}
//int main()
//{
//	for (int i = 0; i < 100; ++i)
//	{
//		printf("%d在内存中中1的个数%d\n", i, Numberof1(i));
//		printf("%d在内存中中1的个数%d\n", i, fun(i));
//	}
//	return 0;
//}
int Change(int* pX)
{
	int y = 8;
	y = y - *pX;
	pX = &y;
	return 0;
}
//int main()
//{
//	int xx = 3;
//	int *pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}
// 1001 1011
// 1110 0101

//求链表倒数第k个节点
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* BottonNode(ListNode* phead, int k)
{
	ListNode* fast = phead;
	ListNode* slow = phead;
	while (k&&fast)
	{
		fast = fast->next;
		k--;
	}
	while (k)
		return NULL;
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}
