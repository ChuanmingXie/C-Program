#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个整数n=");
	scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0)printf("能被 3和5和7 整除\n");
	else if(x%3==0&&x%5==0)printf("能被 3和5 整除\n");
	else if(x%3==0&&x%7==0)printf("能被 3和7 整除\n");
	else if(x%3==0)printf("能被 3 整除\n");
	else if(x%5==0)printf("能被 5 整除\n");
	else if(x%7==0)printf("能被 7 整除\n");
	else printf("不能被 3 或 5 或 7 整除\n");
}