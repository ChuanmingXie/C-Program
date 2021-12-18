#include<stdio.h>

int main()
{
	int n,i=1;
	double p=1,sum=0;
	double DoWhileWay(int m,double s);
	double WhileWay(int m,double s);

	printf("«Î ‰»Înµƒ÷µ:");
	scanf("%d",&n);
	printf("1!+2!+3!+...+%d!=%32.5lf\n",n,DoWhileWay(n,sum));
	printf("1!+2!+3!+...+%d!=%32.5lf\n",n,WhileWay(n,sum));

	for(i=1;i<=n;i++)
	{
		p*=i;
		sum+=p;
	}
	printf("1!+2!+3!+...+%d!=%32.5lf\n",n,sum);

}

double DoWhileWay(int m,double s)
{
	int i=1;
	double single=1;
	do{
		single*=i;
		s+=single;
		i++;
	}while(i<=m);
	return s;
}

double WhileWay(int m,double s)
{
	int i=1;
	double single=1;
	while(i<=m)
	{
		single*=i;
		s+=single;
		i++;
	}
	return s;
}