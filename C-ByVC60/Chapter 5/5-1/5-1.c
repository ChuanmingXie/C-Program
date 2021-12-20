/*等式求解和方程求根*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void YueshuNum();/*03.公约数和公倍数*/
void ParcisNum();/*08.水仙花数*/
void FactosNum1();/*09.完全数*/
void FactosNum2();/*09.完全数*/
void PrimesNum();/*18.素数*/
void HighMeter();/*11.物体下落弹起总距*/
void MonoeyEat();/*12.猴子吃桃数*/

void ComputFun1();/*02.公式π/4=1-1/3+1/5-1/7+.....求π近似值*/
void ComputFun2();/*05.计算a+aa+aaa+aaa+aaaa+......的值*/
void ComputFun3();/*06.计算1!+2!+3!+4!+5!+6!+......的值*/
void ComputFun4();/*07.计算∑k+∑(K^2)+∑(1/k).....的值*/
void ComputFun5();/*10.计算2/1+3/2+5/3+8/5+13/8+...的值*/
void clrscr();	  /*小小的清屏函数*/
int main()
{
	int No;
	printf("----------------------1.找公约数和公倍数--------------------------\n");
	printf("----------------------2.水仙花数的寻找法--------------------------\n");
	printf("----------------------3.完全数的求解方法--------------------------\n");
	printf("----------------------4.素数的求解及方法--------------------------\n");
	printf("----------------------5.物体下落弹起总距--------------------------\n");
	printf("----------------------6.猴子十天内吃桃数--------------------------\n");
	printf("----------------------7.公式π/4=1-1/3+1/5-1/7+.....求π----------\n");
	printf("----------------------8.计算a+aa+aaa+aaa+aaaa+......的值----------\n");
	printf("----------------------9.计算1!+2!+3!+4!+5!+6!+......的值----------\n");
	printf("---------------------10.计算∑k+∑(K^2)+∑(1/k).....的值----------\n");
	printf("---------------------11.计算2/1+3/2+5/3+8/5+13/8+...的值----------\n");
	printf("请输入所需展示算法的条目编号:No=");scanf("%d",&No);
	while(No>11||No<=0)
	{
		printf("您的输入有误，请从新输入:No=");scanf("%d",&No);
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
void YueshuNum()/*03.公约数和公倍数*/
{
	int a, b, p, r;
	void swap(int *a, int *b);
	printf("请输入两个计算数据a,b=");
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
	printf("最大公约数为:%d\n", a);
	printf("最小公倍数为:%d\n", p / a);
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
void ParcisNum()/*08.水仙花数*/
{
	int i, a, b, c;
	printf("水仙花数为:");
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
void FactosNum1()/*09.完全数*/
{
	int c = 0, i, s, n, a;
	int k1, k2, k3, k4, k5, k6, k7, k8, k9, k10;
	printf("请输入筛选完全数的范围:n=");
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
				printf("完全数%4d的因子为:%d %d ", s, k1, k2);
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
	printf("请输入完全数的筛选区间0-");
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
			printf("完全数%4d的因子为:",s);
			for(i=1;i<s;++i)
			{
				if(s%i==0)
					printf("%d ",i);
			}
			printf("\n");
		}
    }
}
void PrimesNum()/*18.素数*/
{
	int a, b, x, i = 0;
	int isprime(int n);
	printf("请输入筛选素数的区间[a,b]=");
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
void HighMeter()/*11.物体下落弹起总距*/
{
	double h,s=0;int i;
	printf("请输入初始的下落高度:h=");
	scanf("%lf",&h);
	for(i=0;i<10;++i)
	{
		h/=2;
		s+=(2*h);		
		if(i==9)printf("第%d次反弹高度为:%5.6lf m\n",i+1,h);
		if(i==8)printf("第%d次落地经历了:%5.6lf m\n",i+2,s+100);
	}
	clrscr();
	main();
}
void MonoeyEat()/*12.猴子吃桃数*/
{
	int s=0,n=1,i;
	for(i=9;i>0;--i)
	{
		s=(n+1)*2;
		n=s;
	}
	printf("第10天摘了 %d 个桃子\n",s);
	clrscr();
	main();
}

void ComputFun1()/*02.公式π/4=1-1/3+1/5-1/7+.....求π近似值*/
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
	printf("本次fabs(t)>=1e-6共循环执行 %d 次,π=%10.10lf\n",count,pi);
	clrscr();
	main();
}
void ComputFun2()/*05.计算a+aa+aaa+aaa+aaaa+......的值*/
{
	int a,n,i,sum=0,mul=0;
	printf("请输入计算的参数a,n=");
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
void ComputFun3()/*06.计算1!+2!+3!+4!+5!+6!+......的值*/
{
	double sum=0,mul=1;
	int n,i;
	printf("请输入计算到的位置:n=");scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		mul*=i;
		sum+=mul;
	}
	printf("1!+2!+...+%d!=%22.15e\n",n,sum);
	clrscr();
	main();
}
void ComputFun4()/*07.计算∑k+∑(K^2)+∑(1/k).....的值*/
{
	int n1=100,n2=50,n3=10;
	double k,s1=0,s2=0,s3=0;
	for(k=1;k<=n1;++k)
		s1+=k;
	for(k=1;k<=n2;++k)
		s2+=k*k;
	for(k=1;k<=n3;++k)
		s3+=1/k;
	printf("∑k+∑(K^2)+∑(1/k)=%15.6lf\n",s1+s2+s3);
	clrscr();
	main();
}
void ComputFun5()/*10.计算2/1+3/2+5/3+8/5+13/8+...的值*/
{
	int n,i;
	double sum=0,t,f1=1,f2=2;
	printf("请输入要计算到的位置:n=");
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
