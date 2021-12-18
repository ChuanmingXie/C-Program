//计算a*b以及a的b次幂

#include<stdio.h>
int A;
int main()
{
	int power(int);
	int b=3,m;
	printf("请输入a和m的值:");
	scanf("%d %d",&A,&m);
	printf("%d*%d=%d\n",A,b,A*b);
	printf("%d**%d=%d\n",A,m,power(m));
}