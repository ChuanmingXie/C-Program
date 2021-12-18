//输入两个整数，要求输出两者之中较大的数，采用函数实现

#include<stdio.h>

int main()
{
	int x=0,y=0;
	int max(int a,int b);
	printf("请输入测试数据:");
	scanf("x=%d,y=%d",&x,&y);

	printf("max=%d\n",max(x,y));
}

int max1(int a,int b)
{
	int t;
	if(a<b)
		t=b;
	else t=a;
	return t;
}

int max(int a,int b)
{return (a>b?a:b);}