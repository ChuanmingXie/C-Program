#include<stdio.h>
int main()
{
	int max(int,int);
	int min(int,int);
	int (*p)(int,int);
	char *str="abcd";
	int a,b,n;
	printf("������a��b��ֵ:");
	scanf("%d %d",&a,&b);
	printf("��ѡ��ģʽ1��2:");
	scanf("%d",&n);
	if(n==1) 
	{
		p=max;
		printf("a=%d\nb=%d\nmax=%d\n",a,b,(*p)(a,b));
	}
	if(n==2) 
	{
		p=min;
		printf("a=%d\nb=%d\nmin=%d\n",a,b,(*p)(a,b));
	}

}
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x<y?x:y;
}