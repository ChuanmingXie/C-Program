#include"FunPublic.c"

int DayCount(struct data Data)
{
	int DayC,i;
	int day_T[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	DayC=0;
	for(i=0;i<Data.Month;++i)
	{
		DayC+=day_T[i];
	}
	DayC+=Data.Day;

	if((Data.Year%4==0&&Data.Year%100!=0||Data.Year%4==0)&&(Data.Month>2))
		DayC+=1;
	return DayC;
}

char subject[4][10]={
	{"语文"},
	{"数学"},
	{"英语"},
	{"体育"}
};
void Inputs(struct student stu[])
{
	int i,j;
	printf("\n请输入学生的成绩:\n");
	for(i=0;i<L;++i)
	{
		printf("学号:");scanf("%s",stu[i].num);
		printf("姓名:");scanf("%s",stu[i].name);
		for(j=0;j<4;++j)
		{
			printf("%s:",subject[j]);
			scanf("%f",&stu[i].score[j]);
		}
		printf("\n");
	}
}

void Prints(struct student stu[])
{
	int i,j;
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
}

void Countsave()
{
	FILE *fp;
	int i,j;
	float sum;

	fp=fopen("10.5.txt","wb");

	printf("\n请输入学生信息:\n");
	for(i=0;i<L;++i)
	{
		printf("NO. :");scanf("%s",stu[i].num);
		printf("Name:");scanf("%s",stu[i].name);
		sum=0;
		for(j=0;j<4;++j)
		{
			printf("%s:",subject[j]);
			scanf("%f",&stu[i].score[j]);
			sum+=stu[i].score[j];
		}
		stu[i].aver=sum/4;
		fwrite(&stu[i],sizeof(struct student),1,fp);/*必须放在输入之后*/
		printf("\n");
	}	
	fclose(fp);
}

void Countprin()
{
	FILE *fp;
	int i,j,Maxi;
	float Max;

	fp=fopen("10.5.txt","r");

	printf("\n\n输出学生信息如下:\n");
	printf("----------------------------------------------------------\n");
	printf("  NO.    Name   Chiness    Math   English  Phsical   Aver\n");
	printf("----------------------------------------------------------\n");
	for(i=0;i<L;++i)
	{
		fread(&stu[i],sizeof(struct student),1,fp);
		printf("%5s%8s",stu[i].num,stu[i].name);
		for(j=0;j<4;++j)
			printf("%9.2f",stu[i].score[j]);
		printf("%8.2f",stu[i].aver);
		printf("\n");
	}

	Max=stu[0].aver;
	Maxi=0;
	for(i=0;i<L;++i)
	{
		if(stu[i].aver>Max)
		{
			Max=stu[i].aver;
			Maxi=i;
		}
	}

	printf("\n最高分学生信息:\n\n");
	printf("最高分数学生是:  %s	%s\n",stu[Maxi].num,stu[Maxi].name);
	printf("四门课的成绩为:");
	for(j=0;j<4;++j)
	{
		printf("%7.2f	",stu[Maxi].score[j]);
	}
	printf("\n四门课的平均值:%7.2f\n",Max);
	fclose(fp);
}

void CountSort()
{
	int i,j;
	struct student temp;
	FILE *fp,*fq;
	float aves[4];

	fq=fopen("10.5.txt","r");
	fp=fopen("10.5.Sort","wb");

	for(i=0;i<L;++i)
	{
		fread(&stu[i],sizeof(struct student),1,fq);
	}

	for(i=0;i<L;++i)
	{
		for(j=i+1;j<L;++j)
		{
			if(stu[j].aver>stu[i].aver)
			{
				temp=stu[j];
				stu[j]=stu[i];
				stu[i]=temp;
			}
		}
	}

	for(i=0;i<4;++i)
	{
		aves[i]=0;
		for(j=0;j<L;++j)
		{
			aves[i]+=stu[j].score[i];
		}
		aves[i]=aves[i]/L;
	}

	printf("\n排序后的学生成绩如下:\n");
	printf("----------------------------------------------------------\n");
	printf("  NO.    Name   Chiness    Math   English  Phsical   Aver\n");
	printf("----------------------------------------------------------\n");
	for(i=0;i<L;++i)
	{
		fwrite(&stu[i],sizeof(struct student),1,fp);
		printf("%5s%8s",stu[i].num,stu[i].name);
		for(j=0;j<4;++j)
			printf("%9.2f",stu[i].score[j]);
		printf("%8.2f",stu[i].aver);
		printf("\n");
	}
	fclose(fq);
	fclose(fp);

	printf("----------------------------------------------------------\n");
	printf(" SubjectAver ");
	for(i=0;i<4;++i)
		printf("%9.2f",aves[i]);
	printf("\n----------------------------------------------------------\n");
	printf("\n");
}

struct StudLink *Create()
{
	struct StudLink *head,*s,*r;

	printf("\n请输入节点数据,以0结束:\n");

	head=s=r=(struct StudLink *)malloc(LEN);//公用内存
	scanf("%ld %f",&s->num,&s->score);		//不带投头节点
	while(s->num!=0)
	{
		r->next=s;
		r=s;
		s=(struct StudLink *)malloc(LEN);
		scanf("%ld %f",&s->num,&s->score);
	}
	r->next=NULL;

	return head;
}
struct StudLink *Delete(struct StudLink * head,long num)
{

	struct StudLink *p,*s;
	p=head;
	if(head)
	{
		while(num!=p->num&&p->next!=NULL)
		{
			s=p;
			p=p->next;
		}
		if(num==p->num)
		{
			if(p==head)
				head=p->next;
			else
				s->next=p->next;
			printf("\n已删除:%4ld\n",num);
		}
		else
			printf("\n未找到该节点!\n");
	}
	else
	{
		printf("\n这是一只空表!\n");
	}

	return head;
}
struct StudLink *Insert(struct StudLink * head,struct StudLink *Nadd)
{

	struct StudLink *p,*q,*r;
	p=head;
	q=Nadd;

	if(head==NULL)
	{
		head=q;
		q->next=NULL;
	}
	else
	{
		while((q->num>p->num)&&(p->next!=NULL))
		{
			r=p;
			p=p->next;
		}
		if(q->num<=p->num)
		{
			if(head==p) 
				head=q;
			else 
				r->next=q;
			q->next=p;
		}
		else
		{
			p->next=q;
			q->next=NULL;
		}
	}

	return head;
}
void Output(struct StudLink *head)
{
	struct StudLink *p;
	printf("\n操作后的链表为:\n");
	p=head;
	if(head!=NULL)
	{
		while(p)
		{
			printf("%ld %5.1f  ",p->num,p->score);
			p=p->next;
		}
		printf("\n");
	}
}

struct StudLink *Merge(struct StudLink *A,struct StudLink *B)
{
	struct StudLink *C,*p,*q,*r;
	p=A;
	q=B;
	C=(struct StudLink *)malloc(LEN);
	C->next=NULL;
	r=C;
	if(p&&q)
	{
		while(p&&q)
		{
			if(p->num<=q->num)
			{
				r->next=p;
				p=p->next;
				r=r->next;
			}
			else
			{
				r->next=q;
				q=q->next;
				r=r->next;
			}
		}
		r->next=NULL;

		if(q)
			r->next=q;
		if(p)
			r->next=p;
	}
	return C->next;
}


Studata *CreatLink()
{
	Studata *A,*r,*s;

	A=(Studata *)malloc(sizeof(Studata));
	r=A;
	printf("\n请输入节点信息,以0结束:\n");
	s=(Studata *)malloc(sizeof(Studata));
	scanf("%s %s",s->num,s->name);
	while(strcmp(s->num,"0"))	//返回值为0,即不相等
	{
		r->next=s;
		r=s;
		s=(Studata *)malloc(sizeof(Studata));
		scanf("%s %s",s->num,s->name);
	}
	r->next=NULL;
	return A;
}
Studata *DeleteNode(Studata *A,Studata *B)
{
	Studata *p,*q,*r;
	p=A->next;
	
	if(p==NULL||B->next==NULL)
		printf("\n链表为空!\n");
	else
	{
		while(p)
		{
			q=B->next;
			
			/* 
			犯了一个低级严重的错误!,字符串的比较用strcmp
				while((q!=NULL)&&((p->num)!=(q->num)))
			*/

			while((q->next!=NULL)&&(strcmp(p->num,q->num)))
			{
				/*q->next!=NULL 取不到最后一个q值*/
				q=q->next;
				printf("\np:%s q:%s\n",p->num,q->num);
			}
			if(!(strcmp(p->num,q->num)))
			{
				printf("\n找到%s\n",p->num);
				if(p==A->next)
					r=p->next;
				else
				{
					printf("\n删去%s\n",p->num);
					r->next=p->next;
					p=p->next;
					r=r->next;
				}
			}
			else if(strcmp(p->num,q->num))
			{
				printf("\n该次结束 p:%s \n",p->num);
				r=p;
				p=p->next;
			}
		}
	}

	printf("\n链表 A 去重成功!\n");
	
	return A;
}
void PrintLink(Studata *H)
{
	Studata *p;
	p=H->next;
	printf("\n操作后的链表为:\n");

	if(p)
	{
		while(p)
		{
			printf("%4s %8s   ",p->num,p->name);
			p=p->next;
		}
		printf("\n");
	}
}
