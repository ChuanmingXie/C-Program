/*二级函数*/
#include<stdio.h>
#include<math.h>
#define N 10

/*输入整数:*/
void InputNum(int *x)
{
	printf("请输入数据:");
	scanf("%d",x);
}

/*浮点数输入:*/
void InputDou(double *x)
{
	printf("请输入数据:");
	scanf("%lf",x);
}

/*输入数组:*/
void InputArr(int arr[N])
{
	int i;
	printf("输入原始序列:\n");
	for(i=0;i<N;++i)
		scanf("%d",&arr[i]);
}

/*输出数组:*/
void OuputArr(int arr[N])
{
	int i;
	printf("输出排序数据:\n");
	for(i=0;i<N;++i)
		printf("%3d",arr[i]);
}

int IsPrimefun(int a)
{
	int i;
	for(i=2;i<=sqrt(a);++i)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}

void Gnumberfun(int p,int q)
{
	int t,r,s=p*q;
	if(p<q)
	{t=p,p=q,q=t;}
	while(r!=0){
		r=p%q;
		p=q;
		q=r;
	}
	printf("最大公约数:%d\n",p);
	printf("最小公倍数:%d\n",s/p);
}

int YerTurnDay(int year,int month,int day)
{
	int days;
	int isloop(int y);
	int sum_day(int m,int d);
	days=sum_day(month,day);
	if(isloop(year)&&month>3)
		days=days+1;
	return days;
}
int isloop(int y)
{
	return(y%4==0&&y%100!=0||y%400==0);
}
int sum_day(int m,int d)
{
	int i;
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	for(i=0;i<m;++i)
		d+=a[i];
	return d;
}

void Bullblefun(int arr[N])
{
	int t,i,j;;
	for(i=N-1;i>=1;--i)
	{
		for(j=i;j<=N;++j)
		{
			if(arr[j-1]>arr[j])
			{
				t=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=t;
			}
		}
	}
}

void Discfun(double a,double b,double c,double *disc)
{
	*disc=b*b-4*a*c;
}
void GreaerTZero(double a,double b,double d,double *x1,double *x2)
{
	*x1=(-b+sqrt(d))/(2*a);
	*x2=(-b-sqrt(d))/(2*a);
}
void EqualToZero(double a,double b,double d,double *x1,double *x2)
{
	*x1=*x2=(-b)/(2*a);
}
void SmallerZero(double a,double b,double d,double *p,double *q)
{
	*p=(-b)/(2*a);
	*q=sqrt(-d)/(2*a);
}

double ThreeTmfun(double a,double b,double c,double d)
{
	double x=1,x0,f1,f2;
	do{
		x0=x;
		f1=((a*x0+b)*x0+c)*x0+d;
		f2=(3*a*x0+2*b)*x0+c;
		x=x0-f1/f2;
	}while(fabs(x-x0)>=1e-3);
	return x;
}

double LRDslovfun(int n,int x)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return (2*n-1)*x*LRDslovfun(n-1,x)-(n-1)*LRDslovfun(n-2,x)/n;
}