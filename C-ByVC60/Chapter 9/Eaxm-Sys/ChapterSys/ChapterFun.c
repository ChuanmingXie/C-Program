#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void Clscr()
{
	if(getch())
	{
		system("CLS");
	}
	main();
}

void Funtion9_1()
{
	void fun9_1_1();
	void fun9_1_2();
	void fun9_1_3();
	void fun9_1_4();
	void Back1_One();
	int NO;
	system("CLS");
	printf("---------------这是9.1节的内容--------------\n\n");
	printf("------------9.1.1.声明建立结构体------------\n");
	printf("------------9.1.2.定义结构体变量------------\n");
	printf("------------9.1.3.初始化结构体-例9.1--------\n");
	printf("------------9.1.4.对结构体引用-例9.2--------\n");
	printf("----------------0.返回主菜单----------------\n");
	printf("请输入算法编号:");
	scanf("%d", &NO);
	switch(NO)
	{
	case 1:fun9_1_1();break;
	case 2:fun9_1_2();break;
	case 3:fun9_1_3();break;
	case 4:fun9_1_4();break;
	case 0:Clscr();break;
	default :printf("错误!");system("pause");break;
	}
	Clscr();
}
void Funtion9_2()
{
	void fun9_2_1();
	void fun9_2_2();
	void Back2_Two();
	int NO;
	system("CLS");
	printf("--------------这是9.2节的内容--------------\n\n");
	printf("------------9.2.1定义结构体数组------------\n");
	printf("------------9.2.2应用结构体数组------------\n");
	printf("---------------0.返回主菜单----------------\n");
	printf("请输入算法编号:");
	scanf("%d", &NO);
	switch (NO)
	{
	case 1:fun9_2_1(); break;
	case 2:fun9_2_2(); break;
	case 0:Clscr(); break;
	default:printf("错误!"); system("pause"); break;
	}
	Clscr();
}
void Funtion9_3()
{	void fun9_3_1();
	void fun9_3_2();
	void fun9_3_3();
	void Back3_Thr();
	int N;
	system("CLS");
	printf("--------------这是9.3节的内容--------------\n\n");
	printf("---------9_3_1指向结构体变量的指针---------\n");
	printf("---------9_3_2指向结构体数组的指针---------\n");
	printf("---------9_3_3用前面两个指针作参数---------\n");
	printf("---------------0.返回主菜单----------------\n");
	printf("请输入算法编号:");scanf("%d",&N);
	switch(N)
	{
	case 1:fun9_3_1();break;
	case 2:fun9_3_2();break;
	case 3:fun9_3_3();break;
	case 0:Clscr();	break;
	default :printf("错误!");system("pause");break;
	}
	Clscr();
}
void Funtion9_4()
{
	void fun9_4_1();
	void fun9_4_2();
	void fun9_4_3();
	void fun9_4_4();
	void Back4_Fou();
	int N;

	system("CLS");
	printf("--------------这是9.4节的内容--------------\n\n");
	printf("-----------9.4.1什么是链表定义链表---------\n");
	printf("-----------9.4.2建立简单的静态链表---------\n");
	printf("-----------9.4.3建立负杂的动态链表---------\n");
	printf("-----------9.4.4输出链表对链表输出---------\n");

	printf("请输入查看的算法编号:");
	scanf("%d", &N);

	switch (N)
	{
	case 1:fun9_4_1(); break;
	case 2:fun9_4_2(); break;
	case 3:fun9_4_3(); break;
	case 4:fun9_4_4(); break;
	case 0:Clscr(); break;
	default:printf("ERROR!"); system("pause"); break;
	}
	Clscr();
}
void Funtion9_5()
{
	void Back5_Fiv();
	void fun9_5_1();
	void fun9_5_2();
	void fun9_5_3();
	void fun9_5_4();
	int N;

	system("CLS");
	printf("--------------这是9.5节的内容--------------\n\n");
	printf("----------9.5.1什么是共用体类型------------\n");
	printf("----------9.5.2引用共用体变量的方式--------\n");
	printf("----------9.5.3共用体数据类型的特点--------\n");
	printf("----------9.5.4共用体类型的综合举例--------\n");

	printf("请输入要查看的算法编号:");
	scanf("%d",&N);
	switch(N)
	{
	case 1:fun9_5_1();break;
	case 2:fun9_5_2();break;
	case 3:fun9_5_3();break;
	case 4:fun9_5_4();break;
	case 0:Clscr();break;
	default :printf("ERROR!");system("pause");break;
	}
	Clscr();
}
void Funtion9_6()
{
	void fun9_6_1();
	system("CLS");
	printf("--------------这是9.6节的内容--------------\n\n");
	fun9_6_1();
	Clscr();
}

void Funtion9_7()
{
	system("CLS");
	printf("--------------这是9.7节的内容--------------\n\n");
	printf("本节无例题请参考课本文字内容自行理解\n");
	printf("------------------The End------------------\n\n");
	Clscr();
}
