//指向数组元素的指针变量
#include<stdio.h>
int main()
{
	int a[3][4]={{1,3,5,7},{9,11,13,15},{2,4,6,8}};
	int *p=a[0];
	for(;p<(a[0]+12);p++)
	{
		if((p-a[0])%4==0)
			printf("\n");
		printf("%5d",*p);
	}
	printf("\n");
}