/*�Ƚϴ�С���������*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define N 10
#define M 1000

void Maxfun1();		/*if...else...������������ֵ*/
void Maxfun2();		/*�������ʽ��������������ֵ*/
void Sortfun1();	/*if...else...���������������*/
void Sortfun2();	/*����������д���������������*/
void Spaclfun1();	/*�Կ�ƽ��������������*/
void Spaclfun2();	/*����λ���ڵ������⴦��*/
void Spaclfun3();	/*ʵ�����⴦�����ѧ����*/
int main()
{
	int No=0;
	printf("\n");
	printf("----------1.if...else...������������ֵ---------\n");
	printf("----------2.�������ʽ��������������ֵ---------\n");
	printf("----------3.if...else...���������������---------\n");
	printf("----------4.����������д��������������---------\n");
	printf("----------5.�Կ�ƽ��������������---------------\n");
	printf("----------6.����λ���ڵ������⴦��---------------\n");
	printf("----------7.ʵ�����⴦�����ѧ����---------------\n");
	printf("������Ҫ���е�չʾ�㷨����Ŀ���:No=");
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
void Maxfun1()		/*if...else...������������ֵ*/
{
	int a,b,c;
	printf("������������a,b,c=");scanf("\n%d,%d,%d",&a,&b,&c);
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
void Maxfun2()		/*�������ʽ��������������ֵ*/
{
	int a,b,c;
	printf("������������a,b,c=");scanf("\n%d,%d,%d",&a,&b,&c);
	printf("Max is %d\n\n",(((a>b)?a:b)>c)?((a>b)?a:b):c);
	main();
}
void Sortfun1()		/*if...else...���������������*/
{
	int a,b,c,d,t;
	printf("�������ĸ���:a,b,c,d=");scanf("\n%d,%d,%d,%d",&a,&b,&c,&d);
	printf("��ʼ����Ϊ:a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	if(a>b){t=a,a=b,b=t;}
	if(a>c){t=a,a=c,c=t;}
	if(a>d){t=a,a=d,d=t;}
	if(b>c){t=b,b=c,c=t;}
	if(b>d){t=b,b=d,d=t;}
	if(c>d){t=c,c=d,d=t;}
	printf("��������Ϊ:%d\t%d\t%d\t%d\n\n",a,b,c,d);
	main();
}
void Sortfun2()		/*����������д��������������*/
{
	int a[N],i=0;
	void QuickSort(int R[],int low,int high);
	void BubbleSort(int R[],int n);
	void InsertSort(int R[],int n);
	void SelectSort(int R[],int n);
	/*1.��������*/
	printf("������10����:");scanf("\n");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	QuickSort(a,0,N);
	printf("����������������Ϊ: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*2.��������*/
	printf("������10����:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	InsertSort(a,N);
	printf("����������������Ϊ: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*3.ѡ������*/
	printf("������10����:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	SelectSort(a,N);
	printf("ѡ��������������Ϊ: ");
	for(i=0;i<10;++i)
		printf("%d ",a[i]);
	printf("\n");
	/*4.��������*/
	printf("������10����:");
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);
	BubbleSort(a,N);
	printf("����������������Ϊ: ");
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

void Spaclfun1()	/*�Կ�ƽ��������������*/
{
	int i;
	printf("������һ��С��%d������:",M);scanf("\n%d",&i);
	while(i>M){
		printf("��������������󣬴���������:");scanf("%d",&i);
	}
	printf("���� %d ƽ��������������Ϊ:%d\n\n",i,(int)sqrt(i));
	main();
}
void Spaclfun2()	/*����λ���ڵ������⴦��*/
{
	int Num,Indiv,Ten,Hundred,Thousand,TenThou,p;
	printf("������һ����λ���ڵ�����:M=");scanf("\n%d",&Num);
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
	printf("\nλ��Ϊ:%d\n",p);
	switch(p)
	{
		case 5:printf("ÿλ����Ϊ:%d,%d,%d,%d,%d\n",TenThou,Thousand,Hundred,Ten,Indiv);
			   printf("��������Ϊ:%d,%d,%d,%d,%d\n",Indiv,Ten,Hundred,Thousand,TenThou);break;
		case 4:printf("ÿλ����Ϊ:%d,%d,%d,%d\n",Thousand,Hundred,Ten,Indiv);
			   printf("��������Ϊ:%d,%d,%d,%d\n",Indiv,Ten,Hundred,Thousand);break;
		case 3:printf("ÿλ����Ϊ:%d,%d,%d\n",Hundred,Ten,Indiv);
			   printf("��������Ϊ:%d,%d,%d\n",Indiv,Ten,Hundred);break;
		case 2:printf("ÿλ����Ϊ:%d,%d\n",Ten,Indiv);
			   printf("��������Ϊ:%d,%d\n",Indiv,Ten);break;
		case 1:printf("ÿλ����Ϊ:%d\n",Indiv);
			   printf("��������Ϊ:%d\n",Indiv);break;
	}
	printf("\n\n");
	main();
}

void Spaclfun3()	/*ʵ�����⴦�����ѧ����*/
{
	int h=10;
	double x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,x,y,d1,d2,d3,d4;
	printf("������ĳ������,���Ÿ���(x,y)=");
	scanf("\n%lf,%lf",&x,&y);
	d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	if(d1>1&&d2>1&&d3>1&&d4>1) h=0;
	printf("�˵㴦�ĸ߶�Ϊ: %d m\n\n",h);
	main();
}
