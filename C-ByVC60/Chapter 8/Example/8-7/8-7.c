#include<stdio.h>
int main()
{
	int a[10],i=0;
	int *p=a;
	printf("情输入10个数据:\n");
	for(;i<10;i++)
		scanf("%d",p++);
			//重新赋值的原因在于p已经挪到了p+10;
	for(p=a,i=0;i<10;i++)
		printf("%d ",*p++);
	printf("\n");
}