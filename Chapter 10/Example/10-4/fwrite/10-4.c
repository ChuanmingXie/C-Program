/*
	格式化的方式读写文件
	fprintf(fp,"%d,%6.2f",i,f);
	fscanf(fp,"%d,%f",&i,&f);
*/


/*
	二进制的方式向文件读写一组数据:
	fread(buffer,size,count,fp);
	fwrite(buffer,size,count,fp);

	example:
	fread(f,4,10,fp);
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define SIZE 10
struct student_data{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

void save()
{
	FILE *fp;
	int i;
	if((fp=fopen("stud.txt","wb"))==NULL)
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
}

int main()
{
	int i;
	printf("Please enter data of students:\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%s %d %d %s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
		//printf("%s %d %d %s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	save();
	getch();
	return 0;

}