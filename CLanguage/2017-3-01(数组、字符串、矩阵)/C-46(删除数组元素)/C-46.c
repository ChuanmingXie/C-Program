#include<stdio.h>
int main()
{
	int a[10]={0},i=0,j=0,m=0,n=0;
	//输入参数
	printf("请输入数组a[10]:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n");
	printf("\n请输入要删除的值:");
	scanf("%d",&n);

	//功能计算
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			for(j=i;j<9;j++)
				a[j]=a[j+1];
				i--;m++;continue;
		}
	}

	//输出
	for(i=0;i<10-m;i++)
	{
		printf("%d  ",a[i]);
	}
	getch();
}
