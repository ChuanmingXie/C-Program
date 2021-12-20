#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b;
	srand((unsigned)time(NULL));
	a=rand()%10+1;
	//printf("提示a=%d\n",a);
	printf("请输入一个10以内的整数\n");
	scanf("%d",&b);
	if(a==b)
	{
		printf("a=%d,b=%d OK\n",a,b);
	}
	else
		printf("a=%d,b=%d ERROR\n",a,b);
}