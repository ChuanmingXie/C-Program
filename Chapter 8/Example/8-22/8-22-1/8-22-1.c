#include<stdio.h>
int main()
{
	int max(int,int);
	int a,b,c;
	printf("ÇëÊäÈëaºÍbµÄ:");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
}

int max(int x,int y)
{
	int z;
	if(x>y)	z=x;
	else	z=y;
	return 0;
}