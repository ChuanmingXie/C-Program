#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,i=0;
	for(a=1;a<=4;a++)
	for(b=1;b<=4;b++)
	for(c=1;c<=4;c++)
	for(d=1;d<=4;d++)
	{
		printf("%d\t",a*1000+b*100+c*10+d);
		i++;
	}
	printf("\n×ÜÊýÎª %5d\n",i);
	getch();
}
