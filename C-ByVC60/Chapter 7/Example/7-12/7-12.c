#include<stdio.h>
int main()
{
	void sort(int array[],int n);
	int A[10],i;
	printf("ÇëÊäÈëAµÄÖµ:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}

	sort(A,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

void sort(int array[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				t=array[i];
				array[i]=array[j];
				array[j]=t;
			}
		}
	}
}


