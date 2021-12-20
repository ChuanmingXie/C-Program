//º¯Êıµİ¹éµ÷ÓÃ
#include<stdio.h>
int main()
{
	int age(int n);
	printf("No.5 age is:%d\n",age(5));
}

int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return c;
}