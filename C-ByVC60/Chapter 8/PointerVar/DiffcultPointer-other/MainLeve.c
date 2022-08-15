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
	printf("------------1.三个数字的升序-----------\n");
	printf("------------2.等长字符串排序-----------\n");
	printf("------------3.不等长字符排序-----------\n");
	printf("------------4.不同月份的对应-----------\n");
	printf("------------5.N 个字符串排序-----------\n");
	printf("------------6.N 个数字的排序-----------\n");
	printf("------------7.矩阵法求定积分-----------\n");
	printf("------------8.New & Free函数-----------\n");

	printf("请输入要查看的算法序号No=");scanf("%d",&n);
	while(n>8||n<1)
	{
		printf("您的输入有误确认输入序号No=");scanf("%d",&n);
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