/*
1.输入一个n*n的矩阵
2.对副对角线进行积数筛选
3.将筛选出来的积数求和
*/

#include<stdio.h>
#define N 10
int main()
{
	int n=0,i=0,j=0,s1=0,s2=0;
	int a[N][N];
	printf("请输入矩阵阶数n:");
	scanf("%d",&n);
	printf("您需要输入 %d 组,每组 %d 个,共 %d 个\n",n,n,n*n);
	//输入数据
	for(i=0;i<n;i++)
	{
		printf("第 %d 组:\n",i+1);
		for(j=0;j<n;j++)
		{
			printf("第 %d 个:",j+1);
			scanf("%d",&a[i][j]);
		}
	}
	//打印数据
	printf("您输入的方阵如下所示:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	//计算数据
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(((i+j)==(n-1))&&(a[i][j]%2!=0))
				s2+=a[i][j];
			if((i==j)&&(a[i][j]%2==0))
				s1+=a[i][j];
		}
	}
	printf("方阵的副对角线奇数和为: %d\n",s2);
	printf("方阵的主对角线偶数和为: %d\n",s1);
}