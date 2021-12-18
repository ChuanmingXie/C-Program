#include<stdio.h>
int main()
{
	float add(float x, float y);
	float a,b;
	printf("ÇëÊäÈëa£¬bµÄÖµ");
	scanf("%f,%f",&a,&b);
	printf("sum=%g\n",add(a,b));
}

float add(float x,float y)
{
	return x+y;
}