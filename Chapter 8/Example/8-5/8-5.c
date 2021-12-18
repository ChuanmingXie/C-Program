#include<stdio.h>
int main()
{
	void exchange(int *p1,int *p2,int *p3);
	int a,b,c,*x=&a,*y=&b,*z=&c;
	printf("«Î ‰»Îa,b,cµƒ÷µ:");
	scanf("%d %d %d",&a,&b,&c);
	exchange(x,y,z);
	printf("%d %d %d\n",a,b,c);
	printf("%d %d %d\n",*x,*y,*z);
	return 0;
}

void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *m,int *n);
	if(*p1<*p2) swap(p1,p2);
	if(*p1<*p3) swap(p1,p3);
	if(*p2<*p3) swap(p2,p3);
}

void swap(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}