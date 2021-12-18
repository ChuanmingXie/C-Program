#include<stdio.h>
int main()
{
	int max(int x,int y);
	int a[10],i=0,m=0,n=0;
	printf("请输入10个值:\n");
	for(;i<10;i++)
		scanf("%d",&a[i]);

	for(i=1,m=a[0],n=0;i<10;i++)
	{
		if(max(m,a[i])>m)
		{
			m=max(m,a[i]);
			n=i;
		}
	}

	printf("\n最大的数为:%d 它是第 %d 个数\n",m,n+1);
}

int max(int x,int y)
{
	return x>y?x:y;
}