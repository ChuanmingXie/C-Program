#include"FunPublic.c"

void Back_M(){
	if(getch())
		system("CLS");
	main();
}

void Fun1_DeSrct()
{
	int i,days=0;
	int Day_Tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	printf("-------01.结构体日期定义应用-------\n");
	
	printf("请输入年、月、日:\n");
	scanf("%d %d %d",&data.Year,&data.Month,&data.Day);

	for(i=0;i<data.Month;++i)
	{
		days+=Day_Tab[i];
	}
	days=days+data.Day;

	if((data.Year%4==0&&data.Year%100!=0||data.Year%400==0)&&data.Month>=3)
		days=days+1;

	printf("经过计算可知:\n%d/%d日,是%d年的第%d天\n",data.Month,data.Day,data.Year,days);

	Back_M();
}
void Fun2_UsSrct()
{
	int DayCount(struct data Data);
	printf("-------02.结构体作为函数参数-------\n");
	printf("请输入年、月、日:\n");
	scanf("%d %d %d",&data.Year,&data.Month,&data.Day);
	printf("经过计算可知:\n%d/%d日,是%d年的第%d天\n",data.Month,data.Day,data.Year,DayCount(data));

	Back_M();
}


void Fun3_PrintS()
{
	int i,j;
	void Inputs(struct student stu[]);
	printf("-------03.学生的成绩数组输出-------\n");
	Inputs(stu);
	printf("\n保存的学生成绩为:\n");
	printf("  N0.	Name	Chiness	  Math	English	  Phsical\n");
	for(i=0;i<L;++i)
	{
		printf("%5s%10s",stu[i].num,stu[i].name);
		for(j=0;j<4;++j)
		{
			printf("%9.2f",stu[i].score[j]);
		}
		printf("\n");
	}
	Back_M();
}
void Fun4_InputS()
{
	void Inputs(struct student stu[]);
	void Prints(struct student stu[]);
	printf("-------04.学生的成绩数组输入-------\n");
	Inputs(stu);
	Prints(stu);
	Back_M();
}
void Fun5_CountS()
{
	void Countsave();
	void Countprin();
	void CountSort();

	printf("-------05.学生成绩的统计操作-------\n");
	//Countsave();
	Countprin();
	CountSort();

	Back_M();
}


