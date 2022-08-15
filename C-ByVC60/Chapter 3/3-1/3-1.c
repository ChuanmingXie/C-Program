/*科学计算*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int Num;
	void GDPComput();
	void LXiComput();
	void DkuComput();
	void CriComput();
	printf("------1.计算GDP-------\n");
	printf("------2.计算利息------\n");
	printf("------3.计算贷款------\n");
	printf("------4.圆形计算------\n");
	printf("请输入要进行计算的编号:");
	scanf("%d",&Num);
	switch(Num)
	{
		case 1:GDPComput();break;
		case 2:LXiComput();break;
		case 3:DkuComput();break;
		case 4:CriComput();break;
		default :break;
	}
	getch();
	return 0;
}

void GDPComput()
{
	double r=0,y=0;
	printf("\n请输入年增长率r,年数y:r,y=");
	scanf("%lf,%lf",&r,&y);
	printf("%5.2lf年后GDP为当今%5.3lf倍\n\n",y,pow(1+r,y));
	main();
}

void LXiComput()
{
	double r1=0.0585,r2=0.054,r3=0.0468,r4=0.0414,r5=0.0072,p=1000;
	printf("5年定期本息和:      %5.2lf\n",p*((1+r1)*5));
	printf("2+3年本息和:        %5.2lf\n",p*(1+r3*2)*(1+r2*3));
	printf("3+2年本息和:        %5.2lf\n",p*(1+r2*3)*(1+r3*2));
	printf("1年定期存五次本息和:%5.2lf\n",p*pow(1+r4,5));
	printf("5年活期本息和:      %5.2lf\n\n",p*pow(1+r5/4,4*5));
	main();
}

void DkuComput()
{
	double d=0,p=0,r=0;
	printf("请输入贷款总额,还款月额,月利率:\nd,p,r=");
	scanf("%lf,%lf,%lf",&d,&p,&r);
	printf("您需要还款%5.2lf个月\n\n",log10(p/(p-d*r))/log10(1+r));//注意对数表示法
	main();
}

void CriComput()
{
	double PI=3.141526,r=0,h=0;
	printf("请输入圆半径,圆柱:r,h=");
	scanf("%lf,%lf",&r,&h);
	printf("圆形周长:%5.2lf\n",2*PI*r);
	printf("圆形面积:%5.2lf\n",PI*r*r);
	printf("圆柱体积:%5.2lf\n",PI*r*r*h);
	printf("球形面积:%5.2lf\n",4*PI*r*r);
	printf("球形体积:%5.2lf\n\n",(3.0/4.0)*PI*r*r*r);
	main();
}



