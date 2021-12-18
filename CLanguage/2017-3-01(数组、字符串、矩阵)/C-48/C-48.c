#include<stdio.h>
int main()
{
	int a[10]={1,3,5,8,9,11,12,15,18},i=0,j=0,x=0;
	printf("请输入一个插入数据:");
	scanf("%d",&x);

	printf("原始有序数据为:");
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
	printf("从新排序数据为:");
	for(i=0;i<10;i++)
		printf("%3d ",a[i]);

	getch();
}