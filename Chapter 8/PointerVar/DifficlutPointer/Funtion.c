#include<stdlib.h>		//system
#include<string.h>		//strcmp��
#include<stdio.h>		//printf��scanf
#include<conio.h>		//getch

#define N 10

void Clrscr()
{
	if(getch())
	{
		system("CLS");
	}
	main();
}
void ThereNumArr()
{
	void swap(int *,int *);
	int a,b,c;
	int *p1,*p2,*p3;
	printf("���� �������ֵ����� �㷨\n");

	printf("��������������:a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	if(a>b)swap(p1,p2);
	if(a>c)swap(p1,p3);
	if(b>c)swap(p2,p3);
	printf("�������������:a,b,c=%d,%d,%d",a,b,c);
	Clrscr();
}
void EqualString1()
{
	void SortEqual1(char s[][6]);
	char Str[N][6];
	int i=0;
	printf("���� �ȳ��ַ������� �㷨\n");
	printf("������%d���ַ���:\n",N);
	for(i=0;i<N;++i)
	{
		scanf("%s",Str[i]);
	}

	SortEqual1(Str);

	printf("�����%d���ַ���:\n",N);
	for(i=0;i<N;++i)
	{
		printf("%s\n",Str[i]);
	}
	Clrscr();
}

void EqualString2()
{
	void SortEqual2(char (*s)[6]);
	char Str[10][6];
	char (*p)[6];
	int i;
	printf("������%d���ַ���:\n",N);
	for(i=0;i<N;++i)
	{
		scanf("%s",Str[i]);
	}

	p=Str;
	SortEqual2(p);

	printf("�����%d���ַ���:\n",N);
	for(i=0;i<N;++i)
	{
		printf("%s\n",Str[i]);
	}

	Clrscr();
}
void NotEqualStr()
{
	void SortNotEqual(char *s[]);
	char *p[N],Str[N][20];
	int i;
	printf("���� ���ȳ��ַ����� �㷨\n");

	for(i=0;i<N;++i)
		p[i]=Str[i];

	printf("������%d���ַ���:\n",N);
	for(i=0;i<N;++i)
		scanf("%s",Str[i]);
	
	SortNotEqual(p);

	printf("�����%d���ַ���:\n",N);
	for(i=0;i<N;++i)
		printf("%s\n",p[i]);

	Clrscr();
}

void StringSorts()
{
	void SortString(char **);
	int i;
	char **p,*pStr[N],Str[N][20];
	printf("���� N ���ַ������� �㷨\n");

	for(i=0;i<N;++i)
		pStr[i]=Str[i];

	printf("������%d���ַ���:\n",N);
	for(i=0;i<N;++i)
		scanf("%s",Str[i]);

	p=pStr;
	SortString(p);

	printf("�����%d���ַ���:\n");
	for(i=0;i<N;++i)
		printf("%s\n",pStr[i]);
	Clrscr();
}
void NumberSorts()
{
	void SortNumber(int **p,int n);
	int i,n,**p,*pStr[2*N],data[2*N];
	printf("���� N �����ֵ����� �㷨\n");
	
	printf("������Ҫ�������:");
	scanf("%d",&n);
	for(i=0;i<n;++i)
		pStr[i]=&data[i];

	printf("������%d������:",n);
	for(i=0;i<n;++i)
		scanf("%d",pStr[i]);

	p=pStr;
	SortNumber(p,n);

	printf("�����%d������:",n);
	for(i=0;i<n;++i)
		printf("%d ",*pStr[i]);
	printf("\n");
	Clrscr();
}
void DefIntegral()
{
	double Integral(double(*)(double) ,double ,double ,int );
	double fsin(double);
	double fcos(double);
	double fexp(double);

	double a1,b1,a2,b2,a3,b3,(*p)(double),c;
	int n=20;

	printf("���� �����󶨻��� �㷨\n");

	printf("������a1,b1=");
	scanf("%lf,%lf",&a1,&b1);
	printf("������a2,b2=");
	scanf("%lf,%lf",&a2,&b2);
	printf("������a3,b3=");
	scanf("%lf,%lf",&a3,&b3);

	p=fsin;
	c=Integral(p,a1,b1,n);
	printf("sin �Ķ�����ֵΪ:%4.6lf\n",c);
	p=fcos;
	c=Integral(p,a2,b2,n);
	printf("cos �Ķ�����ֵΪ:%4.6lf\n",c);
	p=fexp;
	c=Integral(p,a3,b3,n);
	printf("exp �Ķ�����ֵΪ:%4.6lf\n",c);

	Clrscr();
}
void NewFreeFuns()
{
	char *New(int n);
	void Free(char * p);
	char *pt=NULL;
	int x;

	printf("���� New & Free���� �㷨\n");

	printf("�����뿪�ٿռ��С:");
	scanf("%d",&x);

	pt=New(x);
	printf("��ʼַ:%d\n\n",pt);

	Free(pt);
	printf("�ͷ�ַ:%d\n\n",pt);
	Clrscr();
}


void DifferMonth()
{
	int i;
	char *month_name[13]={"illegall month","January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("���� ��ͬ�·ݵĶ�Ӧ �㷨\n");
	printf("�������·�����:");
	scanf("%d",&i);
	if((i<13)&&(i>0))
	{
		printf("��Ӧ�� %d �µ�Ӣ����:%s\n",i,*(month_name+i));
	}
	else
	{
		printf("�������!\n");
	}
	Clrscr();
}