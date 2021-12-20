#include<stdio.h>

int main()
{
	int fun(int n);
	int N=0;
	printf("«Î ‰»ÎN:");
	scanf("%d",&N);
	printf("%d\n",fun(N));
}

int fun(int n)
{
	int s;
	if(n==1||n==0)
		s=1;
	else
		s=n*fun(n-1);
	return s;
}