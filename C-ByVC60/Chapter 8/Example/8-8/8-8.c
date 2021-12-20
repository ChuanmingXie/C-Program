#include<stdio.h>
int main()
{
	void inv(int *arr,int n);
	//void inv(int arr[],int n);
	
	int a[11]={9,2,10,-1,4,8,-4,20,11,3,21},i;
	printf("原始数据:");
	for(i=0;i<11;i++)
		printf("%4d",a[i]);
	printf("\n");
	inv(a,11);

	printf("调整后数:");
	for(i=0;i<11;i++)
		printf("%4d",a[i]);
	printf("\n");
}

void inv(int *arr,int n)
{
	int *i,*j,temp;
	for(i=arr,j=arr+n-1;i<=j;i++,j--)
	{
		temp=*i;*i=*j;*j=temp;
	}
}
/*
void inv(int arr[],int n)
{
	int i=0,j=n-1;
	int temp;
	for(;i<=j;i++,j--)
	{
		temp=arr[i];arr[i]=arr[j];arr[j]=temp;
	}
}
*/