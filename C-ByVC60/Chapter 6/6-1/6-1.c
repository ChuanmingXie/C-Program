/*һά������㷨չʾ*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define N 10	   /*��С����Ķ���*/

void PrimeSearch();/* 1.һά���� ��������*/
void BinlfSearch();/* 2.һά���� �۰����*/
void SortAicglhs();/* 3.һά���� �����㷨*/
void InsertSorts();/* 4.һά���� ��������*/
void ReverseSort();/* 5.һά���� �����㷨*/
void AndianSearh();/* 6.��ά���� �������*/
void LinesMartix();/* 7.��ά���� �Խ��ߺ�*/
void YanghMartix();/* 8.��ά���� �������*/
void PrintMartix();/* 9.��ά���� ͼ�����*/
void MagicMartix();/*10.��ά���� ħ������*/

void Clrscr();/*СС����������*/

int main()
{
	int No;
	printf("---------1.һά����--��������---------\n");
	printf("---------2.һά����--�۰����---------\n");
	printf("---------3.һά����--�����㷨---------\n");
	printf("---------4.һά����--��������---------\n");
	printf("---------5.һά����--�����㷨---------\n");
	printf("---------6.��ά����--�������---------\n");
	printf("---------7.��ά����--�Խ��ߺ�---------\n");
	printf("---------8.��ά����--�������---------\n");
	printf("---------9.��ά����--ͼ�����---------\n");
	printf("--------10.��ά����--ħ������---------\n");
	printf("������Ҫչʾ�㷨�ı��:No=");scanf("%d",&No);
	while(No>10||No<=0){
		printf("������������,����������:No=");scanf("%d",&No);
	}
	switch(No){
	case 1: PrimeSearch();break;	/* 1.һά���� ��������*/
	case 2: BinlfSearch();break;	/* 2.һά���� �۰����*/
	case 3: SortAicglhs();break;	/* 3.һά���� �����㷨*/
	case 4: InsertSorts();break;	/* 4.һά���� ��������*/
	case 5: ReverseSort();break;	/* 5.һά���� �����㷨*/
	case 6: AndianSearh();break;	/* 6.��ά���� �������*/
	case 7: LinesMartix();break;	/* 7.��ά���� �Խ��ߺ�*/
	case 8: YanghMartix();break;	/* 8.��ά���� �������*/
	case 9: PrintMartix();break;	/* 9.��ά���� ͼ�����*/
	case 10:MagicMartix();break;	/*10.��ά���� ħ������*/
	}
	getch();
	return 0;
}

void Clrscr()
{
	if(getch())
		system("CLS");
}

/* 1.һά���� ��������*/
void PrimeSearch(){
	int a[1000],i=0,j=0,p=0;
	for(i=0;i<1000;++i)
		a[i]=i;
	a[1]=0;
	for(i=2;i<sqrt(1000);++i){
		for(j=i+1;j<1000;++j)
		{
			if(a[i]!=0&&a[j]!=0&&a[j]%a[i]==0)
				a[j]=0;
		}
	}
	for(i=2;i<1000;++i){
		if(a[i]!=0){
			printf("%4d ",a[i]);
			++p;
			if(p%8==0)printf("\n");
		}
	}
	printf("\n");
	Clrscr();
	main();
}

/* 2.һά���� �۰����*/
void BinlfSearch(){
	int a[N],low=0,high=N-1,flag=1,sign,mid,local,num,i=1;
	char c;
	printf("����������:\na[0]=");
	scanf("%d",&a[0]);
	while(i<N){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
			printf("a[%d]����,�밴������������:\n",i);
		else ++i;
	}

	printf("\n�����������Ϊ:\nλ��:");
	for(i=0;i<N;++i)
		printf("%3d",i+1);
	printf("\n����:");
	for(i=0;i<N;++i)
		printf("%3d",a[i]);

	while(flag){
		printf("\n������Ҫ���ҵ�����:num=");
		scanf("%d",&num);
		low=0;
		high=N-1;
		sign=0;
		if(num<a[0]||num>a[N-1])
			local=-1;
		while((!sign)&&(low<=high)){
			mid=(low+high)/2;
			if(num==a[mid]){
				local=mid;
				sign=1;
				printf("�����к���%d,λ��Ϊ:%d\n",num,local+1);
			}
			else if(num>a[mid])
				low=mid+1;
			else high=mid-1;
		}
		if(!sign||local==-1)
			printf("�����в�����%d\n",num);

		printf("���Ƿ����������������?(Y or N):");
		scanf("\n%c",&c);
		while(c!='Y'&&c!='y'&&c!='N'&&c!='n')
		{
			printf("������������,������(Y or N):");
			scanf("%c",&c);
		}
		if(c=='N'||c=='n')
			flag=0;
	}
	Clrscr();
	main();
}

/* 3.һά���� �����㷨*/
void SortAicglhs(){
	void QuickSort(int s[],int low,int high);/*��������*/
	void SelecSort(int s[],int n);/*ѡ������*/
	void BubblSort(int s[],int n);/*��������*/
	void InserSort(int s[],int n);/*��������*/

	int a[N],i,Node,flag=1;
	char c;
	printf("\n--------1.��������-------\n");
	printf("--------2.ѡ������-------\n");
	printf("--------3.��������-------\n");
	printf("--------4.��������-------\n");
	while(flag){
		printf("\n�������ʼ��:");
		for(i=0;i<N;++i)
			scanf("%d",&a[i]);
		printf("\nѡ�������㷨:No=");
		scanf("%d",&Node);
		switch(Node){
		case 1:printf("����������:");QuickSort(a,0,N-1);break;
		case 2:printf("ѡ��������:");SelecSort(a,N);break;
		case 3:printf("����������:");BubblSort(a,N);break;
		case 4:printf("����������:");InserSort(a,N);break;
		}
		for(i=0;i<N;++i)
			printf("%2d ",a[i]);
		printf("\n�Ƿ������(Y or N):");
		scanf("\n%c",&c);
		while(c!='Y'&&c!='y'&&c!='N'&&c!='n')
		{
			printf("��������!(Y or N):");
			scanf("\n%c",&c);
		}
		if(c=='N'||c=='n')
			flag=0;
	}
	Clrscr();
	main();
}

