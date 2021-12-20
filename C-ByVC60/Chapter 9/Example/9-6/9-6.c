#include<stdio.h>
struct Student{
	int num;
	char name[20];
	char sex;
	int age;
};
struct Student stu[3]={
	{10101,"xie chuangming",'M',23},
	{10101,"tang minglingo",'W',23},
	{10101,"ling yayan",'W',23},
};
int main()
{
	struct Student *p;
	printf("  NO   Name	    	Sex	age\n");
	for(p=stu;p<stu+3;p++)
	{
		printf("%5d  %-16s%2c     %4d\n",p->num,p->name,p->sex,p->age);
	}
	return 0;
}
