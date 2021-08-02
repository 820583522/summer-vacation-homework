#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int a, int b)
{
	if (a>b)
		return(a + b);
	else
		return(a - b);
}
int main()
{
	int a = 4;
	int b = ++(a++);
	return 0;
}