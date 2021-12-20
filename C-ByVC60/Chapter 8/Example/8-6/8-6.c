#include<stdio.h>
#include<time.h>
int main()
{
	int a[10],i=0;
	int *p=a;
	srand((unsigned)time(NULL));
	for(;i<10;i++)
	{
		a[i]=rand()%100-50;
		//scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t%x\t%x\t%d\t%d\n",a[i],p+i,&a[i],*(p+i),*(a+i));
	}
}