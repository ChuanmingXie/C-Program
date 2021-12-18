#include<stdio.h>
int main()
{
	int a[10],i=0;
	int *p=a;
	for(;i<10;i++)
		scanf("%d",a+i);
	for(;p<(a+10);p++)
		printf("%d ",*p);		//切记*p就是变量，而p则是地址
	printf("\n");
}