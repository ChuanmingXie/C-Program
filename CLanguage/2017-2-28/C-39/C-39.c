#include<stdio.h>
int main()
{
	long n=0,i=0;
	printf("请输入一个正整数n:");
	scanf("%ld",&n);
	printf("您输入的数为:%8d ",n);
	do{
		//printf("%ld\n",n);
		n=(n-n%10)/10;
		++i;
	}while(n);
	printf("它是一个 %d 位数\n",i);
}