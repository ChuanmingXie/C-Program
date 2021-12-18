/*
构造矩阵
以列为单位返回最大值
将返回的值放入数组中
将新数组的值求和
*/


#include<stdio.h>
#define M 4
#define N 3
int main()
{
	int i=0,j=0,s=0;
	int a[M][N],max[N];
	//构造矩阵
	printf("请输入矩阵数据:\n");
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);

	//输出原始矩阵
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\n");	
	
	//填max[i];
	for(i=0;i<N;i++)
	{
		max[i]=a[0][i];
		for(j=0;j<M;j++)
		{
			if(a[j+1][i]>a[j][i])
				max[i]=a[j+1][i];
		}
	}

	for(i=0;i<N;i++)
	{
		printf("%4d",max[i]);
		s+=max[i];
	}
	printf("\nsum=%d\n",s);
	getch();
}
