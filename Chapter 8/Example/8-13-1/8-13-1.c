#include<stdio.h>
int main()
{
	int a[4]={1,3,5,7};
	int (*p)[4]=&a;
	printf("%d\n",(*p)[3]);
}