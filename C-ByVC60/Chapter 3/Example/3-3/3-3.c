#include<stdio.h>
int main()
{
	// c ��ʽ���
	short a=121;
	int b=377;

	double c=1.0;
	float d=10000;

	printf("%c\n",a);
	printf("%c\n",b);

	// f ��ʽ���
	printf("%f\n",c/3);
	printf("%20.13f\n",c/3);
	printf("%-25.15f,%25.15f\n",d/3,d/3);
}
