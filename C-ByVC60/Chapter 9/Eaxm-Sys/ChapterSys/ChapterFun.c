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
	printf("---------------����9.1�ڵ�����--------------\n\n");
	printf("------------9.1.1.���������ṹ��------------\n");
	printf("------------9.1.2.����ṹ�����------------\n");
	printf("------------9.1.3.��ʼ���ṹ��-��9.1--------\n");
	printf("------------9.1.4.�Խṹ������-��9.2--------\n");
	printf("----------------0.�������˵�----------------\n");
	printf("�������㷨���:");
	scanf("%d", &NO);
	switch(NO)
	{
	case 1:fun9_1_1();break;
	case 2:fun9_1_2();break;
	case 3:fun9_1_3();break;
	case 4:fun9_1_4();break;
	case 0:Clscr();break;
	default :printf("����!");system("pause");break;
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
	printf("--------------����9.2�ڵ�����--------------\n\n");
	printf("------------9.2.1����ṹ������------------\n");
	printf("------------9.2.2Ӧ�ýṹ������------------\n");
	printf("---------------0.�������˵�----------------\n");
	printf("�������㷨���:");
	scanf("%d", &NO);
	switch (NO)
	{
	case 1:fun9_2_1(); break;
	case 2:fun9_2_2(); break;
	case 0:Clscr(); break;
	default:printf("����!"); system("pause"); break;
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
	printf("--------------����9.3�ڵ�����--------------\n\n");
	printf("---------9_3_1ָ��ṹ�������ָ��---------\n");
	printf("---------9_3_2ָ��ṹ�������ָ��---------\n");
	printf("---------9_3_3��ǰ������ָ��������---------\n");
	printf("---------------0.�������˵�----------------\n");
	printf("�������㷨���:");scanf("%d",&N);
	switch(N)
	{
	case 1:fun9_3_1();break;
	case 2:fun9_3_2();break;
	case 3:fun9_3_3();break;
	case 0:Clscr();	break;
	default :printf("����!");system("pause");break;
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
	printf("--------------����9.4�ڵ�����--------------\n\n");
	printf("-----------9.4.1ʲô������������---------\n");
	printf("-----------9.4.2�����򵥵ľ�̬����---------\n");
	printf("-----------9.4.3�������ӵĶ�̬����---------\n");
	printf("-----------9.4.4���������������---------\n");

	printf("������鿴���㷨���:");
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
	printf("--------------����9.5�ڵ�����--------------\n\n");
	printf("----------9.5.1ʲô�ǹ���������------------\n");
	printf("----------9.5.2���ù���������ķ�ʽ--------\n");
	printf("----------9.5.3�������������͵��ص�--------\n");
	printf("----------9.5.4���������͵��ۺϾ���--------\n");

	printf("������Ҫ�鿴���㷨���:");
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
	printf("--------------����9.6�ڵ�����--------------\n\n");
	fun9_6_1();
	Clscr();
}

void Funtion9_7()
{
	system("CLS");
	printf("--------------����9.7�ڵ�����--------------\n\n");
	printf("������������ο��α����������������\n");
	printf("------------------The End------------------\n\n");
	Clscr();
}
