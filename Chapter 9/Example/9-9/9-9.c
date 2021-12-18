#include<stdio.h>
#include<malloc.h>
#define Len sizeof(struct student)

struct student{
	long num;
	float score;
	struct student *next;
};


struct student *creat(void)
{
	int n=0;
	struct student *head,*p1,*p2;
	head=NULL;
	p1=p2=(struct student*)malloc(Len);

	scanf("%d,%f",&p1->num,&p1->score);
	while(p1->num!=0)
	{	
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(Len);
		scanf("%d,%f",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return(head);
}

int main()
{
	struct student *p;
	p=creat();
	while(p!=NULL)
	{
		printf("%d  | %5.2f¡ª¡ª>",p->num,p->score);
		p=p->next;
	}
	printf("NULL\n");
	return 0;
}