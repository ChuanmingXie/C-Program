#include<stdio.h>
int main()
{
	float p=13;
	int n=0;
	do{
		p*=1.01;
		n++;
		printf("第%3d年  %0.6f亿人\n",n,p);
	}while(p<20);
	printf("第%d年\n",n);
}