#include<stdio.h>
#include<conio.h>
int main()
{
	short a,b,c;
	printf("Please enter a number:");
	scanf("%o",&a);
	printf("%o,%d\n",a,a);
	a=a>>4;
	b=~(~0<<4);
	c=a&b;
	printf("%o,%d\n",c,c);
	return 0;
	getch();
}
