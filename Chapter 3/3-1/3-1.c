/*��ѧ����*/
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
	printf("------1.����GDP-------\n");
	printf("------2.������Ϣ------\n");
	printf("------3.�������------\n");
	printf("------4.Բ�μ���------\n");
	printf("������Ҫ���м���ı��:");
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
	printf("\n��������������r,����y:r,y=");
	scanf("%lf,%lf",&r,&y);
	printf("%5.2lf���GDPΪ����%5.3lf��\n\n",y,pow(1+r,y));
	main();
}

void LXiComput()
{
	double r1=0.0585,r2=0.054,r3=0.0468,r4=0.0414,r5=0.0072,p=1000;
	printf("5�궨�ڱ�Ϣ��:      %5.2lf\n",p*((1+r1)*5));
	printf("2+3�걾Ϣ��:        %5.2lf\n",p*(1+r3*2)*(1+r2*3));
	printf("3+2�걾Ϣ��:        %5.2lf\n",p*(1+r2*3)*(1+r3*2));
	printf("1�궨�ڴ���α�Ϣ��:%5.2lf\n",p*pow(1+r4,5));
	printf("5����ڱ�Ϣ��:      %5.2lf\n\n",p*pow(1+r5/4,4*5));
	main();
}

void DkuComput()
{
	double d=0,p=0,r=0;
	printf("����������ܶ�,�����¶�,������:\nd,p,r=");
	scanf("%lf,%lf,%lf",&d,&p,&r);
	printf("����Ҫ����%5.2lf����\n\n",log10(p/(p-d*r))/log10(1+r));//ע�������ʾ��
	main();
}

void CriComput()
{
	double PI=3.141526,r=0,h=0;
	printf("������Բ�뾶,Բ��:r,h=");
	scanf("%lf,%lf",&r,&h);
	printf("Բ���ܳ�:%5.2lf\n",2*PI*r);
	printf("Բ�����:%5.2lf\n",PI*r*r);
	printf("Բ�����:%5.2lf\n",PI*r*r*h);
	printf("�������:%5.2lf\n",4*PI*r*r);
	printf("�������:%5.2lf\n\n",(3.0/4.0)*PI*r*r*r);
	main();
}



