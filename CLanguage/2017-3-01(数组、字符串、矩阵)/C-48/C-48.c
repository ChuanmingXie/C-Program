#include<stdio.h>
int main()
{
	int a[10]={1,3,5,8,9,11,12,15,18},i=0,j=0,x=0;
	printf("������һ����������:");
	scanf("%d",&x);

	printf("ԭʼ��������Ϊ:");
	for(i=0;i<9;i++)
		printf("%3d ",a[i]);
	printf("\n");

	for(i=0;i<9;i++)
	{
		if(a[i]>x)
		{
			for(j=9;j>i;j--)a[j]=a[j-1];
			a[i]=x;
			break;
		}
		if(x>=a[8])
			a[9]=x;
	}
	printf("������������Ϊ:");
	for(i=0;i<10;i++)
		printf("%3d ",a[i]);

	getch();
}