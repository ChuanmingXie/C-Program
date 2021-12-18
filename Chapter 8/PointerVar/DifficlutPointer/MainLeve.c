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
	printf("------------1.三个数字的升序-----------\n");
	printf("------------2.等长字符串排序-----------\n");
	printf("------------3.等长字符串排序-----------\n");
	printf("------------4.不等长字符排序-----------\n");
	printf("------------5.不等长符串排序-----------\n");
	printf("------------6.多个数字的排序-----------\n");
	printf("------------7.矩阵法求定积分-----------\n");
	printf("------------8.New & Free函数-----------\n");
	printf("------------9.不同月份的对应-----------\n");

	printf("请输入要查看的算法序号No=");scanf("%d",&n);

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