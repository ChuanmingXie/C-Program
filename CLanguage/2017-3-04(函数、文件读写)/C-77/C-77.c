#include<stdio.h>

long Sum(int n);

int main()
{
	int i=1,n=0;
	printf("��ȷ�����㵽n=");
	scanf("%d",&n);
	printf("1+2+3+...+%d=%ld",n,Sum(n));
	getch();
}

long Sum(int n)
{
	//int p=n;
	if(n==0) return 0;
	if(n>0) return Sum(n-1)+n;
	//return p;
}