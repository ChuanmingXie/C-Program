#include<stdio.h>
#include<malloc.h>
#define Len sizeof(struct student)

typedef struct student{
	long num;
	float score;
	struct student *next;
}student;


student *creatLinkR()
{
	student *head,*s,*r;
	s=r=(student*)malloc(sizeof(student));
	head=r;
	scanf("%ld,%f",&s->num,&s->score);
	while(s->num!=0)
	{
		r->next=s;
		r=r->next;
		s=(student*)malloc(sizeof(student));
		scanf("%ld,%f",&s->num,&s->score);
	}
	r->next=NULL;
	return (head);
}
/*
void creatLinkF(student *&h)
{
	student *s,*r;
	h=s=(student*)malloc(sizeof(student));
	h->next=NULL;
	r=h;
	while(getchar()!=(23 VK_END))

}
*/
void print(student *head)
{
	student *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d  | %5.2f¡ª¡ª>",p->num,p->score);
		p=p->next;
	}
	printf("NULL\n");
}

void main()
{
	student *head;
	head=creatLinkR();
	print(head);
}
