/*行列式与统计方案*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void MatrxPlay();/*四阶方阵的操作*/
void PrintPict1();/*图形图案的打印*/
void PrintPict2();/*图形图案的打印*/
void PrintPict3();/*图形图案的打印*/
void CountsStr();/*对字符串的统计*/
void PlanCempe();/*比赛方案的制定*/

void DieDaifu1();/*迭代法求平方根*/
void DieDaifu2();/*迭代法求三次根*/
void Halffunct();/*二分法求三次根*/
void clrscr();	 /*小小的清屏函数*/
int main()
{
	int No;
	printf("-----------------------1.四阶方阵的操作-----------------------\n");
	printf("-----------------------2.图形图案的打印-----------------------\n");
	printf("-----------------------3.对字符串的统计-----------------------\n");
	printf("-----------------------4.比赛方案的制定-----------------------\n");
	printf("-----------------------5.迭代法求平方根-----------------------\n");
	printf("-----------------------6.迭代法求三次根-----------------------\n");
	printf("-----------------------7.二分法求三次根-----------------------\n");
	printf("请输入所需展示算法的条目编号:No=");scanf("%d",&No);
	while(No>7||No<=0)
	{
		printf("您的输入有误，请从新输入:No=");scanf("%d",&No);
	}
	switch(No){
	case 1:MatrxPlay();break;
	case 2:PrintPict1();
		   PrintPict2();
		   PrintPict3();break;
	case 3:CountsStr();break;
	case 4:PlanCempe();break;
	case 5:DieDaifu1();break;
	case 6:DieDaifu2();break;
	case 7:Halffunct();break;
	}
	getch();
	return 0;
}
void clrscr()
{
	if(getch())
		system("CLS");
}
void MatrxPlay()/*四阶方阵的操作*/
{
	int i,j,n=0;
	for(i=1;i<=4;++i){
		for(j=1;j<=5;++j,++n)
		{
			if(n%5==0)printf("\n");
			if(j==1&&i==3)break;
			printf("%d\t",i*j);
		}
	}
	printf("\n");
	for(i=1;i<=4;++i){
		for(j=1;j<=5;++j,++n)
		{
			if(n%5==0)printf("\n");
			printf("%d\t",i*j);
		}
	}
	printf("\n");
	for(i=1;i<=4;++i){
		for(j=1;j<=5;++j,++n)
		{
			if(n%5==0)printf("\n");
			if(j==1&&i==3)continue;
			printf("%d\t",i*j);
		}
	}
	printf("\n");
	clrscr();
	main();
}
void PrintPict1()/*图形图案的打印*/
{
	int i,j,n=0;
	for(i=0;i<=6;++i)
	{
		for(j=0;j<=6;++j,++n){
			if(n%7==0)printf("\n");
			switch(i)
			{
			case 0:
			case 6:if(j==3)printf(" * ");else printf("   ");break;
			case 2:
			case 4:if(j>=1&&j<=5)printf(" * ");else printf("   ");break;
			case 1:
			case 5:if(j>=2&&j<=4)printf(" * ");else printf("   ");break;			
			case 3:if(j>=0&&j<=6)printf(" * ");else printf("   ");break;				
			}
		}
	}
	printf("\n");
}
void PrintPict2()/*图形图案的打印*/
{
	int i,j;
	for(i=0;i<=3;++i){
		for(j=0;j<=2-i;++j)
			printf("   ");
		for(j=0;j<=2*i;++j)
			printf(" * ");
	printf("\n");
	}
	for(i=0;i<3;++i){
		for(j=0;j<=i;++j)
			printf("   ");
		for(j=0;j<=4-2*i;++j)
			printf(" * ");
	printf("\n");
	}
	printf("\n");
}
void PrintPict3()
{
	int i, k, j;
	for (i = 0; i <= 2; ++i)
	{
		for (k = 0; k <= 2 - i; ++k)
			printf(" ");
		for (k = 0; k <= 2 * i; ++k)
			printf("*");
		for (j = 0; j <= 4 - 2 * i; ++j)
			printf(" ");
		for (j = 0; j <= 2 * i; ++j)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < 13; ++i)
		printf("*");
	printf("\n");
	for (i = 0; i <= 2; ++i)
	{
		for (k = 0; k <= i; ++k)
			printf(" ");
		for (k = 0; k <= 4 - 2 * i; ++k)
			printf("*");
		for (j = 0; j <= 2 * i; ++j)
			printf(" ");
		for (j = 0; j <= 4 - 2 * i; ++j)
			printf("*");
		printf("\n");
	}
	printf("\n");
	/* 
	   *           *
	  ***************
	 *****************
	  ***************
	   *           *
	 */
	for (i = 0; i <= 1; ++i)
	{
		for (j = 0; j <= 1 - i; ++j)
			printf(" ");
		for (j = 0; j <= i; ++j)
			printf("*");
		for (k = 0; k <= 11; ++k)
			printf(" ");
		for (k = 0; k <= i; ++k)
			printf("*");
		printf("\n");
	}
	for (i = 0; i <= 17; ++i)
		printf("*");
	printf("\n");
	for (i = 0; i <= 1; ++i)
	{
		for (j = 0; j <= i; ++j)
			printf(" ");
		for (j = 0; j <= 1 - i; ++j)
			printf("*");
		for (k = 0; k <= 11; ++k)
			printf(" ");
		for (k = 0; k <= 1 - i; ++k)
			printf("*");
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 18; ++j)
		{
			switch (i)
			{
			case 0:
			case 9:
				if (j != 7 && j != 10)
					printf(" ");
				else
					printf("*");
				break;
			case 1:
			case 8:
				if (j != 3 && j != 14)
					printf(" ");
				else
					printf("*");
				break;
			case 2:
			case 7:
				if (j != 1 && j != 16)
					printf(" ");
				else
					printf("*");
				break;
			case 3:
			case 6:
				printf(" ");
				break;
			case 4:
			case 5:
				if (j != 0 && j != 17)
					printf(" ");
				else
					printf("*");
				break;
			}
		}
		printf("\n");
	}

	printf("\n\n");
	clrscr();
	main();
}
void CountsStr()/*对字符串的统计*/
{
	char c;
	int letter = 0, space = 0, digit = 0, other = 0;
	printf("请输入一行字符串:Str=\n");
	scanf("\n");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			++letter;
		else if (c == ' ')
			++space;
		else if (c >= '0' && c <= '9')
			++digit;
		else
			++other;
	}
	printf("该字符串中\n字母个数:%d\n数字个数:%d\n空格个数:%d\n其他字符:%d\n",
		   letter, digit, space, other);
	printf("\n");
	clrscr();
	main();
}
void PlanCempe()/*比赛方案的制定*/
{
	char i, j, k;
	for (i = 'X'; i <= 'Z'; ++i)
	{
		for (j = 'X'; j <= 'Z'; ++j)
		{
			if (i != j)
			{
				for (k = 'X'; k <= 'Z'; ++k)
				{
					if (i != k && j != k)
						if (i != 'X' && k != 'X' && k != 'Z')
							printf("比赛PK对手如下:\nA----%c\nB----%c\nC----%c\n\n", i, j,
								   k);
				}
			}
		}
	}
	clrscr();
	main();
}

