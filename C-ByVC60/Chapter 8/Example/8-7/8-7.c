#include<stdio.h>
int main()
{
	int a[10],i=0;
	int *p=a;
	printf("������10������:\n");
	for(;i<10;i++)
		scanf("%d",p++);
			//���¸�ֵ��ԭ������p�Ѿ�Ų����p+10;
	for(p=a,i=0;i<10;i++)
		printf("%d ",*p++);
	printf("\n");
}