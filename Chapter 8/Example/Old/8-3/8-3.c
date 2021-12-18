//指针变量作为函数参数
#include<stdio.h>
int main()
{
	void swap(int* x,int* y);
	int *p1,*p2,a,b;
	printf("请输入a和b的值:");
	scanf("%d%d",&a,&b);
	p1=&a;p2=&b;
	printf("p1=%d\tp1=%d\n",p1,p2);
	if(a<b)
	{

		swap(p1,p2);	//注意传的是指针变量名，不是指针指向的变量
	}
	printf("a=%d\tb=%d\n",a,b);
	printf("max=%d\tmin=%d\n",*p1,*p2);
	printf("p1=%d\tp2=%d\n",p1,p2);
}

void swap(int* x,int* y)
{
	int temp;
	temp=* x;
	* x=* y;
	* y=temp;
}
