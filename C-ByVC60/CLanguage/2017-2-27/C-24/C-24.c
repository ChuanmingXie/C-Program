#include<stdio.h>
int main()
{
	float p=13;
	int n=0;
	do{
		p*=1.01;
		n++;
		printf("��%3d��  %0.6f����\n",n,p);
	}while(p<20);
	printf("��%d��\n",n);
}