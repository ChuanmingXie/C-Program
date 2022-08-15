/*N 个数中最大值*/
#include <stdio.h>
#include<conio.h>
#define N 10
int main()
{
	/*
	int max2();
	printf("最大值为%d\n",max2());
	*/
	
	int max(int a[]);
	int i,a[N];
	printf("请输入测试数据,空格分隔\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("最大值为%d\n",max(a));
	getch();
	return 0;
}

int max(int a[])
{
	int M=a[0],i;
	for(i=0;i<N;i++)
	{
		if(a[0]<a[i]) M=a[i];
	}
	return M;
}


int max2()
{
	int i=0,a,max;
	printf("请输入测试数据,空格分隔\n01 02 03 04 05 06 07 08 09 10\n");
	scanf("%d",&max);		//把第一个当作最大值
	while(i<N-1)
	{
		scanf("%d",&a);
		if(a>max)		//将后面的数依次与其比较并交换
			max=a;
		++i;
	}
	return max;
}
