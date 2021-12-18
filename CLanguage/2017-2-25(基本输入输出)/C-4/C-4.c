#include<stdio.h>
#define PI 3.141592657
int main()
{
	float r,s,v;
	printf("r=");
	scanf("%f",&r);
	s=4*PI*r*r;
	v=4/3.0*PI*r*r*r;
	printf("s=%f\nv=%f\n",s,v);
}