/*
 2  1
 3  2
 5  3
 8  5
13  8
21 13
*/



#include<stdio.h>
int pmain()
{
	float i=1,j=2,k=0,n=0;
	float s=0;
	do{

		n++;
		k=j/i;s+=k;
		//printf("sum%g=%g/%g=%g\n",n,k,j,k/j);
		k=i;i=j;j=k+j;
	}while(n<20);
	printf("2/1+3/2+...+%g/%g=%g\n",k,j,s);
}


int main()
{
	int n=0;
	float i=1,j=2,k=0,s=0;
	for(n=1;n<=20;n++)
	{
		k=j/i;
		printf("%0.8f=%g/%g\n",k,j,i);
		s+=k;
		k=i;i=j;j=k+j;
	}
	printf("s(20)=%g\n",s);
}
