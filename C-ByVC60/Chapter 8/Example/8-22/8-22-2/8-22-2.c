#include<stdio.h>
int main()
{
	int max(int,int);
	int (*p)(int,int)=max;
	//int (*p)(int,int);
	//p=max;
	int a,b,c;
	printf("请输入a和b的值:");
	scanf("%d %d",&a,&b);
	c=(*p)(a,b);
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
}

int max(int x,int y)
{
	return x>y?x:y;
}