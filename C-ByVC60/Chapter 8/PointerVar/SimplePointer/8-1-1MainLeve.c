/*һ��ָ����� *p ������㷨*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define N 20

void ArrDispose();	/*1.ʮ�����ֵĴ���*/
void ArrMovenum();	/*2.N ���������ƶ�*/
void ArrSelects();	/*3.N ��������ɸѡ*/
void ArrReserve();	/*4.N �����ֵ�����*/

void StrAscends();	/*5.�����ַ�������*/
void StrLengthc();	/*6.���ַ����ĳ���*/
void StrCopystr();	/*7.����ĳλ���ַ�*/
void StrCountda();	/*8.���ַ�����ͳ��*/
void StrSelects();	/*9.���ַ�����ɸѡ*/
void Strcmpfuns();	/*10.�����ַ����Ƚ�*/

void MatConvert();	/*11.���׾����ת��*/
void MatDispose();	/*12.��׾���Ĵ���*/
void StudScores();	/*13.�ۺ����������*/

void Clrscr();		/*СС����������*/

void ArrInput(int *,int *);
void ArrOuput(int *,int);
void Gets(char *);

int main()
{
	//char str[20];
	int s;
	/*ָ��һά�����׵�ַ��ָ����� *p */
	printf("--------1.ʮ�����ֵĴ���-------\n");
	printf("--------2.N ���������ƶ�-------\n");
	printf("--------3.N ��������ɸѡ-------\n");
	printf("--------4.N �����ֵ�����-------\n");
	/*ָ���ַ����׵�ַ��ָ����� *p  */
	printf("--------5.�����ַ�������-------\n");
	printf("--------6.���ַ����ĳ���-------\n");
	printf("--------7.����ĳλ���ַ�-------\n");
	printf("--------8.���ַ�����ͳ��-------\n");
	printf("--------9.���ַ�����ɸѡ-------\n");
	printf("-------10.�����ַ����Ƚ�-------\n");
	/*ָ���ά�����׵�ַ��ָ����� *p */
	printf("-------11.���׾����ת��-------\n");
	printf("-------12.��׾���Ĵ���-------\n");
	printf("-------13.�ۺ����������-------\n");
	printf("------------0.EXIT-------------\n");
	printf("��������Ҫ�鿴���㷨���No=");scanf("%d",&s);
	while(s>13||s<0){
	printf("������������ȷ���������No=");scanf("%d",&s);
	}

	switch(s)
	{
	case 0:getch(); break;
	case 1:ArrDispose(); break;/*1.ʮ�����ֵĴ���*/
	case 2:ArrMovenum(); break;/*2.N ���������ƶ�*/
	case 3:ArrSelects(); break;/*3.N ��������ɸѡ*/
	case 4:ArrReserve(); break;/*4.N �����ֵ�����*/

	case 5:StrAscends(); break;/*5.�����ַ�������*/
	case 6:StrLengthc(); break;/*6.���ַ����ĳ���*/
	case 7:StrCopystr(); break;/*7.����ĳλ���ַ�*/
	case 8:StrCountda(); break;/*8.���ַ�����ͳ��*/
	case 9:StrSelects(); break;/*9.���ַ�����ɸѡ*/
	case 10:Strcmpfuns(); break;/*10.�����ַ����Ƚ�*/

	case 11:MatConvert(); break;/*11.���׾����ת��*/
	case 12:MatDispose(); break;/*12.��׾���Ĵ���*/
	case 13:StudScores(); break;/*13.�ۺ����������*/
	}
}

void Clrscr()
{
	if(getch())
		system("CLS");
	main();
}

/*1.ʮ�����ֵĴ���*/
void ArrDispose()
{
	void Dispose(int *,int);
	int arr[N],n;
	ArrInput(arr,&n);
	Dispose(arr,n);
	ArrOuput(arr,n);
	Clrscr();
}
/*2.N ���������ƶ�*/
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
/*3.N ��������ɸѡ*/
void ArrSelects()
{

	Clrscr();
}
/*4.N �����ֵ�����*/
void ArrReserve()
{
	void Reserve(int *,int n);
	int arr[N],n;
	ArrInput(arr,&n);
	Reserve(arr,n);
	ArrOuput(arr,n);
	Clrscr();
}
/*5.�����ַ�������*/
void StrAscends()
{
	void swap(char *,char *);
	char str1[N],str2[2*N],str3[N];
	printf("�����������ַ���:\n");scanf("\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1,str2)>0) swap(str1,str2);
	if(strcmp(str1,str3)>0) swap(str1,str3);
	if(strcmp(str2,str3)>0) swap(str2,str3);
	printf("������ɺ��ַ���:\n%s\n%s\n%s\n",str1,str2,str3);
	Clrscr();
}
/*6.���ַ����ĳ���*/
void StrLengthc()
{
	int Lengthc(char *);
	char str[N];
	Gets(str);
	printf("�ַ�������:%d\n",Lengthc(str));
	Clrscr();
}
/*7.����ĳλ���ַ�*/
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
/*8.���ַ�����ͳ��*/
void StrCountda()
{
	void Countdata(char *);
	char str[N];
	Gets(str);
	Countdata(str);
	Clrscr();
}
/*9.���ַ�����ɸѡ*/
void StrSelects()
{
	void Select(char *);
	char str[N];
	Gets(str);
	Select(str);
	Clrscr();
}
/*10.�����ַ����Ƚ�*/
void Strcmpfuns()
{
	int Strcmpfun(char *,char *);
	char str1[N],str2[N];
	Gets(str1);
	Gets(str2);
	printf("���Ϊ:%d\n",Strcmpfun(str1,str2));
	Clrscr();
}

/*11.���׾����ת��*/
void MatConvert()
{
	void MatInput(int *,int *);		//�����ά����
	void MatOuput(int *,int );		//�����ά����
	void Convert(int a[][N],int b[][N],int );
	int a[N][N],b[N][N],m;

	MatInput(&a[0][0],&m);
	MatOuput(&a[0][0],m);
	Convert(a,b,m);
	MatOuput(&b[0][0],m);

	Clrscr();
}

/*12.��׾���Ĵ���*/
void MatDispose()
{
	//printf("\n���ǵȳ��ַ��������㷨\n");
	void sort(char s[][6]);
	char str[10][6];
	int i=0;
	printf("������10���ȳ��ַ���\n");
	for (i = 0; i < 10; i++)
	{
		//gets(str[i]);
		scanf("%s",str[i]);
	}
	sort(str);
	printf("�����10���ַ���˳��\n");
	for (i = 0; i < 10; ++i)
	{
		printf("%s\n", str[i]);
	}

	Clrscr();
}
/*13.�ۺ����������*/
void StudScores()
{
	Clrscr();
}