#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include"public.h"

void main() {
	int N;
	printf("************************************\n");
	printf("--------01.�ṹ�����ڶ���Ӧ��-------\n");
	printf("--------02.�ṹ����Ϊ��������-------\n");
	printf("************************************\n");
	printf("--------03.ѧ���ĳɼ��������-------\n");
	printf("--------04.ѧ���ĳɼ���������-------\n");
	printf("--------05.ѧ���ɼ���ͳ�Ʋ���-------\n");
	printf("************************************\n");
	printf("--------06.����ʵ�ְ����ɾ��-------\n");
	printf("--------07.��̬�����ɾ���㷨-------\n");
	printf("--------08.��̬����Ĳ����㷨-------\n");
	printf("--------09.�������--��ɾ���-------\n");
	printf("--------10.�����ѧ������ϲ�-------\n");
	printf("--------11.ɾȥ���������ظ���-------\n");
	printf("--------12.������ɾ������ڵ�-------\n");
	printf("************************************\n\n");
	printf("������Ҫ�鿴���㷨���:");
	scanf_s("%d", &N);

	switch (N)
	{
	case 1:Fun1_DeSrct(); break;
	case 2:Fun2_UsSrct(); break;
	case 3:Fun3_PrintS(); break;
	case 4:Fun4_InputS(); break;
	case 5:Fun5_CountS(); break;
	case 6:Fun6_DeleNode(); break;
	case 7:Fun7_NodeDele(); break;
	case 8:Fun8_NodeInse(); break;
	case 9:Fun9_LinkOper(); break;
	case 10:Fun10_MergeNode(); break;
	case 11:Fun11_DeleLink(); break;
	case 12:Fun12_DeteMore(); break;
	case 0:printf("Thank you!"); system("pause"); break;
	default:printf("ERROR!"); system("pause"); break;
	}
}