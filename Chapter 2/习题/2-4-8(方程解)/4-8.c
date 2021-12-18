/*求一元二次方程的解*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

double Num1=0,Num2=0,p=0,q=0;
int main()
{
	double a=0,b=0,c=0;
	int Comput(double a,double b,double c);
	printf("请输入二次方程式系数:a,b,c=");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("您输入二次方程等式为:(%2.2lf)X^2+(%2.2lf)X+(%2.2lf)=0\n",a,b,c);
	if(Comput(a,b,c))
		printf("root:  X1=%4.4lf\tX2=%4.4lf",Num1,Num2);
	else
		printf("root:  X1=%4.4lf+%4.4lf·i\tX2=%4.4lf-%4.4lf·i",p,q,p,q);
	getch();
	return 0;
}
int Comput(double a,double b,double c)
{
	double D=b*b-4*a*c;
	if(D>0)       {Num1=((-b)+sqrt(D))/(2*a);Num2=((-b)-sqrt(D))/(2*a);	return 1;}	
	else if(D==0) {Num1=Num2=(-b)/(2*a);	return 1;}
	else          {p=(-b)/(2*a);q=sqrt(-D)/(2*a);	return 0;}
}
