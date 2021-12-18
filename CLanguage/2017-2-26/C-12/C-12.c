#include<stdio.h>
int main()
{
	int a,b,t;
	printf("请输入a,b的值\n");

	scanf("%d,%d",&a,&b);
	t=a*a+b*b;
	if(t>100)
		printf("%d*%d+%d*%d=%d\t百位以上的数字为\t%d\n\n",a,a,b,b,t,t/100);
	else
		printf("a+b=%d\n\n",a+b);
}