#include<stdio.h>
#include<time.h>
int main()
{
	void sort(float *a,int n);
	float arr[10],i=0;
	float *p=arr;
	printf("原始数据:");
	for(;p<(arr+10);p++)
	{
		scanf("%f",p);
	}
	p=arr;
	sort(p,10);
	printf("排序数据:");
	for(;p<(arr+10);p++)
	{
		printf("%g ",*p);
	}
	printf("\n");
}
void sort(float *a,int n)
{
	float *i,*j,temp;
	for(i=a;i<(a+n);i++)
	{
		for(j=i+1;j<(a+n);j++)
		{
			if(*i<*j)
			{
				temp=*i;*i=*j;*j=temp;
			}
		}
	}
}
