#include<stdio.h>
int main()
{
	int a[10],i=0;
	int *p=a;
	for(;i<10;i++)
		scanf("%d",a+i);
	for(;p<(a+10);p++)
		printf("%d ",*p);		//�м�*p���Ǳ�������p���ǵ�ַ
	printf("\n");
}