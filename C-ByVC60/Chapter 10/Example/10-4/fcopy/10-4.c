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

void load()
{
	FILE *fp;
	int i;
	if((fp=fopen("stud.dat","rb"))==NULL)
	{
		printf("Can't open this file!\n");
		exit(0);
	}

	for(i=0;i<SIZE;i++)
	{
		if(fread(&stud[i],sizeof(struct student_data),1,fp)!=1)
		{
			if(feof(fp))
			{
				fclose(fp);
				exit(0);
			}
			printf("file read error\n");
		}
		//printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}

void save()
{
	FILE *fp;
	int i;
	if((fp=fopen("stu.dat","wb"))==NULL)
	{
		printf("can't open file\n");
		exit(0);
	}
	for(i=0;i<SIZE;i++)
	{

		if(fwrite(&stud[i],sizeof(struct student_data),1,fp)!=1)
			printf("file write error\n");
	}
	fclose(fp);
	printf("OK\n");
}

int main()
{
	load();
	save();
	return 0;
	getch();
}