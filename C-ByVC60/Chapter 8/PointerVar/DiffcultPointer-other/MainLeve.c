#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define N 10


void ThereNumArr();
void EqualString();
void NotEqualStr();
void DifferMonth();
void StringSorts();
void NumberSorts();
void DefIntegral();
void NewFreeFuns();

void Clrscr();

void main()
{
	int n;
	printf("------------1.�������ֵ�����-----------\n");
	printf("------------2.�ȳ��ַ�������-----------\n");
	printf("------------3.���ȳ��ַ�����-----------\n");
	printf("------------4.��ͬ�·ݵĶ�Ӧ-----------\n");
	printf("------------5.N ���ַ�������-----------\n");
	printf("------------6.N �����ֵ�����-----------\n");
	printf("------------7.�����󶨻���-----------\n");
	printf("------------8.New & Free����-----------\n");

	printf("������Ҫ�鿴���㷨���No=");scanf("%d",&n);
	while(n>8||n<1)
	{
		printf("������������ȷ���������No=");scanf("%d",&n);
	}

	switch(n)
	{
	case 1:ThereNumArr();break;
	case 2:EqualString();break;
	case 3:NotEqualStr();break;
	case 4:DifferMonth();break;
	case 5:StringSorts();break;
	case 6:NumberSorts();break;
	case 7:DefIntegral();break;
	case 8:NewFreeFuns();break;
	default :system("pause");break;
	}
}