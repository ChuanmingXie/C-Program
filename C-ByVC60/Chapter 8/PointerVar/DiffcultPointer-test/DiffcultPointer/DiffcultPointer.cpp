// DiffcultPointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void ThreeNumSor();		//三个数字的升序
void EqualString();		//等长字符串排序
void NotEqualStr();		//不等长字符排序
void DifferMonth();		//不同月份的对应
void StringSorts();		//N 个字符串排序
void NumberSorts();		//N 个数字的排序
void DefIntegral();		//矩阵法求定积分
void NewFreefuns();		//New & free函数

void Clrscr();

int _tmain()
{
	int n;
	printf_s("------------1.三个数字的升序------------\n");
	printf_s("------------2.等长字符串排序------------\n");
	printf_s("------------3.不等长字符排序------------\n");
	printf_s("------------4.不同月份的对应------------\n");
	printf_s("------------5.N 个字符串排序------------\n");
	printf_s("------------6.N 个数字的排序------------\n");
	printf_s("------------7.矩阵法求定积分------------\n");
	printf_s("------------8.New & free函数------------\n");
	printf_s("请输入您要查看的算法序号No=");scanf_s("%d", &n);
	while (n > 8 || n < 1)
	{
		printf_s("您的输入有误确认输入序号No="); scanf_s("%d", &n);
	}

	switch (n)
	{
	case 1:ThreeNumSor(); break;
	case 2:EqualString(); break;
	case 3:NotEqualStr(); break; 
	case 4:DifferMonth(); break;
	case 5:StringSorts(); break;
	case 6:NumberSorts(); break;
	case 7:DefIntegral(); break;
	case 8:NewFreefuns(); break;
	default:system("pause");break;
	}
	
	return 0;
}


void Clrscr()
{
	if (_getch())
	{
		system("CLS");
	}
	_tmain();
}

//三个数字的升序
void ThreeNumSor()
{
	printf("\n这是三个数字的升序算法\n");
	void swap(int *, int *);
	int a, b, c;
	int *p1, *p2, *p3;
	printf_s("请输入三个整数a,b,c=");
	scanf_s("%d,%d,%d",&a,&b,&c);
	p1 = &a; p2 = &b; p3 = &c;
	if (a > b) swap(p1, p2);
	if (a > c) swap(p1, p3);
	if (b > c) swap(p2, p3);
	printf_s("排序后三个整数a,b,c=%d,%d,%d\n",a, b, c);
	Clrscr();
}
//等长字符串排序
void EqualString()
{
	printf("\n这是等长字符串排序算法\n");
	void sort(char s[][6]);
	char str[10][6];
	int i=0;
	printf_s("请输入10个等长字符串\n");
	for (i = 0; i < 10; i++)
	{
		gets_s(str[i]);
		//scanf_s("%s",str[i]);
	}
	sort(str);
	printf_s("排序后10个字符串顺序\n");
	for (i = 0; i < 10; ++i)
	{
		printf_s("%s\n", str[i]);
	}
	Clrscr();
}

//不等长字符排序
void NotEqualStr()
{
	printf("这是不等长字符排序算法");
	Clrscr();
}

//不同月份的对应
void DifferMonth()
{
	printf("这是不同月份的对应算法");
	Clrscr();
}
//N 个字符串排序
void StringSorts()
{
	printf("这是N 个字符串排序算法");
	Clrscr();
}
//N 个数字的排序
void NumberSorts()
{
	printf("这是N 个数字的排序算法");
	Clrscr();
}
//矩阵法求定积分
void DefIntegral()
{
	printf("这是矩阵法求定积分算法");
	Clrscr();
}
//New & free函数
void NewFreefuns()
{
	printf("这是New & free函数算法");
	Clrscr();
}
