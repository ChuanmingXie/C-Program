/*��ʽ���ͷ������*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void YueshuNum();/*03.��Լ���͹�����*/
void ParcisNum();/*08.ˮ�ɻ���*/
void FactosNum1();/*09.��ȫ��*/
void FactosNum2();/*09.��ȫ��*/
void PrimesNum();/*18.����*/
void HighMeter();/*11.�������䵯���ܾ�*/
void MonoeyEat();/*12.���ӳ�����*/

void ComputFun1();/*02.��ʽ��/4=1-1/3+1/5-1/7+.....��н���ֵ*/
void ComputFun2();/*05.����a+aa+aaa+aaa+aaaa+......��ֵ*/
void ComputFun3();/*06.����1!+2!+3!+4!+5!+6!+......��ֵ*/
void ComputFun4();/*07.�����k+��(K^2)+��(1/k).....��ֵ*/
void ComputFun5();/*10.����2/1+3/2+5/3+8/5+13/8+...��ֵ*/
void clrscr();	  /*СС����������*/
int main()
{
	int No;
	printf("----------------------1.�ҹ�Լ���͹�����--------------------------\n");
	printf("----------------------2.ˮ�ɻ�����Ѱ�ҷ�--------------------------\n");
	printf("----------------------3.��ȫ������ⷽ��--------------------------\n");
	printf("----------------------4.��������⼰����--------------------------\n");
	printf("----------------------5.�������䵯���ܾ�--------------------------\n");
	printf("----------------------6.����ʮ���ڳ�����--------------------------\n");
	printf("----------------------7.��ʽ��/4=1-1/3+1/5-1/7+.....���----------\n");
	printf("----------------------8.����a+aa+aaa+aaa+aaaa+......��ֵ----------\n");
	printf("----------------------9.����1!+2!+3!+4!+5!+6!+......��ֵ----------\n");
	printf("---------------------10.�����k+��(K^2)+��(1/k).....��ֵ----------\n");
	printf("---------------------11.����2/1+3/2+5/3+8/5+13/8+...��ֵ----------\n");
	printf("����������չʾ�㷨����Ŀ���:No=");scanf("%d",&No);
	while(No>11||No<=0)
	{
		printf("���������������������:No=");scanf("%d",&No);
	}
	switch(No){
	case 1:YueshuNum();break;
	case 2:ParcisNum();break;
	case 3:FactosNum2();
		   FactosNum1();break;
	case 4:PrimesNum();break;
	case 5:HighMeter();break;
	case 6:MonoeyEat();break;
	case 7:ComputFun1();break;
	case 8:ComputFun2();break;
	case 9:ComputFun3();break;
	case 10:ComputFun4();break;
	case 11:ComputFun5();break;
	}
	getch();
	return 0;

}
void clrscr()
{
	if(getch()) 
		system("CLS");
}
void YueshuNum()/*03.��Լ���͹�����*/
{
	int a, b, p, r;
	void swap(int *a, int *b);
	printf("������������������a,b=");
	scanf("%d,%d", &a, &b);
	if (a < b)
		swap(&a, &b);
	p = a * b;
	while (r != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("���Լ��Ϊ:%d\n", a);
	printf("��С������Ϊ:%d\n", p / a);
	clrscr();
	main();
}

void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void ParcisNum()/*08.ˮ�ɻ���*/
{
	int i, a, b, c;
	printf("ˮ�ɻ���Ϊ:");
	for (i = 100; i < 1000; ++i)
	{
		a = i / 100;
		b = (i % 100 - i % 10) / 10;
		c = i % 10;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("%3d  ", i);
		}
	}
	clrscr();
	main();
}
void FactosNum1()/*09.��ȫ��*/
{
	int c = 0, i, s, n, a;
	int k1, k2, k3, k4, k5, k6, k7, k8, k9, k10;
	printf("������ɸѡ��ȫ���ķ�Χ:n=");
	scanf("%d", &n);
	for (s = 2; s < n; ++s)
	{
		c = 0;
		a = s;
		for (i = 1; i < s; ++i)
		{
			if (s % i == 0)
			{
				c++;
				a = a - i;
				switch (c)
				{
				case 1:
					k1 = i;
					break;
				case 2:
					k2 = i;
					break;
				case 3:
					k3 = i;
					break;
				case 4:
					k4 = i;
					break;
				case 5:
					k5 = i;
					break;
				case 6:
					k6 = i;
					break;
				case 7:
					k7 = i;
					break;
				case 8:
					k8 = i;
					break;
				case 9:
					k9 = i;
					break;
				case 10:
					k10 = i;
					break;
				}
			}
		}
		if (a == 0)
		{
			if (c > 1)
				printf("��ȫ��%4d������Ϊ:%d %d ", s, k1, k2);
			if (c > 2)
				printf("%d ", k3);
			if (c > 3)
				printf("%d ", k4);
			if (c > 4)
				printf("%d ", k5);
			if (c > 5)
				printf("%d ", k5);
			if (c > 6)
				printf("%d ", k6);
			if (c > 7)
				printf("%d ", k7);
			if (c > 8)
				printf("%d ", k8);
			if (c > 9)
				printf("%d ", k9);
			if (c > 10)
				printf("%d ", k10);
			printf("\n");
		}
	}
	clrscr();
	main();
}
void FactosNum2()
{
	int s,i,n,m;
	printf("��������ȫ����ɸѡ����0-");
	scanf("\n%d",&n);
	for(s=2;s<n;++s)
	{
		m=0;
		for(i=1;i<s;++i)
		{
			if((s%i)==0)
				m+=i;
		}
		if(m==s)
		{
			printf("��ȫ��%4d������Ϊ:",s);
			for(i=1;i<s;++i)
			{
				if(s%i==0)
					printf("%d ",i);
			}
			printf("\n");
		}
    }
}
void PrimesNum()/*18.����*/
{
	int a, b, x, i = 0;
	int isprime(int n);
	printf("������ɸѡ����������[a,b]=");
	scanf("%d,%d", &a, &b);
	for (x = a; x < b; ++x)
	{
		if (isprime(x) && x != 1)
		{
			printf("%3d  ", x);
			if (++i % 8 == 0)
				printf("\n");
		}
	}
	clrscr();
	main();
}
int isprime(int n)
{
	int i;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void HighMeter()/*11.�������䵯���ܾ�*/
{
	double h,s=0;int i;
	printf("�������ʼ������߶�:h=");
	scanf("%lf",&h);
	for(i=0;i<10;++i)
	{
		h/=2;
		s+=(2*h);		
		if(i==9)printf("��%d�η����߶�Ϊ:%5.6lf m\n",i+1,h);
		if(i==8)printf("��%d����ؾ�����:%5.6lf m\n",i+2,s+100);
	}
	clrscr();
	main();
}
void MonoeyEat()/*12.���ӳ�����*/
{
	int s=0,n=1,i;
	for(i=9;i>0;--i)
	{
		s=(n+1)*2;
		n=s;
	}
	printf("��10��ժ�� %d ������\n",s);
	clrscr();
	main();
}

void ComputFun1()/*02.��ʽ��/4=1-1/3+1/5-1/7+.....��н���ֵ*/
{
	int sign=1,count=0;
	double pi=0,n=1,t=1;
	while(fabs(t)>=1e-6)	/*while(fabs(t)>=1e-8)*/
	{
		pi+=t;
		n=n+2;
		sign=-sign;
		t=sign/n;
		++count;
	}
	pi=pi*4;
	printf("����fabs(t)>=1e-6��ѭ��ִ�� %d ��,��=%10.10lf\n",count,pi);
	clrscr();
	main();
}
void ComputFun2()/*05.����a+aa+aaa+aaa+aaaa+......��ֵ*/
{
	int a,n,i,sum=0,mul=0;
	printf("���������Ĳ���a,n=");
	scanf("%d,%d",&a,&n);
	for(i=0;i<n;++i)
	{
		mul+=a;
		sum+=mul;
		a*=10;
		printf("%d+",mul);
	}
	printf("=%d\n",sum);
	clrscr();
	main();
}
void ComputFun3()/*06.����1!+2!+3!+4!+5!+6!+......��ֵ*/
{
	double sum=0,mul=1;
	int n,i;
	printf("��������㵽��λ��:n=");scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		mul*=i;
		sum+=mul;
	}
	printf("1!+2!+...+%d!=%22.15e\n",n,sum);
	clrscr();
	main();
}
void ComputFun4()/*07.�����k+��(K^2)+��(1/k).....��ֵ*/
{
	int n1=100,n2=50,n3=10;
	double k,s1=0,s2=0,s3=0;
	for(k=1;k<=n1;++k)
		s1+=k;
	for(k=1;k<=n2;++k)
		s2+=k*k;
	for(k=1;k<=n3;++k)
		s3+=1/k;
	printf("��k+��(K^2)+��(1/k)=%15.6lf\n",s1+s2+s3);
	clrscr();
	main();
}
void ComputFun5()/*10.����2/1+3/2+5/3+8/5+13/8+...��ֵ*/
{
	int n,i;
	double sum=0,t,f1=1,f2=2;
	printf("������Ҫ���㵽��λ��:n=");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		sum+=f2/f1;
		t=f2;
		f2=f1+f2;
		f1=t;
	}
	printf("2/1+3/2+...+%.0lf/%.0lf=%16.10lf\n",f2,f1,sum);
	clrscr();
	main();
}
