/*�����㷨�ͷ���ʽ�㷨*/
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
	printf("--------1.��Լ���Լ�������-------\n");
	printf("--------2.�ж�ĳ���Ƿ�����-------\n");
	printf("--------3.�����е�ð���㷨-------\n");
	printf("--------4.����ĳ���е�ĳ��-------\n");

	printf("--------5.һԪ���η������-------\n");
	printf("--------6.һԪ���η������-------\n");
	printf("--------7.�ݹ鷢���õ����-------\n");
	printf("--------------0.Exit-------------\n");
	printf("��������Ҫչʾ���㷨��Ŀ���No=");
	scanf("%s",No);
	while(No[0]<'0'||No[0]>'7'){
		printf("\n��������������ȷ�Ϻ�������No=");
		scanf("%s",No);
	}
	switch(No[0])
	{
	case '0':if(getch())printf("\n�ټ�!\n");break;
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
Ouput :����(Y/N)?
*/
void IsPrime()
{
	int a;
	int IsPrimefun(int a);
	InputNum(&a);
	if(IsPrimefun(a))
		printf("����֤:%d ������\n",a);
	else
		printf("����֤:%d ��������\n",a);
	Clrscr();
}

/*
Input :a,b;
Ouput :��Լ��:m,������:n.
*/
void Gnumber()
{
	int a,b;
	void Gnumberfun(int p,int q);
	printf("������������������:\n");
	InputNum(&a);
	InputNum(&b);
	Gnumberfun(a,b);
	Clrscr();
}

/*
Input :ĳ��ĳ��ĳ��(year,month,day;)
Ouput :Ϊ����ڼ���(days;)
*/
void Yearday()
{
	int a,b,c;
	int YerTurnDay(int year,int month,int day);
	printf("�����������ꡢ�¡���:\n");
	InputNum(&a);
	InputNum(&b);
	InputNum(&c);
	printf("%d/%d/%d ����һ��ĵ�%d��\n",a,b,c,YerTurnDay(a,b,c));
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
�м䲽��:disc,p,q;
Ouput :x1,x2;
*/
void Secondt()
{
	double a1,b1,c1,x1,x2,disc,p,q;
	void Discfun(double a,double b,double c,double *disc);
	void GreaerTZero(double a,double b,double d,double *x1,double *x2);
	void EqualToZero(double,double,double,double *x1,double *x2);
	void SmallerZero(double,double,double,double *p,double *q);
	printf("����������ϵ��a,b,c:\n");
	InputDou(&a1);
	InputDou(&b1);
	InputDou(&c1);
	Discfun(a1,b1,c1,&disc);
	printf("����ʽ:%.2lf*x*x+%.2lf*x+%.2lf=0\n���̽�:",a1,b1,c1);
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
������
*/
void ThreeTm()
{
	double a1,b1,c1,d1;
	double ThreeTmfun(double a,double b,double c,double d);
	printf("����������ϵ��a,b,c,d:\n");
	InputDou(&a1);
	InputDou(&b1);
	InputDou(&c1);
	InputDou(&d1);
	printf("����ʽ:%.2lf*x^3+%.2lf*x^2+%.2lf*x+%.2lf=0\n���̽�:x=%.8lf",a1,b1,c1,d1,ThreeTmfun(a1,b1,c1,d1));
	Clrscr();
}

/*
�ݹ�ʽ
*/
void LRDslov()
{
	int x,n;
	double LRDslovfun(int ,int);
	printf("�������������n,x:\n");
	InputNum(&n);
	InputNum(&x);
	printf("p%d(%d)=%6.2lf\n",n,x,LRDslovfun(n,x));
	Clrscr();
}