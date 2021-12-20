/*比较大小与特殊计算*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define N 10
#define M 1000

void Maxfun1();		/*if...else...输出三个数最大值*/
void Maxfun2();		/*条件表达式法输出三数中最大值*/
void Sortfun1();	/*if...else...输出四数升序排列*/
void Sortfun2();	/*利用数组进行处理四数升序排列*/
void Spaclfun1();	/*对开平方计算的特殊计算*/
void Spaclfun2();	/*对五位以内的数特殊处理*/
void Spaclfun3();	/*实际问题处理的数学处理*/
int main()
{
	int No=0;
	printf("\n");
	printf("----------1.if...else...输出三个数最大值---------\n");
	printf("----------2.条件表达式法输出三数中最大值---------\n");
	printf("----------3.if...else...输出四数升序序列---------\n");
	printf("----------4.利用数组进行处理多数升序排列---------\n");
	printf("----------5.对开平方计算的特殊计算---------------\n");
	printf("----------6.对五位以内的数特殊处理---------------\n");
	printf("----------7.实际问题处理的数学处理---------------\n");
	printf("请输入要进行的展示算法的项目编号:No=");
	scanf("%d",&No);
	switch(No){
		case 1:Maxfun1();break;
		case 2:Maxfun2();break;
		case 3:Sortfun1();break;
		case 4:Sortfun2();break;
		case 5:Spaclfun1();break;
		case 6:Spaclfun2();break;
		case 7:Spaclfun3();break;
		default :printf("ERROR!!!\n");break;
	}
	getch();
	return 0;
}
void Maxfun1()		/*if...else...输出三个数最大值*/
{
	int a,b,c;
	printf("请输入三个数a,b,c=");scanf("\n%d,%d,%d",&a,&b,&c);
	if(a<c){
		if(b<c) printf("Max is %d\n\n",c);
		else printf("Max is %d\n\n",b);
	}
	else{
		if(a<b) printf("Max is %d\n\n",b);
		else printf("Max is %d\n\n",a);
	}
	main();
}
void Maxfun2()		/*条件表达式法输出三数中最大值*/
{
	int a,b,c;
	printf("请输入三个数a,b,c=");scanf("\n%d,%d,%d",&a,&b,&c);
	printf("Max is %d\n\n",(((a>b)?a:b)>c)?((a>b)?a:b):c);
	main();
}
void Sortfun1()		/*if...else...输出四数升序排列*/
{
	int a,b,c,d,t;
	printf("请输入四个数:a,b,c,d=");scanf("\n%d,%d,%d,%d",&a,&b,&c,&d);
	printf("初始序列为:a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	if(a>b){t=a,a=b,b=t;}
	if(a>c){t=a,a=c,c=t;}
	if(a>d){t=a,a=d,d=t;}
	if(b>c){t=b,b=c,c=t;}
	if(b>d){t=b,b=d,d=t;}
	if(c>d){t=c,c=d,d=t;}
	printf("升序序列为:%d\t%d\t%d\t%d\n\n",a,b,c,d);
	main();
}
void Sortfun2()		/*利用数组进行处理多数升序排列*/
{
	int a[N],i=0;
	void QuickSort(int R[],int low,int high);
	void BubbleSort(int R[],int n);
	void InsertSort(int R[],int n);
	void SelectSort(int R[],int n);
	/*1.快速排序*/
	printf("请输入10个数:");scanf("\n");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	QuickSort(a,0,N);
	printf("快速排序升序序列为: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*2.插入排序*/
	printf("请输入10个数:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	InsertSort(a,N);
	printf("插入排序升序序列为: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*3.选择排序*/
	printf("请输入10个数:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	SelectSort(a,N);
	printf("选择排序升序序列为: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*4.起泡排序*/
	printf("请输入10个数:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	BubbleSort(a,N);
	printf("起泡排序升序序列为: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n\n");
	main();
}
void QuickSort(int R[],int low,int high)
{
	int i=low,j=high-1,t=0;
	if(low<high)
	{
		t=R[i];
		while(i!=j)
		{
			while(i<j&&t<=R[j]) --j;
			if(i<j){R[i]=R[j];++i;}
			while(i<j&&t>R[i]) ++i;
			if(i<j){R[j]=R[i];--j;}
		}
		R[i]=t;
		QuickSort(R,low,i-1);
		QuickSort(R,i+1,high);
	}
}
void InsertSort(int R[],int n)
{
	int i,j,t;
	for(i=1;i<n;++i)
	{
		t=R[i];
		for(j=i-1;j>=0&&t<R[j];--j)
			R[j+1]=R[j];
		R[j+1]=t;
	}
}
void SelectSort(int R[],int n)
{
	int i,j,t;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(R[i]>R[j])
			{t=R[i];R[i]=R[j];R[j]=t;}
		}
	}
}
void BubbleSort(int R[],int n)
{
	int i,j,t;
	for(i=n-1;i>=1;--i)
	{
		for(j=i;j<=n;++j)
		{
			if(R[j-1]>R[j])
			{t=R[j-1];R[j-1]=R[j];R[j]=t;}
		}
	}
}

void Spaclfun1()	/*对开平方计算的特殊计算*/
{
	int i;
	printf("请输入一个小于%d的数据:",M);scanf("\n%d",&i);
	while(i>M){
		printf("您输入的数据有误，从重新输入:");scanf("%d",&i);
	}
	printf("数据 %d 平方根的整数部分为:%d\n\n",i,(int)sqrt(i));
	main();
}
void Spaclfun2()	/*对五位以内的数特殊处理*/
{
	int Num,Indiv,Ten,Hundred,Thousand,TenThou,p;
	printf("请输入一个五位以内的整数:M=");scanf("\n%d",&Num);
	if(Num>9999) p=5;
	else if(Num>999) p=4;
	else if(Num>99)  p=3;
	else if(Num>9)	 p=2;
	else p=1;
	Indiv=Num%10;
	Ten=(Num%100-Indiv)/10;
	Hundred=(Num%1000-Num%100)/100;
	Thousand=(Num%10000-Num%1000)/1000;
	TenThou=Num/10000;
	printf("\n位数为:%d\n",p);
	switch(p)
	{
		case 5:printf("每位数字为:%d,%d,%d,%d,%d\n",TenThou,Thousand,Hundred,Ten,Indiv);
			   printf("反序序列为:%d,%d,%d,%d,%d\n",Indiv,Ten,Hundred,Thousand,TenThou);break;
		case 4:printf("每位数字为:%d,%d,%d,%d\n",Thousand,Hundred,Ten,Indiv);
			   printf("反序序列为:%d,%d,%d,%d\n",Indiv,Ten,Hundred,Thousand);break;
		case 3:printf("每位数字为:%d,%d,%d\n",Hundred,Ten,Indiv);
			   printf("反序序列为:%d,%d,%d\n",Indiv,Ten,Hundred);break;
		case 2:printf("每位数字为:%d,%d\n",Ten,Indiv);
			   printf("反序序列为:%d,%d\n",Indiv,Ten);break;
		case 1:printf("每位数字为:%d\n",Indiv);
			   printf("反序序列为:%d\n",Indiv);break;
	}
	printf("\n\n");
	main();
}

void Spaclfun3()	/*实际问题处理的数学处理*/
{
	int h=10;
	double x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,x,y,d1,d2,d3,d4;
	printf("请输入某点坐标,逗号隔开(x,y)=");
	scanf("\n%lf,%lf",&x,&y);
	d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	if(d1>1&&d2>1&&d3>1&&d4>1) h=0;
	printf("此点处的高度为: %d m\n\n",h);
	main();
}
