#include<stdio.h>
int main()
{
	int SelectMax(int a[3][4]);
	int Array[3][4],i=0,j=0;
	printf("请输入矩阵的值:\n");
	for(i=0;i<3;i++)
	{
		//printf("请输入第一行矩阵的值:");
		for(j=0;j<4;j++)
		{
			scanf("%d",&Array[i][j]);
		}
	}
	printf("您输入的矩阵为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",Array[i][j]);
		}
		printf("\n");
	}

	printf("Max=%d\n",SelectMax(Array));
}
int SelectMax(int a[3][4])
{
	int i,j,t=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(t<a[i][j])
				t=a[i][j];
		}
	}
	return t;
}