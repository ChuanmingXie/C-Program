#include<stdio.h>
#define N 3
struct Student{
	int num;
	char name[20];
	float score[3];
	float aver;
};

int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu);
	struct Student Stu[N],* p=Stu;
	//p=&stu[0];
	input(p);
	print(max(p));
	return 0;
}

void input(struct Student stu[])
{
	//int i;
	struct Student *p;
	printf("学号	姓名	语文	数学	英语\n");
	for(p=stu;p<stu+3;p++)
	{
		//scanf("%d	%s	%f	%f	%f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		scanf("%d	%s	%f	%f	%f",&(p->num),&(*p).name,&(*p).score[0],&(*p).score[1],&(*p).score[2]);
		//stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
		(*p).aver=((*p).score[0]+(*p).score[1]+(*p).score[2])/3.0;
	}
}
struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<N;i++)
	{
		if(stu[i].aver>stu[m].aver)m=i;
	}
			
	return stu[m];
}

void print(struct Student stu)
{
	printf("\n成绩最好的学生为:\n");
	printf("学号	姓名	语文	数学	英语	平均\n");
	printf("%d	%s	%6.2f	%6.2f	%6.2f	%6.2f\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);
}