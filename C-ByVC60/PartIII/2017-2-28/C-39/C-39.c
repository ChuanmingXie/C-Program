#include<stdio.h>
int main()
{
	long n=0,i=0;
	printf("������һ��������n:");
	scanf("%ld",&n);
	printf("���������Ϊ:%8d ",n);
	do{
		//printf("%ld\n",n);
		n=(n-n%10)/10;
		++i;
	}while(n);
	printf("����һ�� %d λ��\n",i);
}