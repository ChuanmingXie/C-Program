#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{	
	int i=3,k=3;
	printf("%d,%d,%d\n",i,++i,++i);//--->����˳��������󣬽��Ϊ��5��5��4
	printf("%d,%d,%d\n",k,k++,k++);//--->����k++ʱ�����k�ٽ���++�����Ϊ:3,3,3
	getch();
}

/*
1.���Ƕ������
int main()
{
	x=3;
	y=6;
	printf("%d\n",x+y);
}

int x,y;
*/


/*
2.���������ʽ��һ��
int a=6;
float b=4.5;
printf("%f,%d\n",a,b);
*/


/*
3.��ע��int short��ȡֵ��Χ
int num;
num=89101;
printf("%d",num);
*/


/*
4.ʹ��scanf����ʱ������&��
scanf("%d%d",&a,&b);
*/


/*
5.�������ݵ���ʽ��Ҫ�󲻷�
scanf("%d%d",&a,&b);

3,4 �� �Ǵ����������ʽ
������
*/


/*
6.scanf��������ʱ����������ǰ������&��
char a[20];
scanf("%s",&a);
*/


/*
7.����scanf����������ֵ�ͺ���ʱ�����ַ�����ʽ����
int a[20];
scanf("%d",a);

Ӧ��ʹ��forѭ�����ֱ�ָ������
int a[20];
for(int i=0;i<20;i++)
{
	scanf("%d",&a[i]);
}
*/

/*
8.���ĩβ�ٷֺ�
9.Ԥ����#include��#define�Ⱥ�ӷֺ�
10.if������ӷֺ�
11.��������ٻ�����
12.���Ų�ƥ��
13.������Сд��ʶ��
14.��Ѹ�ֵ��=�������ڣ�==��ʹ��
15.��������Ԫ����[]�ó�()
16.����һά�����±��0��ʼ
17.��ά������ʹ�ø��ϻ���������
	example : a[4,5];		--->a[4][5];
			  a[2+1,4-3];	--->a[2+1][4-3];
18.����Ϊ����������ȫ��Ԫ��
	example : int b[4]={1,2,3,4},a[4];
			  b=a;
*/


/*
19.�����ַ�������ַ�ָ��
char str[4];	--->char *str;
str="computer and C";
printf("%s",str);
*/

/*
20.������ָ�����֮ǰû�и���ȷ����ֵ
char *p;
scanf("%s",p);

Ӧ��Ϊ:

char *p,a[20];
p=a;
scanf("%s",p);
*/


/*
21.switch��֧©��break;����default:
22.�����ַ����ַ����ı�ʾ��ʽ  example : char sex="M";--->sex='M'
*/

/*
23.�Լ�(++)���Լ�(--)ʹ������
int *p,a[5]={2,4,6,8,10};
p=a;
printf("%d	",*p++);
*/


/*
24.������������ԭ�Ͷ����øú���
	����취: ��1.�ڵ��øú���������������������������ԭ��
			  ��2.�ڱ�������֮��������������

25.���������뺯�����岻ƥ��
	int fun(int x,float y,long z)
	��Ӧ:1.int fun(int x,float y,long z);
		 2.int fun(int,float,long);
		 3.int fun(int a,float b,long c);

26.��Ҫ��ͷ�ļ�ʱû�м�
*/

/*
27.����Ϊ�����βθı����Ӱ��ʵ��
int main()
{
	int a,b;
	a=3,b=4;
	swap(a,b);
	printf("%d %d\n",a,b);
}

swap(int x,int y)
{
	int t;
	t=x,x=y,y=t;
}

����: 
int main()
{
	int a,b,*p1,*p2;
	a=3,b=4;
	p1=&a;p2=&b;
	swap(p1,p2);
	printf("%d,%d\n",a,b);
}

swap(int *p1,int *p2)
{
	int temp;
	temp=*p1,*p1=*p2,*p2=temp;
}
*/


/*
28.������ʵ�κ��β����Ͳ�һ��
int main()
{
	int fun(int x,int y);--->float fun(float x,float y);
	float a=3.5,b=4.6,c;
	printf("%f\n",fun(a,b));
}

int fun(int x,int y)---> float fun(float x,float y)
{
	return x+y;
}
*/


/*
29.��ͬ���͵�ָ�����
int main()
{
	int i=3,*p1;
	float a=1.5,*p2;
	p1=&i;
	p2=&a;
	p2=p1;			--->p2=(float*)p1;
	printf("%d,%d\n",*p1,*p2);
	return 0;
}

��ȷʾ����
struct student{
	int num;
	char name[20];
	float score;
};
struct student student1,*p;
p=(struct student*)malloc(sizeof(struct student));
*/


/*
30.û��ע��ϵͳ�Ժ����ļ���˳�򣬶�����ֵ������������
int i=3;
printf("%d,%d,%d\n",i,++i,++i);

ͨ������:
int i,j,k;
i=3,j=++i,k=++j;
printf("%d,%d,%d\n",i,j,k);
*/


/*
31.������������ָ�����������
int i,a[5];
for(i=0;i<5;i++)
	scanf("%d",a++);

��ͼ�ı�a��ֵ��ָ�����ƣ�ÿ��ָ����һ������Ԫ�ء�
�������ڲ��˽����������������׵�ַ������ֵ�ǲ��ܸı�ġ�

����:
int i,*p,a[5];
p=a;
for(i=0;i<5;i++)
	scanf("%d",p++);

��
for(p=a;p<p+5;p++)
	scanf("%d",p);
*/


/*
32.�����ṹ�����ͺͽṹ����������𣬶�һ���ṹ�����͸�ֵ
struct worker{
	int num;
	char name[20];
	char sex;
	int age;
};
worker.num=187045;
strcpy(worker.name,"Zhang Fang");
worker.sex='M';
worker.age=20;

struct worker ���������������Ǳ�������ռ�洢��Ԫ����Ҫ��������

����:
struct worker{
	int num;
	char name[20];
	char sex;
	int age;
};
struct worker worker_E;
worker_E.num=187045;
strcpy(worker_E.name,"Zhang Fang");
worker_E.sex='M';
worker_E.age=22;
*/

/*
33.ʹ���ļ�ʱ���˴�,��򿪷�ʽ��ƥ��
FILE *fp;
if((fp=fopen("text.dat","r"))==NULL)
{
	printf("Can't open this file\n");
	exit(0);
}
ch=fgetc(fp);
while(ch!='#');
{
	ch=ch+4;
	fputc(ch,fp);
	ch=fget(fp);
}
���ļ���"r"��ʽ��ȴ��ͼ����д����

34.���ļ�ʱָ���ļ��Ҳ���
FIEL *fp;
if((fp=open("text.txt","r"))==NULL)
{
	printf("Can't open this file\n");
	exit(0);
}
35.���ǹر��ļ�
*/