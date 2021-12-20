#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 10
struct student_data{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("stud.txt","rb"))==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	printf("Name	  No    Age	 RoomNum\n");
	for(i=0;i<SIZE;i++)
	{
		//printf("%-5d",i*(sizeof(struct student_data)));
		fread(&stud[i],sizeof(struct student_data),1,fp);
		printf("%-10s%4d%4d	%-17s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
	getch();
	return 0;

}