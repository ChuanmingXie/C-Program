#include<stdio.h>
int main()
{
	int plic(int x);
	int i=1,n=0;
	printf("ÇëÊäÈën(n<=15)");
	scanf("%d",&n);
	for(;i<=n;i++)
		printf("%d!=%d\n",i,plic(i));
}

int plic(int x)
{
	static f=1;
	return f*=x;
}