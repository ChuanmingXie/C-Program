#include<stdio.h>
int main()
{
	int max(float a,float b);
	float x=0,y=0;

	printf("ÇëÊäÈëx£¬yµÄÖµ£º");
	scanf("x=%f y=%f",&x,&y);

	printf("Max=%d\n",max(x,y));
}

int max(float a,float b)
{
	float z;
	z=(a>b?a:b);
	return z;
}