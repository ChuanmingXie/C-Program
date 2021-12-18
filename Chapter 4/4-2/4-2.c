/*分段函数与等级划分*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void DrivseFun();/*一般分段函数的if...else...处理方法*/
void AboutIfel();/*对于分段函数的if...else...配对测试*/
void WorkMoney();/*员工奖金分红的if...else...处理办法*/
void Workmoney();/*员工奖金分红的switch...case...方法*/
void studentDe();/*学生等级划分的switch...case...方法*/

int main()
{
	int No;
	printf("\n--------------1.一般分段函数的if...else...处理方法--------------\n");
	printf("--------------2.对于分段函数的if...else...配对测试--------------\n");
	printf("--------------3.员工奖金分红的if...else...处理办法--------------\n");
	printf("--------------4.员工奖金分红的switch...case...方法--------------\n");
	printf("--------------5.学生等级划分的switch...case...方法--------------\n");
	printf("请输入要进行算法展示的项目编号No=");scanf("%d",&No);
	while(No>5||No<=0)
	{
		printf("您的输入有误，请从新输入:No=");scanf("%d",&No);
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
void DrivseFun()/*一般分段函数的if...else...处理方法*/
{
	int x;
	printf("请输入自变量值:x=");scanf("\n%d",&x);
	if(x<1) printf("y=x=%d (x<1)\n\n",x);
	else if(x<10) printf("y=2*x-1=%d (1<=x<10)\n\n",2*x-1);
	else printf("y=3*x-11=%d (x>=10)\n\n",3*x-11);
	main();
}
void AboutIfel()/*对于分段函数的if...else...配对测试*/
{
	int x,y=-1;
	printf("请输入自变量的值:x=");scanf("\n%d",&x);
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
void WorkMoney()/*员工奖金分红的if...else...处理办法*/
{
	double bonus,bon1,bon2,bon4,bon6,bon10,fin;
	printf("请输入企业所获利润:");scanf("\n%lf",&fin);
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
	printf("员工获得的分红为:%10.3lf\n\n",bonus);
	main();
}
void Workmoney()/*员工奖金分红的switch...case...方法*/
{
	int Branch;
	double bonus,bon1,bon2,bon4,bon6,bon10,fin;
	printf("请输入企业所获利润:");scanf("\n%lf",&fin);
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
	printf("员工获得的分红为:%10.3lf\n\n",bonus);
	main();
}
void studentDe()/*学生等级划分的switch...case...方法*/
{
	char garde;
	double score;
	printf("请输入学生的分数:score=");scanf("\n%lf",&score);
	while(score>100||score<0)
	{
		printf("您的输入有误，请从新输入:score=");scanf("%lf",&score);
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
	printf("成绩为%5.1lf的学生为等级%c\n\n",score,garde);
	main();
}