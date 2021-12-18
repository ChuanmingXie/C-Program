#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,m;
	int m3;
	printf("请输入底数和指数:");
	scanf("%lf,%lf",&x,&y);
	m=pow(x,y);
	m3=(int)m%1000;
	printf("m=%g\nm3=%0.3d\n",m,m3);
}
