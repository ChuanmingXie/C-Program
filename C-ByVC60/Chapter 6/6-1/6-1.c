/*一维数组的算法展示*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define N 10	   /*对小数组的定义*/

void PrimeSearch();/* 1.一维数组 素数查找*/
void BinlfSearch();/* 2.一维数组 折半查找*/
void SortAicglhs();/* 3.一维数组 排序算法*/
void InsertSorts();/* 4.一维数组 插入排序*/
void ReverseSort();/* 5.一维数组 逆序算法*/
void AndianSearh();/* 6.二维数组 鞍点查找*/
void LinesMartix();/* 7.二维数组 对角线和*/
void YanghMartix();/* 8.二维数组 杨辉三角*/
void PrintMartix();/* 9.二维数组 图案输出*/
void MagicMartix();/*10.二维数组 魔方矩阵*/

void Clrscr();/*小小的清屏函数*/

int main()
{
	int No;
	printf("---------1.一维数组--素数查找---------\n");
	printf("---------2.一维数组--折半查找---------\n");
	printf("---------3.一维数组--排序算法---------\n");
	printf("---------4.一维数组--插入排序---------\n");
	printf("---------5.一维数组--逆序算法---------\n");
	printf("---------6.二维数组--鞍点查找---------\n");
	printf("---------7.二维数组--对角线和---------\n");
	printf("---------8.二维数组--杨辉三角---------\n");
	printf("---------9.二维数组--图案输出---------\n");
	printf("--------10.二维数组--魔方矩阵---------\n");
	printf("请输入要展示算法的编号:No=");scanf("%d",&No);
	while(No>10||No<=0){
		printf("您的输入有误,请重新输入:No=");scanf("%d",&No);
	}
	switch(No){
	case 1: PrimeSearch();break;	/* 1.一维数组 素数查找*/
	case 2: BinlfSearch();break;	/* 2.一维数组 折半查找*/
	case 3: SortAicglhs();break;	/* 3.一维数组 排序算法*/
	case 4: InsertSorts();break;	/* 4.一维数组 插入排序*/
	case 5: ReverseSort();break;	/* 5.一维数组 逆序算法*/
	case 6: AndianSearh();break;	/* 6.二维数组 鞍点查找*/
	case 7: LinesMartix();break;	/* 7.二维数组 对角线和*/
	case 8: YanghMartix();break;	/* 8.二维数组 杨辉三角*/
	case 9: PrintMartix();break;	/* 9.二维数组 图案输出*/
	case 10:MagicMartix();break;	/*10.二维数组 魔方矩阵*/
	}
	getch();
	return 0;
}

void Clrscr()
{
	if(getch())
		system("CLS");
}

/* 1.一维数组 素数查找*/
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

/* 2.一维数组 折半查找*/
void BinlfSearch(){
	int a[N],low=0,high=N-1,flag=1,sign,mid,local,num,i=1;
	char c;
	printf("请输入数据:\na[0]=");
	scanf("%d",&a[0]);
	while(i<N){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
			printf("a[%d]有误,请按升序输入数据:\n",i);
		else ++i;
	}

	printf("\n您输入的序列为:\n位置:");
	for(i=0;i<N;++i)
		printf("%3d",i+1);
	printf("\n序列:");
	for(i=0;i<N;++i)
		printf("%3d",a[i]);

	while(flag){
		printf("\n请输入要查找的数据:num=");
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
				printf("序列中含有%d,位置为:%d\n",num,local+1);
			}
			else if(num>a[mid])
				low=mid+1;
			else high=mid-1;
		}
		if(!sign||local==-1)
			printf("序列中不存在%d\n",num);

		printf("您是否继续查找其他数据?(Y or N):");
		scanf("\n%c",&c);
		while(c!='Y'&&c!='y'&&c!='N'&&c!='n')
		{
			printf("您的输入有误,请输入(Y or N):");
			scanf("%c",&c);
		}
		if(c=='N'||c=='n')
			flag=0;
	}
	Clrscr();
	main();
}

/* 3.一维数组 排序算法*/
void SortAicglhs(){
	void QuickSort(int s[],int low,int high);/*快速排序*/
	void SelecSort(int s[],int n);/*选择排序*/
	void BubblSort(int s[],int n);/*起泡排序*/
	void InserSort(int s[],int n);/*插入排序*/

	int a[N],i,Node,flag=1;
	char c;
	printf("\n--------1.快速排序-------\n");
	printf("--------2.选择排序-------\n");
	printf("--------3.起泡排序-------\n");
	printf("--------4.插入排序-------\n");
	while(flag){
		printf("\n请输入初始序:");
		for(i=0;i<N;++i)
			scanf("%d",&a[i]);
		printf("\n选择排序算法:No=");
		scanf("%d",&Node);
		switch(Node){
		case 1:printf("快速排序结果:");QuickSort(a,0,N-1);break;
		case 2:printf("选择排序结果:");SelecSort(a,N);break;
		case 3:printf("起泡排序结果:");BubblSort(a,N);break;
		case 4:printf("插入排序结果:");InserSort(a,N);break;
		}
		for(i=0;i<N;++i)
			printf("%2d ",a[i]);
		printf("\n是否继续？(Y or N):");
		scanf("\n%c",&c);
		while(c!='Y'&&c!='y'&&c!='N'&&c!='n')
		{
			printf("输入有误!(Y or N):");
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

/* 4.一维数组 插入排序*/
void InsertSorts(){
	int i,j,t,a[N];
	printf("\n请输入原始序列:");
	for(i=0;i<N;++i)
		scanf("%d",&a[i]);
	for(i=0;i<N;++i)
	{
		t=a[i];
		for(j=i-1;j>=0&&t<a[j];--j)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	printf("插入排序的结果:");
	for(i=0;i<N;++i)
		printf("%2d ",a[i]);
	Clrscr();
	main();
}

/* 5.一维数组 逆序算法*/
void ReverseSort(){
	int a[N],i,j,t;
	printf("\n请输入原始序:");
	for(i=0;i<N;++i)
		scanf("%d",&a[i]);
	for(i=0,j=N-1;i<=j;++i,--j)
	{t=a[i];a[i]=a[j];a[j]=t;}
	printf("逆序序列结果:");
	for(i=0;i<N;++i)
		printf("%2d ",a[i]);
	Clrscr();
	main();
}

/* 6.二维数组 鞍点查找*/
void AndianSearh(){
	int i,j,mj,a[4][5],max,flag;
	printf("请输入矩阵:\n");
	for(i=0;i<4;++i)
		for(j=0;j<5;++j)
			scanf("%d",&a[i][j]);
	printf("您输入的矩阵为:\n");
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
			printf("鞍点为:a[%d][%d]=%d\n",i,mj,max);
			break;
		}
	}
	if(!flag)
		printf("不存在鞍点\n");
	Clrscr();
	main();
}

/* 7.二维数组 对角线和*/
void LinesMartix(){
	int i,j,a[3][3],s=0;
	printf("\n请输入矩阵数据:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
			scanf("%d",&a[i][j]);
	}
	printf("您输入的矩阵为:\n");
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
	printf("主队角线之和为:%d",s);
	Clrscr();
	main();
}

/* 8.二维数组 杨辉三角*/
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

/* 9.二维数组 图案输出*/
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

/*10.二维数组 魔方矩阵*/
void MagicMartix(){
	int a[15][15],i,j,k,p,n;
	p=1;
	while(p){
		printf("请输入N=");
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