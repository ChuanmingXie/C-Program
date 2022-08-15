#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{	
	int i=3,k=3;
	printf("%d,%d,%d\n",i,++i,++i);//--->计算顺序从右自左，结果为：5，5，4
	printf("%d,%d,%d\n",k,k++,k++);//--->计算k++时先输出k再进行++，结果为:3,3,3
	getch();
}

/*
1.忘记定义变量
int main()
{
	x=3;
	y=6;
	printf("%d\n",x+y);
}

int x,y;
*/


/*
2.输入输出格式不一致
int a=6;
float b=4.5;
printf("%f,%d\n",a,b);
*/


/*
3.不注意int short的取值范围
int num;
num=89101;
printf("%d",num);
*/


/*
4.使用scanf函数时，忘记&符
scanf("%d%d",&a,&b);
*/


/*
5.输入数据的形式与要求不符
scanf("%d%d",&a,&b);

3,4 ↓ 是错误的输入形式
￣￣￣
*/


/*
6.scanf输入数组时，在数组名前面多加了&符
char a[20];
scanf("%s",&a);
*/


/*
7.在用scanf函数输入数值型函数时，以字符串形式输入
int a[20];
scanf("%d",a);

应该使用for循环来分别指定数据
int a[20];
for(int i=0;i<20;i++)
{
	scanf("%d",&a[i]);
}
*/

/*
8.语句末尾少分号
9.预处理#include、#define等后加分号
10.if等语句后加分号
11.符合语句少花括号
12.括号不匹配
13.混淆大小写标识符
14.错把赋值（=）当等于（==）使用
15.引用数组元素误将[]用成()
16.忘记一维数组下标从0开始
17.二维数组中使用复合或联合引用
	example : a[4,5];		--->a[4][5];
			  a[2+1,4-3];	--->a[2+1][4-3];
18.误以为数组名代表全部元素
	example : int b[4]={1,2,3,4},a[4];
			  b=a;
*/


/*
19.混淆字符数组和字符指针
char str[4];	--->char *str;
str="computer and C";
printf("%s",str);
*/

/*
20.在引用指针变量之前没有赋予确定的值
char *p;
scanf("%s",p);

应该为:

char *p,a[20];
p=a;
scanf("%s",p);
*/


/*
21.switch分支漏掉break;或者default:
22.混淆字符和字符串的表示形式  example : char sex="M";--->sex='M'
*/

/*
23.自加(++)和自减(--)使用有误
int *p,a[5]={2,4,6,8,10};
p=a;
printf("%d	",*p++);
*/


/*
24.忘记声明函数原型而调用该函数
	解决办法: 法1.在调用该函数的主调函数中最先声明函数原想
			  法2.在被调函数之后声明主调函数

25.函数声明与函数定义不匹配
	int fun(int x,float y,long z)
	对应:1.int fun(int x,float y,long z);
		 2.int fun(int,float,long);
		 3.int fun(int a,float b,long c);

26.需要加头文件时没有加
*/

/*
27.误认为函数形参改变可以影响实参
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

正解: 
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
28.函数的实参和形参类型不一致
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
29.不同类型的指针混用
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

正确示例：
struct student{
	int num;
	char name[20];
	float score;
};
struct student student1,*p;
p=(struct student*)malloc(sizeof(struct student));
*/


/*
30.没有注意系统对函数的计算顺序，而对求值过程推算有误
int i=3;
printf("%d,%d,%d\n",i,++i,++i);

通用做法:
int i,j,k;
i=3,j=++i,k=++j;
printf("%d,%d,%d\n",i,j,k);
*/


/*
31.混淆数组名与指针变量的区别
int i,a[5];
for(i=0;i<5;i++)
	scanf("%d",a++);

企图改变a的值是指针下移，每次指向下一个数组元素。
错误在于不了解数组名代表数组首地址，它的值是不能改变的。

正解:
int i,*p,a[5];
p=a;
for(i=0;i<5;i++)
	scanf("%d",p++);

或
for(p=a;p<p+5;p++)
	scanf("%d",p);
*/


/*
32.混淆结构体类型和结构体变量的区别，对一个结构体类型赋值
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

struct worker 是类型名，它不是变量，不占存储单元。需要声明变量

正解:
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
33.使用文件时忘了打开,或打开方式不匹配
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
对文件以"r"方式打开却企图进行写操作

34.打开文件时指定文件找不到
FIEL *fp;
if((fp=open("text.txt","r"))==NULL)
{
	printf("Can't open this file\n");
	exit(0);
}
35.忘记关闭文件
*/