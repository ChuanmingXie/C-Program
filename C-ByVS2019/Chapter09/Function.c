#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include"public.h"


void Back_M() {
	if (_getch())
		system("CLS");
	main();
}

void Fun1_DeSrct()
{
	int i, days = 0;
	int Day_Tab[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	printf("-------01.�ṹ�����ڶ���Ӧ��-------\n");

	printf("�������ꡢ�¡���:\n");
	scanf_s("%d %d %d", &data.Year, &data.Month, &data.Day);

	for (i = 0; i < data.Month; ++i)
	{
		days += Day_Tab[i];
	}
	days = days + data.Day;

	if ((data.Year % 4 == 0 && data.Year % 100 != 0 || data.Year % 400 == 0) && data.Month >= 3)
		days = days + 1;

	printf("���������֪:\n%d/%d��,��%d��ĵ�%d��\n", data.Month, data.Day, data.Year, days);

	Back_M();
}
void Fun2_UsSrct()
{
	int DayCount(struct data Data);
	printf("-------02.�ṹ����Ϊ��������-------\n");
	printf("�������ꡢ�¡���:\n");
	scanf_s("%d %d %d", &data.Year, &data.Month, &data.Day);
	printf("���������֪:\n%d/%d��,��%d��ĵ�%d��\n", data.Month, data.Day, data.Year, DayCount(data));

	Back_M();
}


void Fun3_PrintS()
{
	int i, j;
	void Inputs(struct student stu[]);
	printf("-------03.ѧ���ĳɼ��������-------\n");
	Inputs(stu);
	printf("\n�����ѧ���ɼ�Ϊ:\n");
	printf("  N0.	Name	Chiness	  Math	English	  Phsical\n");
	for (i = 0; i < L; ++i)
	{
		printf("%5s%10s", stu[i].num, stu[i].name);
		for (j = 0; j < 4; ++j)
		{
			printf("%9.2f", stu[i].score[j]);
		}
		printf("\n");
	}
	Back_M();
}
void Fun4_InputS()
{
	void Inputs(struct student stu[]);
	void Prints(struct student stu[]);
	printf("-------04.ѧ���ĳɼ���������-------\n");
	Inputs(stu);
	Prints(stu);
	Back_M();
}
void Fun5_CountS()
{
	void Countsave();
	void Countprin();
	void CountSort();

	printf("-------05.ѧ���ɼ���ͳ�Ʋ���-------\n");
	//Countsave();
	Countprin();
	CountSort();

	Back_M();
}


void Fun6_DeleNode()
{
	int i, h, count;
	printf("-------06.����ʵ�ְ����ɾ��-------\n");
	for (i = 1; i <= S; i++)
	{
		link[i].number = i;
		link[i].nextp = i + 1;

		if (i == S)
			link[i].nextp = 1;
	}
	printf("\n");

	printf("\n��ʼ���Ľڵ���Ϊ:\n");
	for (i = 1; i <= S; i++)
		printf("%4d", link[i].number);

	count = 0; h = S;

	printf("\n�����뿪�Ľڵ���:\n");

	while (count < S - 1)
	{
		i = 0;
		while (i != 3)
		{
			h = link[h].nextp;
			if (link[h].number)
				i++;
		}
		printf("%4d", link[h].number);
		link[h].number = 0;
		count++;
	}

	printf("\n����ʣ�µĽڵ���:");
	for (i = 1; i <= S; i++)
	{
		if (link[i].number)
			printf("%4d", link[i].number);
	}

	Back_M();
}
void Fun7_NodeDele()
{
	struct StudLink* p, * q, * r;
	long NOD;
	r = p = q = (struct StudLink*)malloc(LEN);
	printf("-------07.��̬�����ɾ���㷨-------\n");
	printf("\n������ڵ���Ϣ����0��������:\n");
	scanf_s("%ld %f", &p->num, &p->score);
	while (p->num != 0)
	{
		q->next = p;
		q = p;
		p = (struct StudLink*)malloc(LEN);
		scanf_s("%ld %f", &p->num, &p->score);
	}
	q->next = NULL;

	printf("\nԭʼ������Ϊ:\n");
	p = r;
	if (p)
	{
		while (p)
		{
			printf("%6ld%8.2f", p->num, p->score);
			p = p->next;
		}
	}

	printf("\n������ɾ���Ľڵ���:");
	scanf_s("%ld", &NOD);
	printf("\nɾ���ýڵ�������Ϊ:\n");
	p = r;
	while (p)
	{
		if (p->num != NOD)
		{
			printf("%6ld%8.2f", p->num, p->score);
			p = p->next;
		}
		else
			p = p->next;
	}
	free(p);
	free(q);

	Back_M();
}
void Fun8_NodeInse()
{
	struct StudLink* s, * r, * t, * l;
	l = s = r = (struct StudLink*)malloc(LEN);
	printf("-------08.��̬����Ĳ����㷨-------\n");
	printf("\n������ڵ���Ϣ,��0��������:\n");
	scanf_s("%ld %f", &s->num, &s->score);
	while (s->num != 0)
	{
		r->next = s;
		r = s;
		s = (struct StudLink*)malloc(LEN);
		scanf_s("%ld %f", &s->num, &s->score);
	}
	r->next = NULL;

	printf("\n�������ԭʼ����Ϊ:\n");
	r = l;
	if (r)
	{
		while (r)
		{
			printf("%6ld%6.2f", r->num, r->score);
			r = r->next;
		}
	}

	printf("\n\n������Ҫ����Ľڵ�:");
	t = (struct StudLink*)malloc(LEN);
	scanf_s("%ld %f", &t->num, &t->score);

	r = l;
	while (r)
	{
		if (t->num <= r->next->num)
		{
			t->next = r->next;
			r->next = t;
			break;
		}
		r = r->next;
	}

	printf("\n��������������Ϊ:\n");
	r = l;
	while (r)
	{
		printf("%6ld%6.2f", r->num, r->score);
		r = r->next;
	}

	Back_M();
}
void Fun9_LinkOper()
{
	struct StudLink* head, * Nadd;
	long DelNum;

	printf("-------09.�������--��ɾ���-------\n");

	/*���������*/
	head = Create();
	Output(head);

	/*ɾ�������*/
	printf("\n������ɾ�����:");
	scanf_s("%ld", &DelNum);
	while (DelNum != 0)
	{
		head = Delete(head, DelNum);
		Output(head);
		printf("\n������ɾ�����:");
		scanf_s("%ld", &DelNum);
	}

	/*���벢���*/
	printf("\n���������ڵ�:");
	Nadd = (struct StudLink*)malloc(LEN);
	scanf_s("%ld %f", &Nadd->num, &Nadd->score);
	while (Nadd->num != 0)
	{
		head = Insert(head, Nadd);
		Output(head);
		printf("\n���������ڵ�:");
		Nadd = (struct StudLink*)malloc(LEN);
		scanf_s("%ld %f", &Nadd->num, &Nadd->score);
	}

	Back_M();
}
void Fun10_MergeNode()
{
	struct StudLink* A, * B, * C;
	struct StudLink* Merge(struct StudLink*, struct StudLink*);
	printf("-------10.�����ѧ������ϲ�-------\n");
	printf("\n�������� A \n");
	A = Create();
	Output(A);

	printf("\n�������� B \n");
	B = Create();
	Output(B);

	printf("\n�ϲ����� C \n");
	C = Merge(A, B);
	Output(C);

	Back_M();
}
void Fun11_DeleLink()
{
	Studata* CreatLink(), * A, * B, * C;
	Studata* DeleteNode(Studata*, Studata*);
	void PrintLink(Studata*);

	printf("-------11.ɾȥ���������ظ���-------\n");

	printf("\n�������� A :\n");
	A = CreatLink();
	PrintLink(A);

	printf("\n�������� B :\n");
	B = CreatLink();
	PrintLink(B);

	printf("\nȥ�غ������ A :\n");
	C = DeleteNode(A, B);
	PrintLink(C);
	Back_M();
}
void Fun12_DeteMore()
{
	printf("-------12.������ɾ������ڵ�-------\n");
	Back_M();
}

