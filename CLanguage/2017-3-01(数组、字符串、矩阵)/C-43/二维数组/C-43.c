#include<stdio.h>
int main()
{
	int a[5][5]={0},i=0,j=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			a[i][j]=5*i+j+1;

	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}

}