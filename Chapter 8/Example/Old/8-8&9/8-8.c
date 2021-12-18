#include<stdio.h>
int main()
{
	int a[10];
	int *p=&a[0];
	void invv(int *x,int n);
	void inv(int arr[],int n);

	printf("请输入测试数值:\n");
	for(p=a;p<(a+10);p++)
		scanf("%d",p);

	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");

	invv(a,10);

	for(p=a;p<(a+10);p++)
		printf("%d ",*p);
	printf("\n");
}
void inv(int arr[],int n)
{
	int temp;
	int *i=&arr[0],*j=&arr[n-1];
	for(;i<j;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}

void invv(int *x,int n)
{
	int *i=x,*j=(x+n-1);  //此处可能会有这样的错误认识，即*i=&x.这种写法在于错误的人为*x是a[]，其实这里传递的已经是&a
	int temp;
	//i=x;j=x+n-1;    //单独赋值时要采用这种方式
	for(;i<j;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}