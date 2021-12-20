#include<stdio.h>
#include<string.h>
int main()
{
	struct student{
		long num;
		char name[20];
		char sex;
		float score;
	};
	struct student stu_1;
	struct student *p;
	p=&stu_1;
	stu_1.num=10101;
	strcpy(stu_1.name,"Li Lin");
	stu_1.sex='M';
	stu_1.score=89.5;
	printf("%6d%10s%4c%6.2f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
	printf("%6d%10s%4c%6.2f\n",(*p).num,(*p).name,(*p).sex,(*p).score);
	printf("%6d%10s%4c%6.2f\n",p->num,p->name,p->sex,p->score);
}