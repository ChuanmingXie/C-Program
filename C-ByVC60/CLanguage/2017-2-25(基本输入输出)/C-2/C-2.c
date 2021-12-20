#include<stdio.h>
int main()
{
	int a,b,remain;
	int sum,subtra;
	long multip;
	float quotie,ave;
	printf("请输入测试数据\n");
	scanf("%d,%d",&a,&b);
	sum=a+b;
	subtra=a-b;
	multip=(long)a*b;
	quotie=1.0*a/b;
	remain=a%b;
	ave=sum/2.0;

	printf(" 加=%d\n 减=%d\n 乘=%ld\n 除=%f\n 余=%d\n 均=%f\n",sum,subtra,multip,quotie,remain,ave);

}