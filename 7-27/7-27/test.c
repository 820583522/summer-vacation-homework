#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ��
//����������������һ����ά�����һ���������ж��������Ƿ��и�������ʱ�临�Ӷ� O(row + col)
bool Search(int a[][4],int row,int col,int x)
{
	assert(a);
	int i = 0, j = col - 1;
	while (i<row&&j>=0)
	{
		if (a[i][j]> x)
		{
			j--;
		}
		else if (a[i][j]== x)
		{
			return true;
		}
		else
		{
			i++;
		}
	}
	return false;
}

void ReplaceSpace(char* a,int length)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (a[i]== ' ')
			count++;
	}
	int end = length;
	while (count)
	{
		if (a[end]!= ' ')         //We are     happy/0
		{                         //We are happy/0
			a[end + 2 * count] = a[end];
			end--;
		}
		else
		{
			a[end + 2 * count] = '0';
			a[end + 2 * count - 1] = '2';
			a[end + 2 * count - 2] = '%';
			end--;
			count--;
		}
	}
}
int main()
{
	int a = 5;
	if (a = 0)
	{
		printf("%d", a - 10);
	}
	else
	{
		printf("%d", a++);
	}
	return 0;
}