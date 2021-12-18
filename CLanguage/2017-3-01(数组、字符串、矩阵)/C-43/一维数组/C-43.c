#include<stdio.h>
int main()
{
	int a[25]={0},i=0,j=0;
	for(i=0;i<25;i++)
	{
		a[i]=i+1;
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j<=i)printf("%4d",a[5*i+j]);
			//else continue;
		}
		printf("\n");
	}
}