//��������������Ҫ���������֮�нϴ���������ú���ʵ��

#include<stdio.h>

int main()
{
	int x=0,y=0;
	int max(int a,int b);
	printf("�������������:");
	scanf("x=%d,y=%d",&x,&y);

	printf("max=%d\n",max(x,y));
}

int max1(int a,int b)
{
	int t;
	if(a<b)
		t=b;
	else t=a;
	return t;
}

int max(int a,int b)
{return (a>b?a:b);}