#include<stdio.h>
int main()
{
	int x,y;
	void swap(int *a,int *b);
	printf("����Ҫ������ֵ:");
	scanf("x=%d,y=%d",&x,&y);
	swap(&x,&y);
	printf("����������ֵ:x=%d,y=%d\n",x,y);
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}