void Fun6_DeleNode()
{
	int i,h,count;
	printf("-------06.链表实现按编号删除-------\n");
	for(i=1;i<=S;i++)
	{
		link[i].number=i;
		link[i].nextp=i+1;

		if(i==S)
			link[i].nextp=1;
	}
	printf("\n");

	printf("\n初始化的节点编号为:\n");
	for(i=1;i<=S;i++)
		printf("%4d",link[i].number);

	count=0;h=S;

	printf("\n依次离开的节点编号:\n");

	while(count<S-1)
	{
		i=0;
		while(i!=3)
		{
			h=link[h].nextp;
			if(link[h].number)
				i++;
		}
		printf("%4d",link[h].number);
		link[h].number=0;
		count++;
	}

	printf("\n最终剩下的节点编号:");
	for(i=1;i<=S;i++)
	{
		if(link[i].number)
			printf("%4d",link[i].number);
	}

	Back_M();
}
void Fun7_NodeDele()
{
	struct StudLink *p,*q,*r;
	long NOD;
	r=p=q=(struct StudLink *)malloc(LEN);
	printf("-------07.动态链表的删除算法-------\n");
	printf("\n请输入节点信息并以0结束输入:\n");
	scanf("%ld %f",&p->num,&p->score);
	while(p->num!=0)
	{
		q->next=p;
		q=p;
		p=(struct StudLink *)malloc(LEN);
		scanf("%ld %f",&p->num,&p->score);
	}
	q->next=NULL;

	printf("\n原始的链表为:\n");
	p=r;
	if(p)
	{
		while(p)
		{
			printf("%6ld%8.2f",p->num,p->score);
			p=p->next;
		}
	}

	printf("\n请输入删除的节点编号:");
	scanf("%ld",&NOD);
	printf("\n删除该节点后的链表为:\n");
	p=r;
	while(p)
	{
		if(p->num!=NOD)
		{
			printf("%6ld%8.2f",p->num,p->score);
			p=p->next;
		}
		else
			p=p->next;
	}
	free(p);
	free(q);

	Back_M();
}
void Fun8_NodeInse()
{
	struct StudLink *s,*r,*t,*l;
	l=s=r=(struct StudLink *)malloc(LEN);
	printf("-------08.动态链表的插入算法-------\n");
	printf("\n请输入节点信息,以0结束输入:\n");
	scanf("%ld %f",&s->num,&s->score);
	while(s->num!=0)
	{
		r->next=s;
		r=s;
		s=(struct StudLink *)malloc(LEN);
		scanf("%ld %f",&s->num,&s->score);
	}
	r->next=NULL;

	printf("\n您输入的原始数据为:\n");
	r=l;
	if(r)
	{
		while(r)
		{
			printf("%6ld%6.2f",r->num,r->score);
			r=r->next;
		}
	}

	printf("\n\n请输入要插入的节点:");
	t=(struct StudLink *)malloc(LEN);
	scanf("%ld %f",&t->num,&t->score);

	r=l;
	while(r)
	{
		if(t->num<=r->next->num)
		{
			t->next=r->next;
			r->next=t;
			break;
		}
		r=r->next;
	}

	printf("\n插入后的链表数据为:\n");
	r=l;
	while(r)
	{
		printf("%6ld%6.2f",r->num,r->score);
		r=r->next;
	}

	Back_M();
}
void Fun9_LinkOper()
{
	struct StudLink *head,*Nadd;
	long DelNum;

	printf("-------09.链表操作--建删插查-------\n");
	
	/*创建并输出*/
	head=Create();
	Output(head);
	
	/*删除并输出*/
	printf("\n请输入删除编号:");
	scanf("%ld",&DelNum);
	while(DelNum!=0)
	{
		head=Delete(head,DelNum);
		Output(head);
		printf("\n请输入删除编号:");
		scanf("%ld",&DelNum);
	}

	/*插入并输出*/
	printf("\n请输入插入节点:");
	Nadd=(struct StudLink *)malloc(LEN);
	scanf("%ld %f",&Nadd->num,&Nadd->score);
	while(Nadd->num!=0)
	{
		head=Insert(head,Nadd);
		Output(head);
		printf("\n请输入插入节点:");
		Nadd=(struct StudLink *)malloc(LEN);
		scanf("%ld %f",&Nadd->num,&Nadd->score);
	}

	Back_M();
}
void Fun10_MergeNode()
{
	struct StudLink *A,*B,*C;
	struct StudLink *Merge(struct StudLink *,struct StudLink *);
	printf("-------10.链表的学号升序合并-------\n");
	printf("\n建立链表 A \n");
	A=Create();
	Output(A);

	printf("\n建立链表 B \n");
	B=Create();
	Output(B);

	printf("\n合并链表 C \n");
	C=Merge(A,B);
	Output(C);

	Back_M();
}
void Fun11_DeleLink()
{
	Studata *CreatLink(),*A,*B,*C;
	Studata *DeleteNode(Studata *,Studata *);
	void PrintLink(Studata *);

	printf("-------11.删去两链表中重复点-------\n");

	printf("\n建立链表 A :\n");
	A=CreatLink();
	PrintLink(A);

	printf("\n建立链表 B :\n");
	B=CreatLink();
	PrintLink(B);

	printf("\n去重后的链表 A :\n");
	C=DeleteNode(A,B);
	PrintLink(C);
	Back_M();
}
void Fun12_DeteMore()
{
	printf("-------12.按年龄删除链表节点-------\n");
	Back_M();
}