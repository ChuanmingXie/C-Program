/*求最大公约数*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int m=0,n=0;
	int ComputNum(int x,int y);
	printf("请输入数据:[m,n]=");scanf("%d,%d",&m,&n);
	printf("\n最大公约数:[%d,%d]=%d\n\n",m,n,ComputNum(m,n));
	getch();
	return 0;
}

int ComputNum(int x,int y)
{
	int r=0,s=0;
	void swap(int *a,int *b);
	if(x<y)	swap(&x,&y);
	do{
		r=x%y;x=y;y=r;
	}while(r!=0);
	return x;
}

void swap(int *a,int *b)
{
	int t;
	t=*a;*a=*b;*b=t;
}
