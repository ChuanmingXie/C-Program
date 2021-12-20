#include<stdio.h>
int main()
{
	extern a,b,c;
	int max(int x,int y);
	int m;
	printf("ÇëÊäÈëa,b,cµÄÖµ:");
	scanf("%d %d %d",&a,&b,&c);
	m=max(max(a,b),c);
	printf("Max=%d\n",m);
}

int a,b,c;
int max(int x,int y)
{
	return (x>y?x:y);
}