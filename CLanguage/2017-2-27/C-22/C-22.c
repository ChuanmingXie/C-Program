#include<stdio.h>
int main ()
{
	float x,y;
	do
	{
		printf("ÇëÊäÈë²âÊÔÊý¾Ýx\n");
		scanf("%f",&x);
		if(x>0&&x<100)
		{
			y=3*x+10;
			printf("y=%g\n",y);
		}
		else if(x>=100)
		{
			y=x*x*x-20;
			printf("y=%g\n",y);
		}
	}while(x>0);
	printf("Thank You ,Bye!\n");	
}