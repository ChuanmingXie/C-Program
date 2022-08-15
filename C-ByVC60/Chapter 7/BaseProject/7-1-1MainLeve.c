/*基本算法和方程式算法*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#define N 10

void Gnumber();
void IsPrime();
void Bullble();
void Yearday();
void Secondt();
void ThreeTm();
void LRDslov();
void Clrscr();
void InputNum(int *x);
void InputDou(double *x);

int main()
{
	char No[10];
	printf("--------1.公约数以及公倍数-------\n");
	printf("--------2.判断某数是否素数-------\n");
	printf("--------3.排序中的冒泡算法-------\n");
	printf("--------4.计算某年中的某天-------\n");

	printf("--------5.一元二次方程求根-------\n");
	printf("--------6.一元三次方程求根-------\n");
	printf("--------7.递归发勒让德求解-------\n");
	printf("--------------0.Exit-------------\n");
	printf("请输入你要展示的算法项目编号No=");
	scanf("%s",No);
	while(No[0]<'0'||No[0]>'7'){
		printf("\n您的输入有误请确认后再输入No=");
		scanf("%s",No);
	}
	switch(No[0])
	{
	case '0':if(getch())printf("\n再见!\n");break;
	case '1':Gnumber();break;
	case '2':IsPrime();break;
	case '3':Bullble();break;
	case '4':Yearday();break;
	case '5':Secondt();break;
	case '6':ThreeTm();break;
	case '7':LRDslov();break;
	}
	return 0;
}

void Clrscr()
{
	if(getch())
		system("CLS");
	main();	
}

/*
Input :a;
Ouput :素数(Y/N)?
*/
void IsPrime()
{
	int a;
	int IsPrimefun(int a);
	InputNum(&a);
	if(IsPrimefun(a))
		printf("经验证:%d 是素数\n",a);
	else
		printf("经验证:%d 不是素数\n",a);
	Clrscr();
}

/*
Input :a,b;
Ouput :公约数:m,公倍数:n.
*/
void Gnumber()
{
	int a,b;
	void Gnumberfun(int p,int q);
	printf("请输入两个计算数据:\n");
	InputNum(&a);
	InputNum(&b);
	Gnumberfun(a,b);
	Clrscr();
}

/*
Input :某年某月某日(year,month,day;)
Ouput :为该年第几天(days;)
*/
void Yearday()
{
	int a,b,c;
	int YerTurnDay(int year,int month,int day);
	printf("请依次输入年、月、日:\n");
	InputNum(&a);
	InputNum(&b);
	InputNum(&c);
	printf("%d/%d/%d 是这一年的第%d天\n",a,b,c,YerTurnDay(a,b,c));
	Clrscr();
}

/*
Input :a[N];
Ouput :a[N];
*/
void Bullble()
{
	void InputArr(int arr[N]);
	void OuputArr(int arr[N]);
	void Bullblefun(int arr[N]);
	int a[N];
	InputArr(a);
	Bullblefun(a);
	OuputArr(a);
	Clrscr();
}

/*
Input :a,b,c;
中间步骤:disc,p,q;
Ouput :x1,x2;
*/
void Secondt()
{
	double a1,b1,c1,x1,x2,disc,p,q;
	void Discfun(double a,double b,double c,double *disc);
	void GreaerTZero(double a,double b,double d,double *x1,double *x2);
	void EqualToZero(double,double,double,double *x1,double *x2);
	void SmallerZero(double,double,double,double *p,double *q);
	printf("请依次输入系数a,b,c:\n");
	InputDou(&a1);
	InputDou(&b1);
	InputDou(&c1);
	Discfun(a1,b1,c1,&disc);
	printf("方程式:%.2lf*x*x+%.2lf*x+%.2lf=0\n方程解:",a1,b1,c1);
	if(disc>0)
	{
		GreaerTZero(a1,b1,disc,&x1,&x2);
		printf("x1=%.7lf\tx2=%.7lf\n",x1,x2);
	}
	else if(disc==0)
	{
		EqualToZero(a1,b1,disc,&x1,&x2);
		printf("x1=%.7lf\tx2=%.7lf\n",x1,x2);
	}
	else
	{
		SmallerZero(a1,b1,disc,&p,&q);
		printf("x1=%.7lf+%.7lfi\tx2=%.7lf-%.7lfi\n",p,q,p,q);
	}
	Clrscr();
}

/*
迭代法
*/
void ThreeTm()
{
	double a1,b1,c1,d1;
	double ThreeTmfun(double a,double b,double c,double d);
	printf("请依次输入系数a,b,c,d:\n");
	InputDou(&a1);
	InputDou(&b1);
	InputDou(&c1);
	InputDou(&d1);
	printf("方程式:%.2lf*x^3+%.2lf*x^2+%.2lf*x+%.2lf=0\n方程解:x=%.8lf",a1,b1,c1,d1,ThreeTmfun(a1,b1,c1,d1));
	Clrscr();
}

/*
递归式
*/
void LRDslov()
{
	int x,n;
	double LRDslovfun(int ,int);
	printf("请依次输入参数n,x:\n");
	InputNum(&n);
	InputNum(&x);
	printf("p%d(%d)=%6.2lf\n",n,x,LRDslovfun(n,x));
	Clrscr();
}