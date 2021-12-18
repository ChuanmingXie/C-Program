#include<stdio.h>
#include<string.h>
int main()
{
	int *p1,*p2,*p,a,b;
	printf("请输入两个整数:");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	if(a<b)
	{
		p=p1;p1=p2;p2=p;			//指针交换了，但a和b的数值并没有变
	}
	printf("a=%d\tb=%d\n",a,b);		//可以理解为*p1始终指向较大的数值
	printf("Max=%d\tMin=%d\n",*p1,*p2);
	printf("Max的地址为:%o,Min的地址为:%o\n",p1,p2);
	printf("Max的地址为:%d,Min的地址为:%d\n",p1,p2);
	printf("Max的地址为:%x,Min的地址为:%x\n",p1,p2);
}