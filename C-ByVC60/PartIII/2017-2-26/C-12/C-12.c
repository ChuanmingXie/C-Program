#include<stdio.h>
int main()
{
	int a,b,t;
	printf("������a,b��ֵ\n");

	scanf("%d,%d",&a,&b);
	t=a*a+b*b;
	if(t>100)
		printf("%d*%d+%d*%d=%d\t��λ���ϵ�����Ϊ\t%d\n\n",a,a,b,b,t,t/100);
	else
		printf("a+b=%d\n\n",a+b);
}