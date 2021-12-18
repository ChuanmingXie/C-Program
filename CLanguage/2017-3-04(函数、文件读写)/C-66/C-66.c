#include<stdio.h>
#include<math.h>

int main()
{
	int isprime(int x);
	int a;
	printf("请输入测试数:");
	scanf("%d",&a);
	if(isprime(a)) printf("是素数\n");
	if(!isprime(a)) printf("Not prime\n");
	getch();
}

int isprime(int x)
{
	int i=0;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0) return 0;
	return 1;

}