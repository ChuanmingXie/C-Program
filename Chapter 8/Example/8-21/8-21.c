//指针变量的值是可以改变的
#include<stdio.h>
int main()
{
	char *a="I Love China!";
	a=a+7;
	printf("%s\n",a);
}