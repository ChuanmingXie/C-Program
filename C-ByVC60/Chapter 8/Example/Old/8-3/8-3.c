//ָ�������Ϊ��������
#include<stdio.h>
int main()
{
	void swap(int* x,int* y);
	int *p1,*p2,a,b;
	printf("������a��b��ֵ:");
	scanf("%d%d",&a,&b);
	p1=&a;p2=&b;
	printf("p1=%d\tp1=%d\n",p1,p2);
	if(a<b)
	{

		swap(p1,p2);	//ע�⴫����ָ�������������ָ��ָ��ı���
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
