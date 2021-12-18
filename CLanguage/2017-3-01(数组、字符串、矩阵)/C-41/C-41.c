#include<stdio.h>
int main()
{
	int a[10];
	int n=0,i=0,max=0,w=0,t=0,min=0,v=0,s=0;
	float ave=0;

	//确定个数
	printf("请输入数据个数n: ");
	scanf("%d",&n);

	//录入数据
	for(i=0;i<n;i++)
	{
		printf("您输入的第 %4d 个数据为:",i+1);
		scanf("%d",&a[i]);
	}

	//计算平均值
	printf("\n输入的值为:");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		ave+=a[i];
	}
	printf("\n\n数据平均值:  %5.2f\n\n",ave/n);

	//逆序输出
	printf("逆序输出为:");
	for(i=n-1;i>=0;i--)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");

	//输出最大值及下标
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i]) 
		{
			max=a[i];
			w=i;
		}
		if(min>a[i])
		{
			min=a[i];
			v=i;
		}
		w=v=i;       //不要忘记w、v的初始值!!!
	}
	printf("数据最大值: %3d,下标为(下标从0开始):%2d\n\n",max,w);
	

	//最小值放a[0],最大值放a[n]
	t=a[w];	a[w]=a[n-1]; a[n-1]=t;
	s=a[v]; a[v]=a[0]; a[0]=s;
	printf("调整后输出:");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n\n");
}