//1-1/2+1/3-1/4+1/5-1/6...+1/1000 正负项交叉相加加
#include<stdio.h>
int main()
{
	int sign=1;
	double deno=2.0,sum=1.0,term;
	while(deno<=1000)
	{
		sign=-sign;
		term=sign/deno;
		sum=sum+term;
		deno+=1;
	}
	printf("%f\n",sum);
	return 0;
}
