#include<stdio.h>
int main()
{
	int a,b,c,d,n=0;
	printf("%d,%d,%d,%d\n",a,b,c,n);
	printf("10000以内的水仙花数为:\n");
	for(n=100;n<1000;n++)
	{
		a=n/100;
		b=(n%100)/10;
		c=n%10;
		if(n==a*a*a+b*b*b+c*c*c)
			printf("%d\n",n);
	}
	for(n=1000;n<10000;n++)
	{
		a=n/1000;
		b=(n%1000)/100;
		c=(n%100)/10;
		d=n%10;
		if(n==a*a*a+b*b*b+c*c*c+d*d*d*d)
			printf("%d\n",n);
	}
}