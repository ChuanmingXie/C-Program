#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 10
/*
struct student_data{
	char name[10];
	int num;
	int age;
	int addr[15];  //---->char addr[15];误写成int addr[15]；导致stud[i]变成了80字节
}stud[SIZE];
*/

struct student_data{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

int main()
{
	FILE *fp;
	int i;
	if((fp=fopen("stud.dat","rb"))==NULL)
	{
		printf("Can't open this file\n");
		exit(0);
	}
	printf("Name	   NO  Age	 Address\n\n");
	for(i=0;i<SIZE;i+=2)
	{
		//printf("%-5d",i*(sizeof(struct student_data)));
		//fseek(fp,i*36,0);
		fseek(fp,i*sizeof(struct student_data),0);
		fread(&stud[i],sizeof(struct student_data),1,fp);
		printf("%-10s%4d%4d	%-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
	getch();
	return 0;

}
