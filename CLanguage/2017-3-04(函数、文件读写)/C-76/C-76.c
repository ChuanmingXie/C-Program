#include<stdio.h>
long fib(int n);
int main()
{
	int n=0,i=1;
	printf("«Î ‰»În:");
	scanf("%d",&n);

	for(;i<=n;i++)
		printf("%5ld\t",fib(i));
	getch();
}

long fib(int n)
{
	if(n==1) return 1;
	if(n==2) return 1;
	if(n>2) return fib(n-1)+fib(n-2);
}