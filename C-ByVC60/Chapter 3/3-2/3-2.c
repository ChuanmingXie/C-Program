/*0-127�ڵ������������ַ�������ת��*/
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
	printf("------------1.���Լ���ת��-------------\n");
	printf("------------2.���з������-------------\n");
	printf("------------3.getchar ����-------------\n");
	printf("------------4.�ַ���ASCII��------------\n");	
	printf("------------5.������ת�ַ�-------------\n");
	printf("------------6.���ַ�ת����-------------\n");
	printf("------------7.��ֵ�������-------------\n");
	printf("������Ҫ���в����ı�ţ�N=");scanf("%d",&N);
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
/*1.���Լ���ת��*/
void fun1()
{
	int i=0,l=0;
	char str[20];
	printf("������Ҫ���ܵ��ַ���:");
	//scanf("%s",str);			/*  gets(str);  ��β����޷�ʹ�øú���������˼��ԭ��*/
	scanf("\n");				/*�˼�Ϊԭ��:��ʽ�������'\n'ʹ�俴����ʵ��printf֮��ִ��*/
	gets(str);
	printf("���������Լ��ܵĳ���:");
	scanf("%d",&l);
	printf("���Լ��ܺ���ַ���Ϊ:");
	for(i=0;str[i]!='\0';++i)
		printf("%c",str[i]+l);
	printf("\n\n");
	main();
}
/*2.���з������*/
void fun2(){
	int a,b;
	float x,y;
	char c1,c2;
	printf("�������������:\n");
	scanf("\na=%d b=%d",&a,&b);	/*��������ڴ�����ǰ����������N֮�����д�ȡִ��,������printf
								˵��ϵͳ���ڴ�Ŀ��ٷ�Ϊ������,�����ݴ����˳���,��ʽ�������
								'\n'ʹ�俴����ʵ��printf֮��ִ��*/
	scanf("%f %f",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n\n",a,b,x,y,c1,c2);
	main();
}
/*3.getchar ����*/
void fun3(){
	char c1,c2;
	printf("�����������ַ�c1,c2:");
	scanf("\n");				/*��ʽ�������'\n'ʹ�俴����ʵ��printf֮��ִ��*/
	c1=getchar();
	c2=getchar();
	printf("��putchar���������Ϊ:");
	putchar(c1);
	putchar(c2);
	printf("\n��printf���������Ϊ:%c %c\n\n",c1,c2);
	main();
}
/*4.�ַ���ASCII��*/
void fun4(){
	int a,b;
	printf("��������������a,b:");
	scanf("%d,%d",&a,&b);
	printf("���ַ�������Ϊ: %c,%c\n",a,b);
	printf("��ASCII��������:%d,%d\n\n",a,b);
	main();
}
/*5.������ת�ַ�*/
void fun5(){
	char c1,c2;
	printf("��������������:");
	scanf("%d,%d",&c1,&c2);
	printf("c1=%c,c2=%c\n",c1,c2);
	printf("c1=%d,c2=%d\n",c1,c2);
	main();
}
/*6.���ַ�ת����*/
void fun6(){
	int i1,i2;
	char c1,c2;
	printf("�����������ַ�c1,c2:");
	scanf("\n%c,%c",&c1,&c2);		/*��ʽ�������'\n'ʹ�俴����ʵ��printf֮��ִ��*/
	i1=c1;i2=c2;
	printf("���ַ�����Ľ��Ϊ:%c,%c\n",i1,i2);
	printf("����������Ľ��Ϊ:%d,%d\n\n",c1,c2);
	main();
}
/*7.��ֵ�������*/
void fun7(){
	char c1,c2;
	int i1,i2;
	printf("��������������i1,i2:");
	scanf("%d,%d",&i1,&i2);
	c1=i1;c2=i2;
	printf("���ַ�������:%c,%c\n",c1,c2);
	printf("������������:%d,%d\n\n",c1,c2);
	main();
}
