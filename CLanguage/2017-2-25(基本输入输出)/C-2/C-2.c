#include<stdio.h>
int main()
{
	int a,b,remain;
	int sum,subtra;
	long multip;
	float quotie,ave;
	printf("�������������\n");
	scanf("%d,%d",&a,&b);
	sum=a+b;
	subtra=a-b;
	multip=(long)a*b;
	quotie=1.0*a/b;
	remain=a%b;
	ave=sum/2.0;

	printf(" ��=%d\n ��=%d\n ��=%ld\n ��=%f\n ��=%d\n ��=%f\n",sum,subtra,multip,quotie,remain,ave);

}