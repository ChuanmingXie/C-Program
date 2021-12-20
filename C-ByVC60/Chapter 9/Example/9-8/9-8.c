#include<stdio.h>
struct Student{
	int num;
	float score;
	struct Student *next;
};

int main()
{
	struct Student a,b,c,*head,*p;
	a.num=10101,a.score=90.5;
	b.num=10102,b.score=88.5;
	c.num=10103,c.score=80;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;

	do{
		printf("[%d |%6.2f]¡ª>",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
	printf("NULL\n");
	return 0;
}