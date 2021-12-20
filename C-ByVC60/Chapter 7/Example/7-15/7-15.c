#include<stdio.h>
int a=4,b=7;
int main()
{
	int max(int a,int b);
	int a=10;
	printf("Max=%d\n",max(a,b));
}

int max(int a,int b)
{
	return (a>b?a:b);
}