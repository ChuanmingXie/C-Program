#include<stdio.h>
int main()
{
	int a=-1,b=-5,c;
	c=fun(a,b);
	printf("%d\n",c);
}

int fun(int x,int y)
{
	if(x>y) return x-y;
	else y-x;
}