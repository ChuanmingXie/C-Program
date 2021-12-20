#include<stdio.h>
int main()
{
	int a[10];
	int *p=a;
	void sort(int *x,int n);

	for(;p<(a+10);p++)
		scanf("%d",p);
	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");

	sort(a,10);
	printf("经过排序后得大--->小:\n");
	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");
}

void sort(int *x,int n)
{
	int *i=x,*j=x+n-1,temp=*x;
	while(i<j)
	{
		while((i<j)&&(*j>=temp))
		{j--;*i=*j;}
		while((i<j)&&(*i<=temp))
		{i++;*j=*i;}
	}
	*i=temp;
}