#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个
//函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。时间复杂度 O(row + col)
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