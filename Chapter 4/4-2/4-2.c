/*�ֶκ�����ȼ�����*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void DrivseFun();/*һ��ֶκ�����if...else...������*/
void AboutIfel();/*���ڷֶκ�����if...else...��Բ���*/
void WorkMoney();/*Ա������ֺ��if...else...����취*/
void Workmoney();/*Ա������ֺ��switch...case...����*/
void studentDe();/*ѧ���ȼ����ֵ�switch...case...����*/

int main()
{
	int No;
	printf("\n--------------1.һ��ֶκ�����if...else...������--------------\n");
	printf("--------------2.���ڷֶκ�����if...else...��Բ���--------------\n");
	printf("--------------3.Ա������ֺ��if...else...����취--------------\n");
	printf("--------------4.Ա������ֺ��switch...case...����--------------\n");
	printf("--------------5.ѧ���ȼ����ֵ�switch...case...����--------------\n");
	printf("������Ҫ�����㷨չʾ����Ŀ���No=");scanf("%d",&No);
	while(No>5||No<=0)
	{
		printf("���������������������:No=");scanf("%d",&No);
	}
	switch(No){
	case 1:DrivseFun();break;
	case 2:AboutIfel();break;
	case 3:WorkMoney();break;
	case 4:Workmoney();break;
	case 5:studentDe();break;
	}
	getch();
	return 0;
}
void DrivseFun()/*һ��ֶκ�����if...else...������*/
{
	int x;
	printf("�������Ա���ֵ:x=");scanf("\n%d",&x);
	if(x<1) printf("y=x=%d (x<1)\n\n",x);
	else if(x<10) printf("y=2*x-1=%d (1<=x<10)\n\n",2*x-1);
	else printf("y=3*x-11=%d (x>=10)\n\n",3*x-11);
	main();
}
void AboutIfel()/*���ڷֶκ�����if...else...��Բ���*/
{
	int x,y=-1;
	printf("�������Ա�����ֵ:x=");scanf("\n%d",&x);
	/*if(x>0) printf("y=1\n\n");
	else if(x=0) printf("y=0\n\n");
	else printf("y=-1\n\n");*/
	if(x!=0){
		if(x>0) y=1;
	}
	else y=0;
	printf("x=%d,y=%d\n\n",x,y);
	main();
}
void WorkMoney()/*Ա������ֺ��if...else...����취*/
{
	double bonus,bon1,bon2,bon4,bon6,bon10,fin;
	printf("��������ҵ��������:");scanf("\n%lf",&fin);
	bon1=100000*0.1;
	bon2=bon1+100000*0.075;
	bon4=bon2+200000*0.05;
	bon6=bon4+200000*0.03;
	bon10=bon6+400000*0.015;
	if(fin<=100000) bonus=fin*0.1;
	else if(fin<=200000) bonus=bon1+(fin-100000)*0.075;
	else if(fin<=400000) bonus=bon2+(fin-200000)*0.05;
	else if(fin<=600000) bonus=bon4+(fin-400000)*0.03;
	else if(fin<=1000000) bonus=bon6+(fin-600000)*0.015;
	else bonus=bon10+(fin-1000000)*0.01;
	printf("Ա����õķֺ�Ϊ:%10.3lf\n\n",bonus);
	main();
}
void Workmoney()/*Ա������ֺ��switch...case...����*/
{
	int Branch;
	double bonus,bon1,bon2,bon4,bon6,bon10,fin;
	printf("��������ҵ��������:");scanf("\n%lf",&fin);
	bon1=100000*0.1;
	bon2=bon1+100000*0.075;
	bon4=bon2+200000*0.05;
	bon6=bon4+200000*0.03;
	bon10=bon6+400000*0.015;
	Branch=(int)(fin/100000)>10?10:(int)(fin/100000);
	switch(Branch){
	case 10:bonus=bon10+(fin-1000000)*0.01;break;
	case 9:
	case 8:
	case 7:
	case 6:bonus=bon6+(fin-600000)*0.015;break;
	case 5:
	case 4:bonus=bon4+(fin-400000)*0.03;break;
	case 3:
	case 2:bonus=bon2+(fin-200000)*0.05;break;
	case 1:bonus=bon1+(fin-100000)*0.075;break;
	case 0:bonus=fin*0.1;break;
	}
	printf("Ա����õķֺ�Ϊ:%10.3lf\n\n",bonus);
	main();
}
void studentDe()/*ѧ���ȼ����ֵ�switch...case...����*/
{
	char garde;
	double score;
	printf("������ѧ���ķ���:score=");scanf("\n%lf",&score);
	while(score>100||score<0)
	{
		printf("���������������������:score=");scanf("%lf",&score);
	}
	switch((int)(score/10))
	{
	case 10:
	case 9:garde='A';break;
	case 8:garde='B';break;
	case 7:garde='C';break;
	case 6:garde='D';break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:garde='E';break;
	}
	printf("�ɼ�Ϊ%5.1lf��ѧ��Ϊ�ȼ�%c\n\n",score,garde);
	main();
}