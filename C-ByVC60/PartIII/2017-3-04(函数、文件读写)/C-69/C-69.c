//求解水仙花数

#include<stdio.h>
int main()
{
	int WaterNum(int x);
	int i=0;
	for(i=100;i<1000;i++)
	{
		if(WaterNum(i))
			printf("%d\t",i);
	}
	getch();
}

int WaterNum(int x)
{
	int a=0,b=0,c=0;
	a=x/100;
	b=(x/10)%10;
	c=x%10;

	if(a*a*a+b*b*b+c*c*c==x) return 1;
	else return 0;
}
