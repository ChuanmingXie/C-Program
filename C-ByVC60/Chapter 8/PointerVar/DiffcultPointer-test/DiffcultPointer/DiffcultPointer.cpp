// DiffcultPointer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void ThreeNumSor();		//�������ֵ�����
void EqualString();		//�ȳ��ַ�������
void NotEqualStr();		//���ȳ��ַ�����
void DifferMonth();		//��ͬ�·ݵĶ�Ӧ
void StringSorts();		//N ���ַ�������
void NumberSorts();		//N �����ֵ�����
void DefIntegral();		//�����󶨻���
void NewFreefuns();		//New & free����

void Clrscr();

int _tmain()
{
	int n;
	printf_s("------------1.�������ֵ�����------------\n");
	printf_s("------------2.�ȳ��ַ�������------------\n");
	printf_s("------------3.���ȳ��ַ�����------------\n");
	printf_s("------------4.��ͬ�·ݵĶ�Ӧ------------\n");
	printf_s("------------5.N ���ַ�������------------\n");
	printf_s("------------6.N �����ֵ�����------------\n");
	printf_s("------------7.�����󶨻���------------\n");
	printf_s("------------8.New & free����------------\n");
	printf_s("��������Ҫ�鿴���㷨���No=");scanf_s("%d", &n);
	while (n > 8 || n < 1)
	{
		printf_s("������������ȷ���������No="); scanf_s("%d", &n);
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

//�������ֵ�����
void ThreeNumSor()
{
	printf("\n�����������ֵ������㷨\n");
	void swap(int *, int *);
	int a, b, c;
	int *p1, *p2, *p3;
	printf_s("��������������a,b,c=");
	scanf_s("%d,%d,%d",&a,&b,&c);
	p1 = &a; p2 = &b; p3 = &c;
	if (a > b) swap(p1, p2);
	if (a > c) swap(p1, p3);
	if (b > c) swap(p2, p3);
	printf_s("�������������a,b,c=%d,%d,%d\n",a, b, c);
	Clrscr();
}
//�ȳ��ַ�������
void EqualString()
{
	printf("\n���ǵȳ��ַ��������㷨\n");
	void sort(char s[][6]);
	char str[10][6];
	int i=0;
	printf_s("������10���ȳ��ַ���\n");
	for (i = 0; i < 10; i++)
	{
		gets_s(str[i]);
		//scanf_s("%s",str[i]);
	}
	sort(str);
	printf_s("�����10���ַ���˳��\n");
	for (i = 0; i < 10; ++i)
	{
		printf_s("%s\n", str[i]);
	}
	Clrscr();
}

//���ȳ��ַ�����
void NotEqualStr()
{
	printf("���ǲ��ȳ��ַ������㷨");
	Clrscr();
}

//��ͬ�·ݵĶ�Ӧ
void DifferMonth()
{
	printf("���ǲ�ͬ�·ݵĶ�Ӧ�㷨");
	Clrscr();
}
//N ���ַ�������
void StringSorts()
{
	printf("����N ���ַ��������㷨");
	Clrscr();
}
//N �����ֵ�����
void NumberSorts()
{
	printf("����N �����ֵ������㷨");
	Clrscr();
}
//�����󶨻���
void DefIntegral()
{
	printf("���Ǿ����󶨻����㷨");
	Clrscr();
}
//New & free����
void NewFreefuns()
{
	printf("����New & free�����㷨");
	Clrscr();
}
