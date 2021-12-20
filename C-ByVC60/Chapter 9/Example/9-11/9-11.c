//共用体定义:
/*
union Data
{
	int i;
	char ch;
	float f;
};
union Data a,b,c;

union Data{
	int i;
	char ch;
	float f;
}a,b,c={112};
int main()
{
	printf("%d\n%c\n%g\n",c.i,c.ch,c.f);
	return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
struct person{
	int num;
	char name[10];
	char sex[5];
	char job[7];
	union{
		int clas;
		char position[10];
	}category;
}person[2];

int main()
{
	struct person *p;
	for(p=person;p<person+2;p++)
	{
		printf("Please enter the data of person:\n");
		//printf("%d,%d,%d,%d,%d,%d,%d,%d\n",&p->num,p->name,p->sex,p->job,p->category.clas,p->category.position,sizeof(person),sizeof(long int));
		scanf("%d,%s %s %s",&p->num,p->name,p->sex,p->job);	//数组不加&符！！！
		if(strcmp(p->job,"student")==0)			//C语言中字符串比较只能借助字符串函数！！！
		{
			//printf("%s\n",p->job);
			scanf("%d",&(p->category.clas));
		}
		else if(strcmp(p->job,"teacher")==0)
		{
			//printf("%s12\n",p->job);
			scanf("%s",p->category.position);
		}
		else
		{
			//printf("%s12\n",p->job);
			printf("Error\n");
		}
		
	
	}
	printf("\n");
	printf("No.    Name	sex	  job	  class/position\n");
	for(p=person;p<person+2;p++)
	{
		if(strcmp(p->job,"student")==0)
			printf("%-6d%-10s%-9s%-9s%-10d\n",p->num,p->name,p->sex,p->job,p->category.clas);
		if(strcmp(p->job,"teacher")==0)
			printf("%-6d%-10s%-9s%-9s%-10s\n",p->num,p->name,p->sex,p->job,p->category.position);
	}
	getch();
	return 0;

}
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct{
	int num;
	char name[10];
	char sex[4];
	char job[7];
	union{
		int clas;
		char position[10];
	}categroy;
}person[2];

int main()
{
	int i=0;
	for(;i<2;i++)
	{
		scanf("%d %s %s %s",&(person+i)->num,(person+i)->name,(person+i)->sex,(person+i)->job);
		if(strcmp((person+i)->job,"student")==0)
		{
			scanf("%d",&(person+i)->categroy.clas);
		}
		else if(strcmp((person+i)->job,"teacher")==0)
		{
			scanf("%s",(person+i)->categroy.position);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		if(strcmp((person+i)->job,"student")==0)
		{
			printf("%d	%s	%s	%s	%d\n",(person+i)->num,(person+i)->name,(person+i)->sex,(person+i)->job,(person+i)->categroy.clas);
		}
		if(strcmp((person+i)->job,"teacher")==0)
		{
			printf("%d	%s	%s	%s	%s\n",(person+i)->num,(person+i)->name,(person+i)->sex,(person+i)->job,(person+i)->categroy.position);
		}
	}
	getch();
	return 0;
}