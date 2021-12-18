#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a=3,b=4;

	short c=128;

	int d=15;

	printf("%d,%d\n\n",a,b);

	a=a^b;
	printf("%d\n",a);
	b=b^a;
	printf("%d\n",b);
	a=a^b;
	printf("%d\n\n",a);

	printf("%d,%d\n",a,b);

	printf("%d\n",~a);

	printf("%d,%d\n",c<<1,c<<2);

	printf("%d\n",d>>2);

	getch();
}