#include<stdio.h>
int main()
{
	int a[30]={0},b[6]={0},i=0,j=0;
	for(i=0;i<30;i++)
		a[i]=2*(i+1);
	for(i=0;i<30;i++)
	{
		printf("%4d\t",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	printf("\n");

	for(j=0;j<6;j++)
	{
		for(i=j*5;i<j*5+5;i++)
		{
			b[j]+=a[i];
		}
		printf("b[%d]=%3d\n",j+1,b[j]/5);
	}
	printf("\n");
}