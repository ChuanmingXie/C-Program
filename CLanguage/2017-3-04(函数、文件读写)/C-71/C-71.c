#include<stdio.h>
int main()
{
	int a[10],n=0,j=0,i=0,t=0;
	printf("请输入数据个数:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("请输入第 %d 个:",i+1);
		scanf("%d",&a[i]);
	}

	//冒泡法排序
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]>a[i])
			{t=a[j];a[j]=a[i];a[i]=t;}
		}
	}

	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	getch();

}