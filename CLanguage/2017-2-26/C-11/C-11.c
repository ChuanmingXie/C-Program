#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b;
	srand((unsigned)time(NULL));
	a=rand()%10+1;
	//printf("��ʾa=%d\n",a);
	printf("������һ��10���ڵ�����\n");
	scanf("%d",&b);
	if(a==b)
	{
		printf("a=%d,b=%d OK\n",a,b);
	}
	else
		printf("a=%d,b=%d ERROR\n",a,b);
}