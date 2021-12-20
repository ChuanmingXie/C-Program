/*判断某年份是否为润年*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	int Year=0;
	int IsRy(int n);
	printf("Please input a year:Year=");
	scanf("%d",&Year);
	if(IsRy(Year)) printf("%d is an run year\n",Year);
	else printf("%d is not an run year\n",Year);
	getch();
	return 0;
}
int IsRy(int n)
{
	if(n%100==0)
	{
		if(n%400==0)
			return 1;
		else 
			return 0;
	}
	else
	{
		if(n%4==0)
			return 1;
		else
			return 0;
	}
}