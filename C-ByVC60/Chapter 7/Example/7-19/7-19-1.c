//����a*b�Լ�a��b����

#include<stdio.h>
int A;
int main()
{
	int power(int);
	int b=3,m;
	printf("������a��m��ֵ:");
	scanf("%d %d",&A,&m);
	printf("%d*%d=%d\n",A,b,A*b);
	printf("%d**%d=%d\n",A,m,power(m));
}