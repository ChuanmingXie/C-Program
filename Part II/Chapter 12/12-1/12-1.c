#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned a=0,b=0,c=0,d=0;
	int n;
	//printf("%d\n",sizeof(unsigned));
	printf("Please enter a number and move bit:");
	scanf("%o,%d",&a,&n);
	printf("a=%o,n=%d\n",a,n);
	b=a<<(16-n);
	printf("%o\n",b);
	c=a>>n;
	printf("%o\n",c);
	d=c|b;
	d=d&(~(~0<<16));
	printf("%o,%d\n",a,a);
	printf("a:%o\nd:%o\n",a,d);
	getch();
	return 0;
}