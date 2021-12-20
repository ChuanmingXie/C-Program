#include<stdio.h>
int main()
{
	float average(float array[],int n);
	float score1[5];
	float score2[10];
	int i,j;
	printf("«Î ‰»Î1∞‡≥…º®:");
	for(i=0;i<5;i++)	
	{
		scanf("%f",&score1[i]);
	}
	printf("«Î ‰»Î2∞‡≥…º®:");
	for(j=0;j<10;j++)	
	{
		scanf("%f",&score2[j]);
	}

	printf("%g\n%g\n",average(score1,5),average(score2,10));
}

float average(float array[],int n)
{
	int k;
	float ave=0;
	for(k=0;k<n;k++)
	{
		ave+=array[k];
	}
	return ave/n;
}