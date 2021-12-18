#include<stdio.h>
int main()
{
	float ave(int p[],int n);
	int m=0,i=0,a[10];
	printf("请输入数据个数:");scanf("%d",&m);
	printf("请输入计算数据:\n");
	for(;i<m;i++)
		scanf("%d",&a[i]);

	printf("平均值为:%g",ave(a,m));
	getch();
}

float ave(int p[],int n)
{
	int i=0;
	float sum=0;
	for(;i<n;i++)
	{
		sum+=p[i];
	}
	return sum/n;
}