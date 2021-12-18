#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<stdio.h>
#include<conio.h>

#define N 3
void Back1_One()
{
	if(getch())
	{
		system("CLS");
	}
	Funtion9_1();
}
void fun9_1_1()
{
	FILE* in;
	//char infile[10];
	printf("\n------------这是9.1.1的学习内容------------\n");
	//printf("输入文件名:");
	//scanf("%s",infile);
	if ((in = fopen("9.1.1.txt", "r")) == NULL)
	{
		printf("无法打开此文件\n");
		Back1_One();
	}
	while (!feof(in))
	{
		putchar(fgetc(in));
	}
	printf("\n");
	fclose(in);
	Back1_One();
}
void fun9_1_2()
{
	FILE *in;
	printf("\n------------这是9.1.2的学习内容------------\n");
	if((in=fopen("9.1.2.txt","r"))==NULL)
	{
		printf("无法打开文件");
		Back1_One();
	}
	while(!(feof(in)))
		putchar(fgetc(in));
	printf("\n");
	fclose(in);
	Back1_One();
}
void fun9_1_3()
{

	struct Student
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a={10101,"Li Lin",'M',"123 HuaiBei Road"};

	printf("\n------------这是9.1.3的学习内容------------\n");
	printf("NO.:%ld\nname:%s\nsex:%c\nadress:%s\n",a.num,a.name,a.sex,a.addr);
	Back1_One();
}
void fun9_1_4()
{
	struct Student
	{
		int num;
		char name[20];
		float score;
	}student1,student2;

	printf("\n------------这是9.1.4的学习内容------------\n");
	printf("请输入两人的信息:\n");
	scanf_s("%d%s%f",&student1.num,student1.name,&student1.score);
	scanf_s("%d%s%f",&student2.num,student2.name,&student2.score);
	printf("分数最高的是:\n");
	if(student1.score>student2.score)
		printf("%d	%s	%6.2f\n",student1.num,student1.name,student1.score);
	else if(student1.score<student2.score)
		printf("%d	%s	%6.2f\n",student2.num,student2.name,student2.score);
	else
	{
		printf("%d	%s	%6.2f\n",student1.num,student1.name,student1.score);
		printf("%d	%s	%6.2f\n",student2.num,student2.name,student2.score);
	}
	Back1_One();
}

void Back2_Two()
{
	if(getch())
	{
		system("CLS");
	}
	Funtion9_2();
}

void fun9_2_1()
{
	struct Person {
		char name[20];
		int count;
	}leader[3] = { "Li",0,"Wang",0,"Sun",0 };

	int i, j;
	char leader_name[20];
	printf("\n------------这是9.2.1的学习内容------------\n");
	printf("\n请输入选票内容\n");
	for (i = 0; i < 10; ++i)
	{
		scanf("%s", leader_name);
		for (j = 0; j < 3; ++j)
		{
			if (strcmp(leader_name, leader[j].name) == 0)
				leader[j].count++;
		}
	}

	printf("统计结果为:\n");
	for (i = 0; i < 3; ++i)
	{
		printf("%5s:%d\n", leader[i].name, leader[i].count);
	}
	Back2_Two();
}

void fun9_2_2()
{
	struct Student{
		int num;
		char name[20];
		float score;
	};

	struct Student stu[5]={
		{10101,"zhang",78},
		{10103,"Wang",98.5},
		{10106,"Li",86},
		{10108,"Ling",73.5},
		{10110,"sun",100}
	};

	struct Student tempStu;
	const int n=5;
	int i,j,k;
	printf("\n------------这是9.2.2的学习内容------------\n");
	printf("统计结果为:\n");
	for(i=0;i<n-1;++i)
	{
		k=i;
		for(j=i+1;j<n;++j)
		{
			if(stu[j].score>stu[k].score)
				k=j;
		}
		tempStu=stu[k];
		stu[k]=stu[i];
		stu[i]=tempStu;
	}
	for(i=0;i<n;++i)
		printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
	printf("\n");
	Back2_Two();
}

