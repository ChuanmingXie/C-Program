#include<stdio.h>
int main()
{
	int max(int,int);
	int min(int,int);
	int (*p)(int,int);
	char *str="abcd";
	int a,b,n;
	printf("请输入a和b的值:");
	scanf("%d %d",&a,&b);
	printf("请选择模式1或2:");
	scanf("%d",&n);
	if(n==1) 
	{
		p=max;
		printf("a=%d\nb=%d\nmax=%d\n",a,b,(*p)(a,b));
	}
	if(n==2) 
	{
		p=min;
		printf("a=%d\nb=%d\nmin=%d\n",a,b,(*p)(a,b));
	}

}
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x<y?x:y;
}