#include<stdio.h>
int mainb()
{
	int i=0;
	float sum=0,s=0;
	for(i=1;i<=10;i++)
	{
		printf("请输入地%d个数:",i);
		scanf("%f",&s);
		if(s>=0)
		{
			sum+=s;
		}
		else break;
	}
	printf("sum=%0.4f\n",sum);
}

int mainNob()
{
	int i=0;
	float sum=0,s=0;
	for(i=1;i<=10;i++)
	{
		printf("请输入第%d个数:",i);
		scanf("%f",&s);
		if(s>=0) sum+=s;
		else i=10;
	}
	printf("sum=%0.4f\n",sum);
}