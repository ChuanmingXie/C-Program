#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void ThereNumArr();
void EqualString1();
void EqualString2();
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
	printf("------------3.�ȳ��ַ�������-----------\n");
	printf("------------4.���ȳ��ַ�����-----------\n");
	printf("------------5.���ȳ���������-----------\n");
	printf("------------6.������ֵ�����-----------\n");
	printf("------------7.�����󶨻���-----------\n");
	printf("------------8.New & Free����-----------\n");
	printf("------------9.��ͬ�·ݵĶ�Ӧ-----------\n");

	printf("������Ҫ�鿴���㷨���No=");scanf("%d",&n);

	switch(n)
	{
	case 1:ThereNumArr();break;
	case 2:EqualString1();break;
	case 3:EqualString2();break;
	case 4:NotEqualStr();break;
	case 5:StringSorts();break;
	case 6:NumberSorts();break;
	case 7:DefIntegral();break;
	case 8:NewFreeFuns();break;
	case 9:DifferMonth();break;
	default :system("pause");break;
	}
}