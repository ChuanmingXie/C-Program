#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	float e=1,s=1;
	printf("%0.0f+",s);
	for(i=1;i<7;i++)
	{
		e=10*e+i+1;
		s+=e;
		printf("%0.0f+",e);
	}
	printf("\n1+12+123+...+%0.0f=%0.0f\n",e,s);
}