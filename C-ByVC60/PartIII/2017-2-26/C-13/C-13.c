#include<stdio.h>
int main ()
{
	float x,y;
	printf("�������������x\n");
	scanf("%f",&x);
	if(x>=0&&x<100)
	{
		y=3*x+10;
		printf("y=%f\n",y);
	}
	else if(x>=100)
	{
		y=x*x*x-20;
		printf("y=%f\n",y);
	}
	else
	{
		printf("��������\n");	
	}
}