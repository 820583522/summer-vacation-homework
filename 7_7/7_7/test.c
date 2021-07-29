#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
bool NumSearch(int(*pa)[],int row,int col,int val)
{
	int i = 0, j = 0;
	while (i < col)
	{
		while (j < row)
		{
			
			if (*((*pa) + j) + i < val)
			{
				i++;
			}
			else if (*((*pa) + j) + i == val)
			{
				return true;
			}
			else 
			{
				i--;
				
			}
			j++;
		}
	}
	return false;
}

//int main()
//{
//	int a[4][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	NumSearch(a, 4, 4, 5);
//	return 0;
//}

int main()
{
	long a;
	printf("%d\n", sizeof(a));
	return 0;
}