void DieDaifu1()/*迭代法求平方根*/
{
	double a,x0,x1;
	printf("请输入要计算的数据:a=");scanf("%lf",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x0-x1)>=1e-5){
		x0=x1;
		x1=(x0+a/x0)/2;
	}
	printf("数据%4.2lf开平方后的根为:%4.7lf\n",a,x1);
	clrscr();
	main();
}

/*2x^3-4x^2+3x-6=0*/
void DieDaifu2()/*迭代法求三次根*/
{
	double x1,x0,f,f1;
	x1=1.5;
	do{
		x0=x1;
		f=((2*x0-4)*x0+3)*x0-6;
		f1=(6*x0-8)*x0+3;
		x1=x0-f/f1;
	}while(fabs(x0-x1)>=1e-5);
	printf("方程2x^3-4x^2+3x-6=0的根为:%4.2lf\n",x1);
	clrscr();
	main();
}
void Halffunct()/*二分法求三次根*/
{
	double fa,fb,fx,a=0,b=0,x;
	printf("请输入二分法的两个区间端点[a,b]=");scanf("%lf,%lf",&a,&b);
	fa=((2*a-4)*a+3)*a-6; //printf("%5.3lf\n",fa);
	fb=((2*b-4)*b+3)*b-6; //printf("%5.3lf\n",fb);
	while((fa*fb)>0){
		printf("您的输入有误,请从新输入:[a,b]=");scanf("%lf,%lf",&a,&b);
		fa=((2*a-4)*a+3)*a-6; fb=((2*b-4)*b+3)*b-6;
	}
	do{
		x=(a+b)/2;
		fx=((2*x-4)*x+3)*x-6;
		if((fx*fa)<0){
			b=x;
			fb=fx;
		}
		else{
			a=x;
			fa=fx;
		}
	}while(fabs(fx)>=1e-5);
	printf("方程2x^3-4x^2+3x-6=0的根为:%4.2lf\n",x);
	clrscr();
	main();
}
