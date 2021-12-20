#include<stdio.h>
int main()
{
	int n;
	for(n=0;n<=200;n+=7)
	{
		if((n%7)==0)printf("%4d\n",n);
	}
}