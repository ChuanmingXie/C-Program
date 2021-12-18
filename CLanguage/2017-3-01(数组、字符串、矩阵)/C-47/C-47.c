#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a[4][5],i=0,j=0,t;
	srand((unsigned)time(NULL));
	printf("矩阵变换之前:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=rand()%30+21;
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<4;i++)
		t=a[i][1],a[i][1]=a[i][3],a[i][3]=t;

	printf("矩阵变换以后:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
}