void QuickSort(int s[],int low,int high){
	int i=low,j=high,t;
	if(low<high)
	{
		t=s[i];
		while(i!=j)
		{
			while(i<j&&t<s[j]) --j;
			if(i<j){s[i]=s[j];++i;}
			while(i<j&&t>s[i]) ++i;
			if(i<j){s[j]=s[i];--j;}
		}
		s[i]=t;
		QuickSort(s,low,i-1);
		QuickSort(s,i+1,high);
	}
}
void InserSort(int s[],int n){
	int i,j,t;
	for(i=0;i<n;++i)
	{
		t=s[i];
		for(j=i-1;j>=0&&t<s[j];--j)
			s[j+1]=s[j];
		s[j+1]=t;
	}
}
void SelecSort(int s[],int n){
	int i,j,t;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(s[i]>s[j])
			{t=s[i];s[i]=s[j];s[j]=t;}
		}
	}
}
void BubblSort(int s[],int n){
	int i,j,t;
	for(i=n-1;i>=1;--i)
	{
		for(j=i;j<=n;++j)
		{
			if(s[j-1]>s[j])
			{t=s[j-1];s[j-1]=s[j];s[j]=t;}
		}
	}
}

/* 4.һά���� ��������*/
void InsertSorts(){
	int i,j,t,a[N];
	printf("\n������ԭʼ����:");
	for(i=0;i<N;++i)
		scanf("%d",&a[i]);
	for(i=0;i<N;++i)
	{
		t=a[i];
		for(j=i-1;j>=0&&t<a[j];--j)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	printf("��������Ľ��:");
	for(i=0;i<N;++i)
		printf("%2d ",a[i]);
	Clrscr();
	main();
}

/* 5.һά���� �����㷨*/
void ReverseSort(){
	int a[N],i,j,t;
	printf("\n������ԭʼ��:");
	for(i=0;i<N;++i)
		scanf("%d",&a[i]);
	for(i=0,j=N-1;i<=j;++i,--j)
	{t=a[i];a[i]=a[j];a[j]=t;}
	printf("�������н��:");
	for(i=0;i<N;++i)
		printf("%2d ",a[i]);
	Clrscr();
	main();
}

/* 6.��ά���� �������*/
void AndianSearh(){
	int i,j,mj,a[4][5],max,flag;
	printf("���������:\n");
	for(i=0;i<4;++i)
		for(j=0;j<5;++j)
			scanf("%d",&a[i][j]);
	printf("������ľ���Ϊ:\n");
	for(i=0;i<4;++i){
		for(j=0;j<5;++j)
			printf("%3d ",a[i][j]);
		printf("\n");
	}

	for(i=0;i<4;++i)
	{
		max=a[i][0];
		mj=0;
		for(j=0;j<5;++j)
			if(a[i][j]>max){
				max=a[i][j];
				mj=j;
			}
		flag=1;
		for(i=0;i<4;++i)
			if(max>a[i][mj])
			{
				flag=0;
				continue;
			}
		if(flag)
		{
			printf("����Ϊ:a[%d][%d]=%d\n",i,mj,max);
			break;
		}
	}
	if(!flag)
		printf("�����ڰ���\n");
	Clrscr();
	main();
}

/* 7.��ά���� �Խ��ߺ�*/
void LinesMartix(){
	int i,j,a[3][3],s=0;
	printf("\n�������������:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			scanf("%d",&a[i][j]);
	}
	printf("������ľ���Ϊ:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			printf("%3d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			if(i=j)	s+=a[i][j];
	}
	printf("���ӽ���֮��Ϊ:%d",s);
	Clrscr();
	main();
}

/* 8.��ά���� �������*/
void YanghMartix(){
	int i,j,a[N][N];
	for(i=0;i<N;++i)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	for(i=2;i<N;++i)
		for(j=1;j<=i-1;++j)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<N;++i){
		for(j=0;j<=i;++j)
			printf("%4d ",a[i][j]);
		printf("\n");
	}
	Clrscr();
	main();
}

/* 9.��ά���� ͼ�����*/
void PrintMartix(){
	int i,j,k;
	char space=' ',a[5]={'*','*','*','*','*'};
	for(i=0;i<5;++i){
		for(j=1;j<=i;++j)
			printf(" ");
		for(k=0;k<5;++k)
			printf("%c ",a[k]);
		printf("\n");
	}
	Clrscr();
	main();
}

/*10.��ά���� ħ������*/
void MagicMartix(){
	int a[15][15],i,j,k,p,n;
	p=1;
	while(p){
		printf("������N=");
		scanf("%d",&n);
		if((n!=0)&&(n<=15)&&(n%2!=0))
			p=0;
	}
	for(i=1;i<=n;++i)
		for(j=1;j<=n;++j)
			a[i][j]=0;

	j=n/2+1;
	a[1][j]=1;
	for(k=2;k<=n*n;++k)
	{
		i--;
		j++;
		if((i<1)&&(j>n))
		{
			i=i+2;
			j--;
		}
		else
		{
			if(i<1)i=n;
			if(j>n)j=1;
		}
		if(a[i][j]==0)
		{
			a[i][j]=k;
		}
		else
		{
			i=i+2;
			j--;
			a[i][j]=k;
		}
	}
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	Clrscr();
	main();
}