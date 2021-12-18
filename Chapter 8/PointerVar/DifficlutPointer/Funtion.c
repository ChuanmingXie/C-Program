#include<stdlib.h>		//system
#include<string.h>		//strcmp、
#include<stdio.h>		//printf、scanf
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
	printf("这是 三个数字的升序 算法\n");

	printf("请输入三个数据:a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;
	if(a>b)swap(p1,p2);
	if(a>c)swap(p1,p3);
	if(b>c)swap(p2,p3);
	printf("排序后三个数据:a,b,c=%d,%d,%d",a,b,c);
	Clrscr();
}
void EqualString1()
{
	void SortEqual1(char s[][6]);
	char Str[N][6];
	int i=0;
	printf("这是 等长字符串排序 算法\n");
	printf("请输入%d个字符串:\n",N);
	for(i=0;i<N;++i)
	{
		scanf("%s",Str[i]);
	}

	SortEqual1(Str);

	printf("排序后%d个字符串:\n",N);
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
	printf("请输入%d个字符串:\n",N);
	for(i=0;i<N;++i)
	{
		scanf("%s",Str[i]);
	}

	p=Str;
	SortEqual2(p);

	printf("排序后%d个字符串:\n",N);
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
	printf("这是 不等长字符排序 算法\n");

	for(i=0;i<N;++i)
		p[i]=Str[i];

	printf("请输入%d个字符串:\n",N);
	for(i=0;i<N;++i)
		scanf("%s",Str[i]);
	
	SortNotEqual(p);

	printf("排序后%d个字符串:\n",N);
	for(i=0;i<N;++i)
		printf("%s\n",p[i]);

	Clrscr();
}

void StringSorts()
{
	void SortString(char **);
	int i;
	char **p,*pStr[N],Str[N][20];
	printf("这是 N 个字符串排序 算法\n");

	for(i=0;i<N;++i)
		pStr[i]=Str[i];

	printf("请输入%d个字符串:\n",N);
	for(i=0;i<N;++i)
		scanf("%s",Str[i]);

	p=pStr;
	SortString(p);

	printf("排序后%d个字符串:\n");
	for(i=0;i<N;++i)
		printf("%s\n",pStr[i]);
	Clrscr();
}
void NumberSorts()
{
	void SortNumber(int **p,int n);
	int i,n,**p,*pStr[2*N],data[2*N];
	printf("这是 N 个数字的排序 算法\n");
	
	printf("请输入要排序个数:");
	scanf("%d",&n);
	for(i=0;i<n;++i)
		pStr[i]=&data[i];

	printf("请输入%d个数字:",n);
	for(i=0;i<n;++i)
		scanf("%d",pStr[i]);

	p=pStr;
	SortNumber(p,n);

	printf("排序后%d个数字:",n);
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

	printf("这是 矩阵法求定积分 算法\n");

	printf("请输入a1,b1=");
	scanf("%lf,%lf",&a1,&b1);
	printf("请输入a2,b2=");
	scanf("%lf,%lf",&a2,&b2);
	printf("请输入a3,b3=");
	scanf("%lf,%lf",&a3,&b3);

	p=fsin;
	c=Integral(p,a1,b1,n);
	printf("sin 的定积分值为:%4.6lf\n",c);
	p=fcos;
	c=Integral(p,a2,b2,n);
	printf("cos 的定积分值为:%4.6lf\n",c);
	p=fexp;
	c=Integral(p,a3,b3,n);
	printf("exp 的定积分值为:%4.6lf\n",c);

	Clrscr();
}
void NewFreeFuns()
{
	char *New(int n);
	void Free(char * p);
	char *pt=NULL;
	int x;

	printf("这是 New & Free函数 算法\n");

	printf("请输入开辟空间大小:");
	scanf("%d",&x);

	pt=New(x);
	printf("起始址:%d\n\n",pt);

	Free(pt);
	printf("释放址:%d\n\n",pt);
	Clrscr();
}


void DifferMonth()
{
	int i;
	char *month_name[13]={"illegall month","January","February","March","April","May","June","July","August","September","October","November","December"};
	printf("这是 不同月份的对应 算法\n");
	printf("请输入月份数字:");
	scanf("%d",&i);
	if((i<13)&&(i>0))
	{
		printf("对应于 %d 月的英文是:%s\n",i,*(month_name+i));
	}
	else
	{
		printf("输入错误!\n");
	}
	Clrscr();
}