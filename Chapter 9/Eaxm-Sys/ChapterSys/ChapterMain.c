#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

extern void Funtion9_1();	//9.1 �����ʹ�ýṹ�����
extern void Funtion9_2();	//9.2 ---ʹ�ýṹ������---
extern void Funtion9_3();	//9.3 ------�ṹ��ָ��----
extern void Funtion9_4();	//9.4 ---��ָ�봦������---
extern void Funtion9_5();	//9.5 ------����������----
extern void Funtion9_6();	//9.6 ----ʹ��ö������----
extern void Funtion9_7();	//9.7 ��typedef������������
extern void Clscr();		//����

extern void main()
{
	int N;
	printf("---------------����������---------------\n\n");
	printf("--------9.1 �����ʹ�ýṹ�����--------\n");
	printf("--------9.2 ---ʹ�ýṹ������-----------\n");
	printf("--------9.3 ------�ṹ��ָ��------------\n");
	printf("--------9.4 ---��ָ�봦������-----------\n");
	printf("--------9.5 ------����������------------\n");
	printf("--------9.6 ----ʹ��ö������------------\n");
	printf("--------9.7 ��typedef������������-------\n");
	printf("---------------0.�˳�����---------------\n");
	printf("������Ҫ�鿴��С�ڱ��:");
	scanf_s("%d", &N);

	switch(N)
	{
	case 1:Funtion9_1();	break;
	case 2:Funtion9_2();	break;
	case 3:Funtion9_3();	break;
	case 4:Funtion9_4();	break;
	case 5:Funtion9_5();	break;
	case 6:Funtion9_6();	break;
	case 7:Funtion9_7();	break;
	case 0:exit(0);
	default :printf("����!");system("pause");;break;
	}
}