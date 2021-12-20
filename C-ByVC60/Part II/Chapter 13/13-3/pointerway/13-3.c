#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define MaxSize 20

typedef struct guestinfo{
	char name[8];
	int sum;
	char time[10];
	int number;
	struct guestinfo *next;
}GuestLink,*pointer;

void Insert(pointer *head)
{
	int in_number;
	pointer p,q,r;
	printf("\n请输入编号:");
	scanf("%d",&in_number);
	p=q=*head;
	while(p!=NULL)
	{
		if(p->number==in_number)
		{
			printf("\n已经有相同编号!\n");
			return;
		}
		else
		{
			q=p;p=p->next;
		}
	}
	r=(pointer)malloc(sizeof(GuestLink));
	r->next=NULL;
	if(r==NULL)
	{
		printf("\n分配空间失败!\n");
		return;
	}
	if(q==NULL)
		*head=r;
	else
		q->next=r;
	r->number=in_number;
	printf("\n请输入姓名:");scanf("%s",r->name);
	printf("\n请输入人数:");scanf("%d",&r->sum);
	printf("\n请输入用餐时间:");scanf("%s",r->time);
}


void Search(pointer head)
{
	int flag=1;
	int number;
	pointer p;
	printf("\n请输入查询编号:");scanf("%d",&number);
	p=head;
	while(p!=NULL&&flag)
	{
		if(p->number==number)
		{
			printf("\n姓名:%s	人数:%d	用餐时间:%s\n",p->name,p->sum,p->time);
			flag=0;
		}
		else
			p=p->next;
	}
	if(flag) printf("\n没有查询到!\n");
}


void Update(pointer head)
{
	int flag=1;
	int number;
	pointer p;
	printf("\n请输入要更新的编号:");scanf("%d",&number);
	p=head;
	while(p!=NULL&&flag)
	{
		if(p->number==number)
		{
			printf("\n姓名:%s	人数:%d		用餐时间:%s\n",p->name,p->sum,p->time);
			printf("\n请输入姓名:");scanf("%s",p->name);
			printf("\n请输入人数:");scanf("%d",&p->sum);
			printf("\n请输入用餐时间:");scanf("%s",p->time);
			flag=0;
		}
		else p=p->next;
	}
	if(flag) printf("\n没有找到要修改的记录!\n");
}

void Delete(pointer *head)
{
	int flag=1;
	int number;
	pointer p,q;
	printf("\n请输入要删除的编号:");scanf("%d",&number);
	p=q=*head;
	while(p!=NULL&&flag)
	{
		if(p->number==number)
		{
			if(p==*head)
			{
				*head=p->next;free(p);
			}
			else
			{
				q->next=p->next;free(p);
			}
			flag=0;
		}
		else 
		{
			q=p;
			p=p->next;
		}
	}
	if(flag) printf("\n没有找到可以删除的数据:!\n");
}

void Show(pointer head)
{
	pointer p;
	p=head;
	while(p!=NULL)
	{
		printf("姓名:%-10s",p->name);
		printf("人数:%-10d",p->sum);
		printf("用餐时间:%-10s",p->time);
		printf("编号:%-10d\n",p->number);
		p=p->next;
	}
}

int main()
{
	pointer head=NULL;
	int i;
	do{
		printf("\n1---插入(Insert)\n");
		printf("\n2---查询(Search)\n");
		printf("\n3---修改(Update)\n");
		printf("\n4---删除(Delete)\n");
		printf("\n5---显示(Show)\n");
		printf("\n6---退出(Exit)\n\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:Insert(&head);break;
		case 2:Search(head);break;
		case 3:Update(head);break;
		case 4:Delete(&head);break;
		case 5:Show(head);break;
		case 6:break;
		default:printf("\n输入有误,重新输入!\n");break;
		}
	}while(i!=6);
	getch();
	return 0;
}
