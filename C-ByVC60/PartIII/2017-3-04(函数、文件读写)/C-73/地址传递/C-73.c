#include<stdio.h>
int main()
{
	int x,y;
	void swap(int *a,int *b);
	printf("输入要交换的值:");
	scanf("x=%d,y=%d",&x,&y);
	swap(&x,&y);
	printf("输出交换后的值:x=%d,y=%d\n",x,y);
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}