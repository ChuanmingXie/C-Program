/*0-127内的整形数据与字符型数据转换*/
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int N;
	void fun1();
	void fun2();
	void fun3();
	void fun4();
	void fun5();
	void fun6();
	void fun7();
	printf("------------1.线性加密转换-------------\n");
	printf("------------2.换行符的输出-------------\n");
	printf("------------3.getchar 函数-------------\n");
	printf("------------4.字符的ASCII码------------\n");	
	printf("------------5.将整型转字符-------------\n");
	printf("------------6.将字符转整形-------------\n");
	printf("------------7.赋值溢出测试-------------\n");
	printf("请输入要进行操作的编号：N=");scanf("%d",&N);
	switch(N){
		case 1:fun1();break;
		case 2:fun2();break;
		case 3:fun3();break;
		case 4:fun4();break;
		case 5:fun5();break;
		case 6:fun6();break;
		case 7:fun7();break;
		default :main();break;
	}
	getch();
	return 0;
}
/*1.线性加密转换*/
void fun1()
{
	int i=0,l=0;
	char str[20];
	printf("请输入要加密的字符串:");
	//scanf("%s",str);			/*  gets(str);  多次测试无法使用该函数，仍在思考原因*/
	scanf("\n");				/*此即为原因:格式输出加入'\n'使其看起来实在printf之后执行*/
	gets(str);
	printf("请输入线性加密的长度:");
	scanf("%d",&l);
	printf("线性加密后的字符串为:");
	for(i=0;str[i]!='\0';++i)
		printf("%c",str[i]+l);
	printf("\n\n");
	main();
}
/*2.换行符的输出*/
void fun2(){
	int a,b;
	float x,y;
	char c1,c2;
	printf("请依据题意测试:\n");
	scanf("\na=%d b=%d",&a,&b);	/*该语句在内存中提前至紧跟输入N之后便进行存取执行,即先于printf
								说明系统对内存的开辟分为两部分,而数据存放是顺序的,格式输出加入
								'\n'使其看起来实在printf之后执行*/
	scanf("%f %f",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n\n",a,b,x,y,c1,c2);
	main();
}
/*3.getchar 函数*/
void fun3(){
	char c1,c2;
	printf("请输入两个字符c1,c2:");
	scanf("\n");				/*格式输出加入'\n'使其看起来实在printf之后执行*/
	c1=getchar();
	c2=getchar();
	printf("用putchar语句输出结果为:");
	putchar(c1);
	putchar(c2);
	printf("\n用printf语句输出结果为:%c %c\n\n",c1,c2);
	main();
}
/*4.字符的ASCII码*/
void fun4(){
	int a,b;
	printf("请输入两个整数a,b:");
	scanf("%d,%d",&a,&b);
	printf("按字符输出结果为: %c,%c\n",a,b);
	printf("按ASCII码输出结果:%d,%d\n\n",a,b);
	main();
}
/*5.将整型转字符*/
void fun5(){
	char c1,c2;
	printf("请输入两个整数:");
	scanf("%d,%d",&c1,&c2);
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);
	main();
}
/*6.将字符转整形*/
void fun6(){
	int i1,i2;
	char c1,c2;
	printf("请输入两个字符c1,c2:");
	scanf("\n%c,%c",&c1,&c2);		/*格式输出加入'\n'使其看起来实在printf之后执行*/
	i1=c1;i2=c2;
	printf("按字符输出的结果为:%c,%c\n",i1,i2);
	printf("按整数输出的结果为:%d,%d\n\n",c1,c2);
	main();
}
/*7.赋值溢出测试*/
void fun7(){
	char c1,c2;
	int i1,i2;
	printf("请输入两个整数i1,i2:");
	scanf("%d,%d",&i1,&i2);
	c1=i1;c2=i2;
	printf("按字符输出结果:%c,%c\n",c1,c2);
	printf("按整数输出结果:%d,%d\n\n",c1,c2);
	main();
}
