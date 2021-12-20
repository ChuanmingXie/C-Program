#include<stdio.h>
int main()
{
	int *p1,*p2,*p3,a,b,c;
	void exchange(int*,int*,int*);
	printf("请输入a,b,c的值:");
	scanf("%d,%d,%d",&a,&b,&c);
	p1=&a;p2=&b;p3=&c;		//注意不要写成指针指向的变量，要写成指针变量被赋值为取址；
	exchange(p1,p2,p3);
	printf("%d,%d,%d\n",a,b,c);
}

void exchange(int* x,int* y,int* z)
{
	void swap(int*,int*);
	if(*x<*y) swap(x,y);
	if(*x<*z) swap(x,z);
	if(*y<*z) swap(y,z);
}

void swap(int* m,int* n)
{
	int p;
	p=* m;
	* m=* n;
	* n=p;
}