#include<stdio.h>
#include<math.h>
int main()
{
	long n,m,p;
	int a,b,c,d,e,t=0;

	printf("������һ����λ��������n(n<100000):\n");
	scanf("%ld",&n);

	if((n/10000)!=0) m=5;
	else if((n/1000)!=0) m=4;
	else if((n/100)!=0) m=3;
	else if((n/10)!=0) m=2;
	else m=1;

	switch(m)
	{
	case 5:p=n/10000;	a=p;n-=p*10000;	t+=a*pow(10,m-5);
	case 4:p=n/1000;	b=p;n-=p*1000;	t+=b*pow(10,m-4);
	case 3:p=n/100;		c=p;n-=p*100;	t+=c*pow(10,m-3);
	case 2:p=n/10;		d=p;n-=p*10;	t+=d*pow(10,m-2);
	case 1:p=n;			e=p;			t+=e*pow(10,m-1);
	}
	printf("�������Ϊ%ldλ����������Ϊ%ld\n",m,t);
}