void Back3_Thr(){
	if(getch())
	{
		system("CLS");
	}
	Funtion9_3();
}
void fun9_3_1(){
	struct Student
	{
		long num;
		char name[20];
		char sex;
		float score;
	};
	struct Student stu_1;
	struct Student *p;
	p=&stu_1;
	stu_1.num=10101;
	strcpy(stu_1.name,"Li Lin");
	stu_1.sex='M';
	stu_1.score=89.5;
	printf("\n------------这是9.3.1的学习内容------------\n");
	printf("NO:%6ld Name:%10s Sex:%2c Score:%6.2f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
	printf("NO:%6ld Name:%10s Sex:%2c Score:%6.2f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
	printf("NO:%6ld Name:%10s Sex:%2c Score:%6.2f\n",p->num,p->name,p->sex,p->score);
	Back3_Thr();
}
void fun9_3_2(){
	struct Student
	{
		int num;
		char name[20];
		char sex;
		float score;
	};
	struct Student Stu[3]={
		{10101,"Li Lin",'M',89.5},
		{10102,"Wang Fa",'F',90},
		{10103,"Xu Yan",'F',78.5}
	};
	struct Student *p;
	printf("\n------------这是9.3.2的学习内容------------\n");
	printf("No	  Name   Sex  Score\n");
	for(p=Stu;p<Stu+3;++p)
	{
		printf("%5d%10s%4c%8.2f\n",p->num,p->name,p->sex,p->score);
	}
	Back3_Thr();
}

struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void fun9_3_3()
{
	struct Student Stu[N],*p=Stu;
	void input(struct Student stu[]);
	void print(struct Student stu);
	struct Student Max(struct Student stu[]);
	printf("\n------------这是9.3.3的学习内容------------\n");
	input(p);
	print(Max(p));
	Back3_Thr();
}
void input(struct Student stu[])
{
	int i, j;
	float sum;
	printf("\n----请输入各个学生信息:学号、姓名、成绩----\n");
	for (i = 0; i < N; ++i)
	{
		sum = 0;
		scanf("%d%s", &stu[i].num, stu[i].name);
		for (j = 0; j < N; ++j)
		{
			scanf("%f", &stu[i].score[j]);
			sum += stu[i].score[j];
		}
		stu[i].aver = sum / N;
	}

	for (i = 0; i < N; ++i)
	{
		printf("\n%5d%10s", stu[i].num, stu[i].name);
		for (j = 0; j < N; ++j)
			printf("%8.2f", stu[i].score[j]);
		printf("%8.2f\n", stu[i].aver);
	}
}

struct Student Max(struct Student stu[])
{

	int i;
	struct Student Max=stu[0];
	for(i=0;i<N;++i)
	{
		if(stu[0].aver<stu[i].aver)
			Max=stu[i];
	}
	return Max;
}
void print(struct Student stu)
{
	int i;
	printf("\n------最高成绩学生：学号、姓名、成绩------\n");
	printf("%5d%10s",stu.num,stu.name);
	for(i=0;i<N;i++)
	{
		printf("%8.2f",stu.score[i]);
	}
	printf("%8.2f\n",stu.aver);
}

void Back4_Fou(){
	if(getch())
		system("CLS");
	Funtion9_4();
}
void fun9_4_1(){
	FILE *in;
	printf("\n------------这是9.4.1的学习内容------------\n");
	printf("链表的节点结构体为:\n");
	in=fopen("9.4.1.txt","r");
	while(!feof(in))
		putchar(fgetc(in));
	printf("\n");
	fclose(in);
	Back4_Fou();
}
void fun9_4_2(){
	struct Student{
		int num;
		float score;
		struct Student *next;
	};
	struct Student a,b,c,*head,*p;
	printf("\n------------这是9.4.2的学习内容------------\n");

	a.num=10101;
	a.score=98.5;
	b.num=10102;
	b.score=90;
	c.num=10103;
	c.score=85;
	
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	
	while(p)
	{
		printf("%8d%8.2f\n",p->num,p->score);
		p=p->next;
	}
	Back4_Fou();
}

struct Students{
	long num;
	float score;
	struct Students *next;
};

struct Students* creat()
{
	struct Students* L, * s, * r;
	s = r = (struct Students*)malloc(sizeof(struct Students));
	L = s;
	printf("请输入学生数据,以零结束输入:\n");
	scanf("%ld%f", &s->num, &s->score);
	while (s->num != 0)
	{
		r->next = s;
		r = s;
		s = (struct Students*)malloc(sizeof(struct Students));
		scanf("%ld%f", &s->num, &s->score);
	}
	r->next = NULL;
	return L;

}
void prints(struct Students *head)
{
	if(head)
	{
		while(head)
		{
			printf("%8ld%8.2f\n",head->num,head->score);
			head=head->next;
		}
	}
}

void fun9_4_3(){
	struct Students *pt;
	printf("\n------------这是9.4.3的学习内容------------\n");
	pt=creat();
	printf("\nnum:%ld\nscore:%8.2f\n",pt->num,pt->score);
	Back4_Fou();
}
void fun9_4_4(){
	struct Students *p;
	printf("\n------------这是9.4.4的学习内容------------\n");
	p=creat();
	prints(p);
	Back4_Fou();
}



void Back5_Fiv(){
	if(getch())
		system("CLS");
	Funtion9_5();
}

void fun9_5_1(){
	struct Test1{
		int Num;
		char Name[8];
		float Score;
	}A;

	union Test2{
		int Num;
		char Name[8];
		float Score;
	}B;

	FILE *in;
	printf("\n------------这是9.5.1的学习内容-----------\n");
	in=fopen("9.5.1.txt","r");
	while(!feof(in))
		putchar(fgetc(in));
	putchar(10);//printf("\n");
	fclose(in);
	printf("siezof(sturct):%d\tsizeof(union):%d\n",sizeof(A),sizeof(B));

	Back5_Fiv();
}
void fun9_5_2(){
	FILE *in;
	printf("\n------------这是9.5.2的学习内容-----------\n");
	
	in=fopen("9.5.2.txt","r");
	while(!feof(in))
		putchar(fgetc(in));
	printf("\n");
	fclose(in);

	Back5_Fiv();
}
void fun9_5_3(){
	union Data{
		int i;
		char ch;
		float f;
	}a;
	union Data b={16};
	union Data c={c.ch='K'};
	union Data d;

	printf("\n------------这是9.5.3的学习内容-----------\n");
	
	a.i=97;					//a
	printf("i=%d\n",a.i);
	printf("ch=%c\n",a.ch);
	printf("f=%f\n\n",a.f);

	
	printf("i=%d\n\n",b.i);	//b

	printf("ch=%c\n\n",c.ch);	//c

	d.ch='a';				//d
	d.f=1.5;
	d.i=40;
	printf("i=%d\n",d.i);
	printf("ch=%c\n",d.ch);
	printf("f=%f\n\n",d.f);

	Back5_Fiv();
}
void fun9_5_4(){
	struct{
		int num;
		char name[10];
		char sex;
		char job;
		union{
			int clas;
			char position[10];
		}category;
	}person[2];
	int i;
	printf("\n------------这是9.5.4的学习内容-----------\n");
	for (i = 0; i < 2; ++i)
	{
		printf("请输入第%d个人员信息:\n", i + 1);
		scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);
		if (person[i].job == 's')
			scanf("%d", &person[i].category.clas);
		else if (person[i].job == 't')
			scanf("%s", person[i].category.position);
		else
			printf("ERROR!\n");
	}

	printf("\nNO.	Name	Sex  Job  Category\n");
	for(i=0;i<2;++i)
	{
		if(person[i].job=='s')
			printf("%-5d%6s%6c%6c%8d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.clas);
		else
			printf("%-5d%6s%6c%6c%8s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
	}

	Back5_Fiv();
}

void fun9_6_1()
{
	enum Color {
		red, yellow, blue, white, black
	};
	enum Color i, j, k, pri;
	int n, loop;
	n = 0;

	printf("\n------------这是9.6.1的学习内容-----------\n");
	for (i = red; i <= black; ++i)
	{
		for (j = red; i <= black; ++j)
		{
			if (i != j)
			{
				for (k = red; k <= black; ++k)
				{
					if ((k != i) && (k != j))
					{
						n = n + 1;
						printf("%-4d", n);
						for (loop = 1; loop <= 3; ++loop)
						{
							switch (loop)
							{
							case 1:pri = i; break;
							case 2:pri = j; break;
							case 3:pri = k; break;
							default:break;
							}
							switch (pri)
							{
							case red:printf("%-10s", "red"); break;
							case yellow:printf("%-10s", "yellow"); break;
							case blue:printf("%-10s", "blue"); break;
							case white:printf("%-10s", "white"); break;
							case black:printf("%-10s", "black"); break;
							default:break;
							}
						}
					}
					printf("\n");
				}
			}
		}
	}
	printf("总数为:%5d\n", n);
}

