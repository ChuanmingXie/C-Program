#include<stdio.h>
int main()
{
	int max(int,int);
	int min(int,int);
	int sum(int,int);
	void fun(int,int,int(*)(int,int));
	int a,b,n;
	printf("------请输入a和b的值:");
	scanf("%d %d",&a,&b);
	printf("------请输入计算模式-----\n--1:加和 2:取大 3:取小--");
	scanf("%d",&n);
	if(n==1)	fun(a,b,sum);
	if(n==2)	fun(a,b,max);
	if(n==3)	fun(a,b,min);
}

void fun(int x,int y,int(*p)(int,int))
{
	printf("%d\n",(*p)(x,y));
}

int sum(int x,int y)
{
	printf("------sum=");
	return x+y;
}
int max(int x,int y)
{
	printf("------max=");
	return x>y?x:y;
}
int min(int x,int y)
{
	printf("------min=");
	return x<y?x:y;
}