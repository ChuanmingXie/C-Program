//指针比较大小
#include<stdio.h>
int main()
{
	int *p1,*p2,a,b;
	printf("请输入a和b的值:");
	scanf("%d%d",&a,&b);
	p1=&a;p2=&b;
	if(a<b)
	{
		p1=&b;p2=&a;
	}
	printf("a=%d\tb=%d\n",a,b);
	printf("max=%d\tmin=%d\n",*p1,*p2);
	printf("max=%d\tmin=%d\n",p1,p2);
	printf("max=%d\tmin=%d\n",&a,&b);
}