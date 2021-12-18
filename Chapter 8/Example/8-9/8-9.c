#include<stdio.h>
int main()
{
	void inv(int *x,int n);
	int i,arr[10],*p=arr;
	printf("输入原始数据:");
	for(i=0;i<10;i++,p++)
		scanf("%d",p);
	printf("\n");

	p=arr;
	inv(p,10);
	printf("输出调整数据:");
	for(p=arr;p<(arr+10);p++)
		printf("%d ",*p);
	printf("\n");
}
void inv(int *x,int n)
{
	int *i,*j,temp;
	for(i=x,j=x+n-1;i<=j;i++,j--)
	{
		temp=*i;*i=*j;*j=temp;
	}
}

