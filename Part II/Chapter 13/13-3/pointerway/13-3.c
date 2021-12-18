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
	printf("\n��������:");
	scanf("%d",&in_number);
	p=q=*head;
	while(p!=NULL)
	{
		if(p->number==in_number)
		{
			printf("\n�Ѿ�����ͬ���!\n");
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
		printf("\n����ռ�ʧ��!\n");
		return;
	}
	if(q==NULL)
		*head=r;
	else
		q->next=r;
	r->number=in_number;
	printf("\n����������:");scanf("%s",r->name);
	printf("\n����������:");scanf("%d",&r->sum);
	printf("\n�������ò�ʱ��:");scanf("%s",r->time);
}


void Search(pointer head)
{
	int flag=1;
	int number;
	pointer p;
	printf("\n�������ѯ���:");scanf("%d",&number);
	p=head;
	while(p!=NULL&&flag)
	{
		if(p->number==number)
		{
			printf("\n����:%s	����:%d	�ò�ʱ��:%s\n",p->name,p->sum,p->time);
			flag=0;
		}
		else
			p=p->next;
	}
	if(flag) printf("\nû�в�ѯ��!\n");
}


void Update(pointer head)
{
	int flag=1;
	int number;
	pointer p;
	printf("\n������Ҫ���µı��:");scanf("%d",&number);
	p=head;
	while(p!=NULL&&flag)
	{
		if(p->number==number)
		{
			printf("\n����:%s	����:%d		�ò�ʱ��:%s\n",p->name,p->sum,p->time);
			printf("\n����������:");scanf("%s",p->name);
			printf("\n����������:");scanf("%d",&p->sum);
			printf("\n�������ò�ʱ��:");scanf("%s",p->time);
			flag=0;
		}
		else p=p->next;
	}
	if(flag) printf("\nû���ҵ�Ҫ�޸ĵļ�¼!\n");
}

void Delete(pointer *head)
{
	int flag=1;
	int number;
	pointer p,q;
	printf("\n������Ҫɾ���ı��:");scanf("%d",&number);
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
	if(flag) printf("\nû���ҵ�����ɾ��������:!\n");
}

void Show(pointer head)
{
	pointer p;
	p=head;
	while(p!=NULL)
	{
		printf("����:%-10s",p->name);
		printf("����:%-10d",p->sum);
		printf("�ò�ʱ��:%-10s",p->time);
		printf("���:%-10d\n",p->number);
		p=p->next;
	}
}

int main()
{
	pointer head=NULL;
	int i;
	do{
		printf("\n1---����(Insert)\n");
		printf("\n2---��ѯ(Search)\n");
		printf("\n3---�޸�(Update)\n");
		printf("\n4---ɾ��(Delete)\n");
		printf("\n5---��ʾ(Show)\n");
		printf("\n6---�˳�(Exit)\n\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:Insert(&head);break;
		case 2:Search(head);break;
		case 3:Update(head);break;
		case 4:Delete(&head);break;
		case 5:Show(head);break;
		case 6:break;
		default:printf("\n��������,��������!\n");break;
		}
	}while(i!=6);
	getch();
	return 0;
}
