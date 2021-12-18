#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<io.h>
#define SIZE 10

typedef struct student{
	int num;
	float score[3];
}Student;

void accept_data(Student stuTest[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Score No.%2d",i+1);
		scanf("%d %f %f %f",&stuTest[i].num,&stuTest[i].score[0],&stuTest[i].score[1],&stuTest[i].score[2]);
	}
}

void show_data()
{
	FILE *fp;
	int i;
	Student stuTest[SIZE];
	if (access("C://windows",0))
	{
		fp=fopen("Test.din","wb");
		accept_data(stuTest);
		if(fwrite(stuTest,sizeof(Student),SIZE,fp)!=SIZE)
			printf("file write error\n");
		fclose(fp);
	}
	else
	{
		fp=fopen("Test.din","rb");
		printf("NO.	regular grade	Test grade	Finlly grade\n");
		for(i=0;i<SIZE;i++)
		{
			fread(&stuTest[i],sizeof(Student),1,fp);
			printf("%d	%.2f	%.2f	%.2f",stuTest[i].num,stuTest[i].score[0],stuTest[i].score[1],stuTest[i].score[2]);
		}
		fclose(fp);
	}
}