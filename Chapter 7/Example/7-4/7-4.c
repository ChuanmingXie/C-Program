#include<stdio.h>
int main()
{
	float add(float x, float y);
	float a,b;
	printf("������a��b��ֵ");
	scanf("%f,%f",&a,&b);
	printf("sum=%g\n",add(a,b));
}

float add(float x,float y)
{
	return x+y;
}