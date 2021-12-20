/*一级指针变量 *p 的相关算法*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define N 20

void ArrDispose();	/*1.十个数字的处理*/
void ArrMovenum();	/*2.N 个数字中移动*/
void ArrSelects();	/*3.N 个数字中筛选*/
void ArrReserve();	/*4.N 个数字的逆序*/

void StrAscends();	/*5.三个字符串升序*/
void StrLengthc();	/*6.求字符串的长度*/
void StrCopystr();	/*7.复制某位置字符*/
void StrCountda();	/*8.对字符串的统计*/
void StrSelects();	/*9.在字符串中筛选*/
void Strcmpfuns();	/*10.两个字符串比较*/

void MatConvert();	/*11.三阶矩阵的转置*/
void MatDispose();	/*12.五阶矩阵的处理*/
void StudScores();	/*13.综合题分数报表*/

void Clrscr();		/*小小的清屏函数*/

void ArrInput(int *,int *);
void ArrOuput(int *,int);
void Gets(char *);

int main()
{
	//char str[20];
	int s;
	/*指向一维数组首地址的指针变量 *p */
	printf("--------1.十个数字的处理-------\n");
	printf("--------2.N 个数字中移动-------\n");
	printf("--------3.N 个数字中筛选-------\n");
	printf("--------4.N 个数字的逆序-------\n");
	/*指向字符串首地址的指针变量 *p  */
	printf("--------5.三个字符串升序-------\n");
	printf("--------6.求字符串的长度-------\n");
	printf("--------7.复制某位置字符-------\n");
	printf("--------8.对字符串的统计-------\n");
	printf("--------9.在字符串中筛选-------\n");
	printf("-------10.两个字符串比较-------\n");
	/*指向二维数组首地址的指针变量 *p */
	printf("-------11.三阶矩阵的转置-------\n");
	printf("-------12.五阶矩阵的处理-------\n");
	printf("-------13.综合题分数报表-------\n");
	printf("------------0.EXIT-------------\n");
	printf("请输入您要查看的算法序号No=");scanf("%d",&s);
	while(s>13||s<0){
	printf("您的输入有误确认输入序号No=");scanf("%d",&s);
	}

	switch(s)
	{
	case 0:getch(); break;
	case 1:ArrDispose(); break;/*1.十个数字的处理*/
	case 2:ArrMovenum(); break;/*2.N 个数字中移动*/
	case 3:ArrSelects(); break;/*3.N 个数字中筛选*/
	case 4:ArrReserve(); break;/*4.N 个数字的逆序*/

	case 5:StrAscends(); break;/*5.三个字符串升序*/
	case 6:StrLengthc(); break;/*6.求字符串的长度*/
	case 7:StrCopystr(); break;/*7.复制某位置字符*/
	case 8:StrCountda(); break;/*8.对字符串的统计*/
	case 9:StrSelects(); break;/*9.在字符串中筛选*/
	case 10:Strcmpfuns(); break;/*10.两个字符串比较*/

	case 11:MatConvert(); break;/*11.三阶矩阵的转置*/
	case 12:MatDispose(); break;/*12.五阶矩阵的处理*/
	case 13:StudScores(); break;/*13.综合题分数报表*/
	}
}

void Clrscr()
{
	if(getch())
		system("CLS");
	main();
}

/*1.十个数字的处理*/
void ArrDispose()
{
	void Dispose(int *,int);
	int arr[N],n;
	ArrInput(arr,&n);
	Dispose(arr,n);
	ArrOuput(arr,n);
	Clrscr();
}
/*2.N 个数字中移动*/
void ArrMovenum()
{
	void MovenumFront(int *,int,int *);
	void MovenumBehin(int *,int,int *);
	int arr[N],n,m;

	ArrInput(arr,&n);
	MovenumFront(arr,n,&m);
	ArrOuput(arr,n);
	printf("\n");
	ArrInput(arr,&n);
	MovenumBehin(arr,n,&m);
	ArrOuput(arr,n);

	Clrscr();
}
/*3.N 个数字中筛选*/
void ArrSelects()
{

	Clrscr();
}
/*4.N 个数字的逆序*/
void ArrReserve()
{
	void Reserve(int *,int n);
	int arr[N],n;
	ArrInput(arr,&n);
	Reserve(arr,n);
	ArrOuput(arr,n);
	Clrscr();
}
/*5.三个字符串升序*/
void StrAscends()
{
	void swap(char *,char *);
	char str1[N],str2[2*N],str3[N];
	printf("请输入三行字符串:\n");scanf("\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0) swap(str1,str2);
	if(strcmp(str1,str3)>0) swap(str1,str3);
	if(strcmp(str2,str3)>0) swap(str2,str3);
	printf("排序完成后字符串:\n%s\n%s\n%s\n",str1,str2,str3);
	Clrscr();
}
/*6.求字符串的长度*/
void StrLengthc()
{
	int Lengthc(char *);
	char str[N];
	Gets(str);
	printf("字符串长度:%d\n",Lengthc(str));
	Clrscr();
}
/*7.复制某位置字符*/
void StrCopystr()
{
	void Copystr(char *,char *,int *,int *);
	char str1[N],str2[N];
	int start,end;
	Gets(str1);
	Copystr(str1,str2,&start,&end);
	puts(str2);
	Clrscr();
}
/*8.对字符串的统计*/
void StrCountda()
{
	void Countdata(char *);
	char str[N];
	Gets(str);
	Countdata(str);
	Clrscr();
}
/*9.在字符串中筛选*/
void StrSelects()
{
	void Select(char *);
	char str[N];
	Gets(str);
	Select(str);
	Clrscr();
}
/*10.两个字符串比较*/
void Strcmpfuns()
{
	int Strcmpfun(char *,char *);
	char str1[N],str2[N];
	Gets(str1);
	Gets(str2);
	printf("结果为:%d\n",Strcmpfun(str1,str2));
	Clrscr();
}

/*11.三阶矩阵的转置*/
void MatConvert()
{
	void MatInput(int *,int *);		//输入二维数组
	void MatOuput(int *,int );		//输出二维数组
	void Convert(int a[][N],int b[][N],int );
	int a[N][N],b[N][N],m;

	MatInput(&a[0][0],&m);
	MatOuput(&a[0][0],m);
	Convert(a,b,m);
	MatOuput(&b[0][0],m);

	Clrscr();
}

/*12.五阶矩阵的处理*/
void MatDispose()
{
	//printf("\n这是等长字符串排序算法\n");
	void sort(char s[][6]);
	char str[10][6];
	int i=0;
	printf("请输入10个等长字符串\n");
	for (i = 0; i < 10; i++)
	{
		//gets(str[i]);
		scanf("%s",str[i]);
	}
	sort(str);
	printf("排序后10个字符串顺序\n");
	for (i = 0; i < 10; ++i)
	{
		printf("%s\n", str[i]);
	}

	Clrscr();
}
/*13.综合题分数报表*/
void StudScores()
{
	Clrscr();
}