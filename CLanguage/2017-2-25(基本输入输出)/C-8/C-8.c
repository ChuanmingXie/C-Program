#include <stdio.h>
int main()
{
	double x,f;
	printf("ÇëÊäÈëXµÄÖµ\n");
	scanf("%lf",&x);

	if(x<0&&x!=-3)
		f=x*x+x-6;
	else if(x>=0&&x<10&&x!=2&&x!=3)
		f=x*x-5*x+6;
	else 
		f=x*x-x-1;

	printf("x=%f,f=%f\n",x,f);
}